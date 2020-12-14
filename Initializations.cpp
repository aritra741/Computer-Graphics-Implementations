#include<graphics.h>
#include<bits/stdc++.h>
#include<windows.h>
#define pii pair<int,int>
using namespace std;

const int WINDOW_H= 600, WINDOW_W= 800;

void drawAxis()
{
    for( int i=0;i<WINDOW_H;i++ )
        putpixel(WINDOW_W/2, i, YELLOW);
    for( int i=0;i<WINDOW_W;i++ )
        putpixel(i, WINDOW_H/2, YELLOW);
}

pii convertPixel(int x, int y)
{
    x+= WINDOW_W/2;
    y= -y;
    y+= WINDOW_H/2;

    return {x,y};
}

void drawPixel(int x, int y, int col)
{
    pii p= convertPixel(x, y);
    putpixel(p.first, p.second, col);
}

int main()
{
    initwindow(WINDOW_W,WINDOW_H);
    drawAxis();

    for( int i=0;i<=100;i++ )
        drawPixel(i, i, WHITE);

    getchar();
}
