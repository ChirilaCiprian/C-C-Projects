class Canvas
{
    // add private data members
    int w{};
    int h{};
    char** matrix;
public:
    Canvas(int width, int height);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void drawLine(int x0, int y0, int x1, int y1, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
    void plotlinelow(int x0, int y0, int x1, int y1,char ch);
    void plotLineHigh(int x0,int y0,int x1,int y1,char ch);
    void plotLine(int x0,int y0,int x1,int y1,char ch);
};
