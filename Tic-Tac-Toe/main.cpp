// Tic-Tac-Toe using WinBgim graphics library in C/C++

#include <winbgim.h>
#include <stdio.h>
#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <time.h>
using namespace std;
void initializarematrice(int a[3][3])
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            a[i][j] = 0;
}

void pozitie0(int a[3][3])
{
    int i, j;
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] == 0)
            {


                a[i][j] = 2;

                if (i == 0 && j == 0)
                {
                    delay(200);
                    circle(100, 100, 45);
                }
                if (i == 0 && j == 1)
                {
                    delay(200);
                    circle(200, 100, 45);
                }
                if (i == 0 && j == 2)
                {
                    delay(200);
                    circle(300, 100, 45);
                }
                //LINIA 2
                if (i == 1 && j == 0)
                {
                    delay(200);
                    circle(100, 200, 45);
                }
                if (i == 1 && j == 1)
                {
                    delay(200);
                    circle(200, 200, 45);
                }
                if (i == 1 && j == 2)
                {
                    delay(200);
                    circle(300, 200, 45);
                }
                //LINIA 3
                if (i == 2 && j == 0)
                {
                    delay(200);
                    circle(100, 300, 45);
                }
                if (i == 2 && j == 1)
                {
                    delay(200);
                    circle(200, 300, 45);
                }

                if (i == 2 && j == 2)
                {
                    delay(200);
                    circle(300, 300, 45);
                }
                i = j = 3;
            }
        }
}
void verificaregreu(int a[3][3])
{
    int ok = 0;
    for (int i = 0; i < 3; i++)
    {
        //pentru a castiga 0 :

        if (a[i][0] == a[i][1] && a[i][0] == 2 && a[i][2] == 0)
        {
            a[i][2] = 2;
            delay(200);
            circle(300, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[i][0] == a[i][2] && a[i][0] == 2 && a[i][1] == 0)
        {
            a[i][1] = 2;
            delay(200);
            circle(200, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[i][1] == a[i][2] && a[i][1] == 2 && a[i][0] == 0)
        {
            a[i][0];
            delay(200);
            circle(100, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[0][i] == a[1][i] && a[0][i] == 2 && a[2][i] == 0)
        {
            a[2][i] = 2;
            delay(200);
            circle(100 + 100 * i, 300, 45);
            ok++;
            break;

        }
        if (a[1][i] == a[2][i] && a[1][i] == 2 && a[0][i] == 0)
        {
            a[0][i];
            delay(200);
            circle(100 + 100 * i, 100, 45);
            ok++;
            break;

        }
        if (a[0][i] == a[2][i] && a[0][i] == 2 && a[1][i] == 0)
        {
            a[1][i] = 2;
            delay(200);
            circle(100 + 100 * i, 200, 45);
            ok++;
            break;

        }
        if (a[1][1] == a[2][2] && a[0][0] == 0 && a[1][1] == 2)
        {
            a[0][0] = 2;
            delay(200);
            circle(100, 100, 45);
            ok++;
            break;

        }
        if (a[0][0] == a[2][2] && a[1][1] == 0 && a[0][0] == 2)
        {
            a[1][1] = 2;
            delay(200);
            circle(200, 200, 45);
            ok++;
            break;

        }
        if (a[0][0] == a[1][1] && a[2][2] == 0 && a[0][0] == 2)
        {
            a[2][2] = 2;
            delay(200);
            circle(300, 300, 45);
            ok++;
            break;

        }
        if (a[0][2] == a[1][1] && a[2][0] == 0 && a[0][2] == 2)
        {
            a[2][0] = 2;
            delay(200);
            circle(100, 300, 45);
            ok++;
            break;

        }
        if (a[0][2] == a[2][0] && a[0][2] == 2 && a[1][1] == 0)
        {
            a[1][1] = 2;
            delay(200);
            circle(200, 200, 45);
            ok++;
            break;

        }
        if (a[2][0] == a[1][1] && a[0][2] == 0 && a[1][1] == 2)
        {
            a[0][2] = 2;
            delay(200);
            circle(300, 100, 45);
            ok++;
            break;

        }

        //pentru a nu castiga X :

        if (a[i][0] == a[i][1] && a[i][0] != 0 && a[i][2] == 0)
        {
            a[i][2] = 2;
            delay(200);
            circle(300, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[i][0] == a[i][2] && a[i][0] != 0 && a[i][1] == 0)
        {
            a[i][1] = 2;
            delay(200);
            circle(200, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[i][1] == a[i][2] && a[i][1] != 0 && a[i][0] == 0)
        {
            a[i][0] = 2;
            delay(200);
            circle(100, 100 + 100 * i, 45);
            ok++;
            break;

        }
        if (a[0][i] == a[1][i] && a[0][i] != 0 && a[2][i] == 0)
        {
            a[2][i] = 2;
            delay(200);
            circle(100 + 100 * i, 300, 45);
            ok++;
            break;

        }
        if (a[1][i] == a[2][i] && a[1][i] != 0 && a[0][i] == 0)
        {
            a[0][i] = 2;
            delay(200);
            circle(100 + 100 * i, 100, 45);
            ok++;
            break;

        }
        if (a[0][i] == a[2][i] && a[0][i] != 0 && a[1][i] == 0)
        {
            a[1][i] = 2;
            delay(200);
            circle(100 + 100 * i, 200, 45);
            ok++;
            break;

        }
        if (a[1][1] == a[2][2] && a[0][0] == 0 && a[1][1] != 0)
        {
            a[0][0] = 2;
            delay(200);
            circle(100, 100, 45);
            ok++;
            break;

        }
        if (a[0][0] == a[2][2] && a[1][1] == 0 && a[0][0] != 0)
        {
            a[1][1] = 2;
            delay(200);
            circle(200, 200, 45);
            ok++;
            break;

        }
        if (a[0][0] == a[1][1] && a[2][2] == 0 && a[0][0] != 0)
        {
            a[2][2] = 2;
            delay(200);
            circle(300, 300, 45);
            ok++;
            break;

        }
        if (a[0][2] == a[1][1] && a[2][0] == 0 && a[0][2] != 0)
        {
            a[2][0] = 2;
            delay(200);
            circle(100, 300, 45);
            ok++;
            break;

        }
        if (a[0][2] == a[2][0] && a[0][2] != 0 && a[1][1] == 0)
        {
            a[1][1] = 2;
            delay(200);
            circle(200, 200, 45);
            ok++;
            break;

        }
        if (a[2][0] == a[1][1] && a[0][2] == 0 && a[1][1] != 0)
        {
            a[0][2] = 2;
            delay(200);
            circle(300, 100, 45);
            ok++;
            break;

        }
    }
    if (ok == 0)
        pozitie0(a);

}

void jocgreu(int a[3][3])
{

}


int linii(int matrice[3][3])
{
    int nr = 1, x, i, j;
    for (i = 0; i < 3; i++)
    {
        nr = 1;
        for (j = 0; j < 2; j++)
            if (matrice[i][j] == matrice[i][j + 1] && matrice[i][j] != 0)
                nr++;
        if (nr == 3)
        {
            x = matrice[i][j];
            return x;
        }
    }
    return 0;

}
int coloane(int a[3][3])
{
    int nr = 1, i, j, x;
    for (i = 0; i < 3; i++)
    {
        nr = 1;
        for (j = 0; j < 2; j++)
            if (a[j][i] == a[j + 1][i] && a[j][i] != 0)
                nr++;
        if (nr == 3)
        {
            x = a[j][i];
            return x;
        }

    }
    return 0;
}
int diagonala(int a[3][3])
{
    if (a[1][1] == a[2][2] && a[0][0] == a[2][2])
        return a[1][1];
    if (a[2][0] == a[0][2] && a[1][1] == a[2][0])
        return a[1][1];
    return 0;
}

void castigator(int a[3][3], int& k, int& ok)
{
    ok = 0;
    if (linii(a) == 1)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("X   A CASTIGAT");
        int h = textheight("X   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "X   A CASTIGAT");
        getch();
        closegraph();
    }
    else if (linii(a) == 2)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("0   A CASTIGAT");
        int h = textheight("0   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "0   A CASTIGAT");
        getch();
        closegraph();
    }
    if (coloane(a) == 1)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("X   A CASTIGAT");
        int h = textheight("X   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "X   A CASTIGAT");
        getch();
        closegraph();
    }
    else if (coloane(a) == 2)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("0   A CASTIGAT");
        int h = textheight("0   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "0   A CASTIGAT");
        getch();
        closegraph();
    }
    if (diagonala(a) == 1)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("X   A CASTIGAT");
        int h = textheight("X   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "X   A CASTIGAT");
        getch();
        closegraph();
    }
    else if (diagonala(a) == 2)
    {
        k = 1;
        ok = 1;
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("0   A CASTIGAT");
        int h = textheight("0   A CASTIGAT");
        outtextxy(x - w / 2, y - h / 2 - 100, "0   A CASTIGAT");
        getch();
        closegraph();
    }
}

void doijucatori(int a[3][3])
{
    cleardevice();
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 5);
    line(50, 150, 350, 150);
    line(50, 250, 350, 250);
    line(150, 50, 150, 350);
    line(250, 50, 250, 350);
    outtextxy(25, 450, "Jucator 1 are :");
    readimagefile("x.jpg", 250, 435, 200, 385);
    outtextxy(25, 550, "Jucator 2 are :");
    readimagefile("0.jpg", 250, 535, 200, 485);
    int k = 9, jucator1_x, jucator1_y, jucator2_x, jucator2_y, ok = 0;
    while (k)
    {
        if (k % 2 == 1)// JUCATORUL CU X
        {

            while (!ismouseclick(WM_LBUTTONDOWN)) {}
            getmouseclick(WM_LBUTTONDOWN, jucator1_x, jucator1_y);
            // LINIA 1
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][0] == 0)
                {
                    a[0][0] = 1;
                    line(60, 60, 140, 140);
                    line(60, 140, 140, 60);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][1] == 0)
                {
                    a[0][1] = 1;
                    line(160, 60, 240, 140);
                    line(240, 60, 160, 140);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][2] == 0)
                {
                    a[0][2] = 1;
                    line(260, 60, 340, 140);
                    line(340, 60, 260, 140);
                }
            //LINIA 2
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][0] == 0)
                {
                    a[1][0] = 1;
                    line(60, 240, 140, 160);
                    line(60, 160, 140, 240);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][1] == 0)
                {
                    a[1][1] = 1;
                    line(160, 240, 240, 160);
                    line(160, 160, 240, 240);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][2] == 0)
                {
                    a[1][2] = 1;
                    line(260, 240, 340, 160);
                    line(260, 160, 340, 240);
                }
            //LINIA 3
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][0] == 0)
                {
                    a[2][0] = 1;
                    line(60, 260, 140, 340);
                    line(140, 260, 60, 340);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][1] == 0)
                {
                    a[2][1] = 1;
                    line(160, 260, 240, 340);
                    line(240, 260, 160, 340);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][2] == 0)
                {
                    a[2][2] = 1;
                    line(260, 260, 340, 340);
                    line(340, 260, 260, 340);
                }
        }
        else if (k % 2 == 0)//JUCATORUL CU 0
        {


            while (!ismouseclick(WM_LBUTTONDOWN)) {}
            getmouseclick(WM_LBUTTONDOWN, jucator2_x, jucator2_y);

            // LINIA 1
            if (jucator2_x > 50 && jucator2_x < 150 && jucator2_y>50 && jucator2_y < 150)
                if (a[0][0] == 0)
                {
                    a[0][0] = 2;
                    circle(100, 100, 45);
                }
            if (jucator2_x > 150 && jucator2_x < 250 && jucator2_y>50 && jucator2_y < 150)
                if (a[0][1] == 0)
                {
                    a[0][1] = 2;
                    circle(200, 100, 45);
                }
            if (jucator2_x > 250 && jucator2_x < 350 && jucator2_y>50 && jucator2_y < 150)
                if (a[0][2] == 0)
                {
                    a[0][2] = 2;
                    circle(300, 100, 45);
                }
            //LINIA 2
            if (jucator2_x > 50 && jucator2_x < 150 && jucator2_y>150 && jucator2_y < 250)
                if (a[1][0] == 0)
                {
                    a[1][0] = 2;
                    circle(100, 200, 45);
                }
            if (jucator2_x > 150 && jucator2_x < 250 && jucator2_y>150 && jucator2_y < 250)
                if (a[1][1] == 0)
                {
                    a[1][1] = 2;
                    circle(200, 200, 45);
                }
            if (jucator2_x > 250 && jucator2_x < 350 && jucator2_y>150 && jucator2_y < 250)
                if (a[1][2] == 0)
                {
                    a[1][2] = 2;
                    circle(300, 200, 45);
                }
            //LINIA 3
            if (jucator2_x > 50 && jucator2_x < 150 && jucator2_y>250 && jucator2_y < 350)
                if (a[2][0] == 0)
                {
                    a[2][0] = 2;
                    circle(100, 300, 45);
                }
            if (jucator2_x > 150 && jucator2_x < 250 && jucator2_y>250 && jucator2_y < 350)
                if (a[2][1] == 0)
                {
                    a[2][1] = 2;
                    circle(200, 300, 45);
                }
            if (jucator2_x > 250 && jucator2_x < 350 && jucator2_y>250 && jucator2_y < 350)
                if (a[2][2] == 0)
                {
                    a[2][2] = 2;
                    circle(300, 300, 45);
                }
        }
        castigator(a, k, ok);

        k--;
    }

    if (ok == 0)
    {
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("EGALITATE");
        int h = textheight("EGALITATE");
        outtextxy(x - w / 2, y - h / 2 - 100, "EGALITATE");
        getch();
        closegraph();
    }
}
void unjucatorusor(int a[3][3])
{
    int ok;
    cleardevice();
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 5);
    line(50, 150, 350, 150);
    line(50, 250, 350, 250);
    line(150, 50, 150, 350);
    line(250, 50, 250, 350);
    outtextxy(25, 450, "Jucatorul are :");
    readimagefile("x.jpg", 250, 435, 200, 385);
    outtextxy(25, 550, "Calculatorul are :");
    readimagefile("0.jpg", 250, 535, 200, 485);
    int k = 9, jucator1_x, jucator1_y;
    while (k)
    {
        if (k % 2 == 1)// JUCATORUL CU x
        {
            while (!ismouseclick(WM_LBUTTONDOWN)) {}
            getmouseclick(WM_LBUTTONDOWN, jucator1_x, jucator1_y);
            // LINIA 1
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][0] == 0)
                {
                    a[0][0] = 1;
                    line(60, 60, 140, 140);
                    line(60, 140, 140, 60);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][1] == 0)
                {
                    a[0][1] = 1;
                    line(160, 60, 240, 140);
                    line(240, 60, 160, 140);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][2] == 0)
                {
                    a[0][2] = 1;
                    line(260, 60, 340, 140);
                    line(340, 60, 260, 140);
                }
            //LINIA 2
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][0] == 0)
                {
                    a[1][0] = 1;
                    line(60, 240, 140, 160);
                    line(60, 160, 140, 240);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][1] == 0)
                {
                    a[1][1] = 1;
                    line(160, 240, 240, 160);
                    line(160, 160, 240, 240);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][2] == 0)
                {
                    a[1][2] = 1;
                    line(260, 240, 340, 160);
                    line(260, 160, 340, 240);
                }
            //LINIA 3
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][0] == 0)
                {
                    a[2][0] = 1;
                    line(60, 260, 140, 340);
                    line(140, 260, 60, 340);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][1] == 0)
                {
                    a[2][1] = 1;
                    line(160, 260, 240, 340);
                    line(240, 260, 160, 340);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][2] == 0)
                {
                    a[2][2] = 1;
                    line(260, 260, 340, 340);
                    line(340, 260, 260, 340);
                }
        }
        else if (k % 2 == 0)//JUCATORUL CU 0
        {
            pozitie0(a);
        }
        castigator(a, k, ok);
        k--;
    }
    if (ok == 0)
    {
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("EGALITATE");
        int h = textheight("EGALITATE");
        outtextxy(x - w / 2, y - h / 2 - 100, "EGALITATE");
        getch();
        closegraph();
    }
}
void unjucatorgreu(int a[3][3])
{
    int ok;
    cleardevice();
    setcolor(BLACK);
    setlinestyle(SOLID_LINE, 0, 5);
    line(50, 150, 350, 150);
    line(50, 250, 350, 250);
    line(150, 50, 150, 350);
    line(250, 50, 250, 350);
    outtextxy(25, 450, "Jucatorul are :");
    readimagefile("x.jpg", 250, 435, 200, 385);
    outtextxy(25, 550, "Calculatorul are :");
    readimagefile("0.jpg", 250, 535, 200, 485);
    int k = 9, jucator1_x, jucator1_y;
    while (k)
    {
        if (k % 2 == 1)// JUCATORUL CU x
        {
            while (!ismouseclick(WM_LBUTTONDOWN)) {}
            getmouseclick(WM_LBUTTONDOWN, jucator1_x, jucator1_y);
            // LINIA 1
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][0] == 0)
                {
                    a[0][0] = 1;
                    line(60, 60, 140, 140);
                    line(60, 140, 140, 60);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][1] == 0)
                {
                    a[0][1] = 1;
                    line(160, 60, 240, 140);
                    line(240, 60, 160, 140);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>50 && jucator1_y < 150)
                if (a[0][2] == 0)
                {
                    a[0][2] = 1;
                    line(260, 60, 340, 140);
                    line(340, 60, 260, 140);
                }
            //LINIA 2
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][0] == 0)
                {
                    a[1][0] = 1;
                    line(60, 240, 140, 160);
                    line(60, 160, 140, 240);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][1] == 0)
                {
                    a[1][1] = 1;
                    line(160, 240, 240, 160);
                    line(160, 160, 240, 240);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>150 && jucator1_y < 250)
                if (a[1][2] == 0)
                {
                    a[1][2] = 1;
                    line(260, 240, 340, 160);
                    line(260, 160, 340, 240);
                }
            //LINIA 3
            if (jucator1_x > 50 && jucator1_x < 150 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][0] == 0)
                {
                    a[2][0] = 1;
                    line(60, 260, 140, 340);
                    line(140, 260, 60, 340);
                }
            if (jucator1_x > 150 && jucator1_x < 250 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][1] == 0)
                {
                    a[2][1] = 1;
                    line(160, 260, 240, 340);
                    line(240, 260, 160, 340);
                }
            if (jucator1_x > 250 && jucator1_x < 350 && jucator1_y>250 && jucator1_y < 350)
                if (a[2][2] == 0)
                {
                    a[2][2] = 1;
                    line(260, 260, 340, 340);
                    line(340, 260, 260, 340);
                }
        }
        else if (k % 2 == 0)//JUCATORUL CU 0
            verificaregreu(a);
        castigator(a, k, ok);
        k--;
    }
    if (ok == 0)
    {
        delay(400);
        cleardevice();
        int x = getmaxx() / 2;
        int y = getmaxy() / 2;
        int w = textwidth("EGALITATE");
        int h = textheight("EGALITATE");
        outtextxy(x - w / 2, y - h / 2 - 100, "EGALITATE");
        getch();
        closegraph();
    }
}
void meniu(int a[3][3])
{
    int stop = 1, x, y, z, t;
    while (stop)
    {
        int window1 = initwindow(400, 700, "X SI 0");
        setcolor(BLACK);
        setbkcolor(WHITE);
        cleardevice();
        readimagefile("logo.jpg", 90, 50, 290, 250);
        readimagefile("menu2.jpg", 20, 400, 370, 550);
        settextstyle(9, HORIZ_DIR, 3);
        setcolor(BLACK);
        outtextxy(107, 426, "START JOC");
        outtextxy(140, 505, "IESIRE");
        while (!ismouseclick(WM_LBUTTONDOWN)) {}
        getmouseclick(WM_LBUTTONDOWN, x, y);
        if (x >= 107 && x < 400 && y >= 410 && y < 505)//START JOC
        {
            cleardevice();
            readimagefile("menu2.jpg", -50, 100, 450, 250);
            outtextxy(90, 126, "UN JUCATOR");
            outtextxy(83, 203, "DOI JUCATORI");
            while (!ismouseclick(WM_LBUTTONDOWN)) {}
            getmouseclick(WM_LBUTTONDOWN, z, t);

            //   un jucator

            if (z >= 90 && z < 400 && t >= 126 && t < 203)
            {
                cleardevice();
                readimagefile("menu2.jpg", -50, 100, 450, 250);
                int x = getmaxx() / 2;
                int w = textwidth("Nivel de dificultate");
                outtextxy(x - w / 2, 50, "Nivel de dificultate");
                outtextxy(160, 126, "USOR");
                outtextxy(160, 203, "GREU");
                int nivelx, nively;
                while (!ismouseclick(WM_LBUTTONDOWN)) {}
                getmouseclick(WM_LBUTTONDOWN, nivelx, nively);
                if (nivelx >= 90 && nivelx < 400 && nively >= 126 && nively < 203)//USOR
                    unjucatorusor(a);
                else if (nivelx >= 83 && nivelx < 400 && nively >= 203 && nively < 350)//GREU
                    unjucatorgreu(a);
            }
            //   un jucator
            else if (z >= 83 && z < 400 && t >= 203 && t < 350)
                doijucatori(a);
        }
        else if (x >= 100 && x < 400 && y >= 505 && y < 585)//IESIRE
        {
            closegraph();
            stop = 0;

        }

    }

}
int main()
{
    int a[3][3];
    initializarematrice(a);
    meniu(a);

}


