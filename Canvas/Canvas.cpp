#include "Canvas.h"
#include <iostream>
using namespace std;
Canvas::Canvas(int width, int height) :w{ width }, h{ height } {
	matrix =(char**)malloc(h * sizeof(char*));
	for (int i = 0;i < w;i++)
		matrix[i]= (char*)malloc(w * sizeof(char));
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = 0;i < w;i++)
		for (int j = 0;j < h;j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) >= ray * (ray-1))&& ((i - x) * (i - x) + (j - y) * (j - y) <= ray * (ray+1)))
				matrix[i][j] = ch;
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = 0;i < w;i++)
		for (int j = 0;j < h;j++)
			if (((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray))
				matrix[i][j] = ch;
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	drawLine(left, top, left, bottom, ch);
	drawLine(left, top, right, top, ch);
	drawLine(left, bottom, right+1, bottom, ch);
	drawLine(right,top, right , bottom, ch);
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left;i < right;i++)
		for (int j = top;j < bottom;j++)
			matrix[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	matrix[x][y] = ch;
}

void Canvas::Print()
{
	for (int i = 0;i < h;i++)
	{
		for (int j = 0;j < w;j++)
			printf("%c ", matrix[i][j]);
		printf("\n");
	}
}

void Canvas::Clear()
{
	for (int i = 0;i < w;i++)
		for (int j = 0;j < h;j++)
			matrix[i][j] =' ';
}



void Canvas::drawLine(int x0, int y0, int x1, int y1,char ch)
{
	plotLine(x0, y0, x1, y1, ch);
}
void Canvas::plotlinelow(int x0, int y0, int x1, int y1,char ch)
{
	int dx = x1 - x0;
		int dy = y1 - y0;
		int yi = 1,y,D;
		if (dy < 0)
		{
			yi = -1;
			dy = -dy;
		}
		D = (2 * dy) - dx;
		y = y0;

		for (int x = x0;x < x1;x++)
		{
			matrix[y][x] = ch;
			if (D > 0)
			{
				y = y + yi;
				D = D + (2 * (dy - dx));
			}

			else
				D = D + 2 * dy;
		}
}
void Canvas::plotLineHigh(int x0, int y0, int x1, int y1, char ch)
{
	int dx = x1 - x0;
		int dy = y1 - y0;
		int xi = 1, D, x;
		if (dx < 0)
		{
			xi = -1;
			dx = -dx;
		}
		D = (2 * dx) - dy;
		x = x0;

		for (int y = y0;y < y1;y++)
		{
			matrix[y][x] = ch;
			if (D > 0)
			{
				x = x + xi;
				D = D + (2 * (dx - dy));
			}
			else
				D = D + 2 * dx;
		}
}
void Canvas::plotLine(int x0, int y0, int x1, int y1, char ch)
{
	if (abs(y1 - y0) < abs(x1 - x0))
	{
		if (x0 > x1)
			plotlinelow(x1, y1, x0, y0, ch);
		else
			plotlinelow(x0, y0, x1, y1, ch);
	}
	else {
		if (y0 > y1)
			plotLineHigh(x1, y1, x0, y0, ch);
		else
			plotLineHigh(x0, y0, x1, y1, ch);
	}
}
