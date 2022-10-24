#include "TXLib.h"
void drawKrisha()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT star[3] = {{350, 3}, {155, 120}, { 550, 120}};
    txPolygon (star, 3);
}

void drawSun(int x)
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_YELLOW);
    txCircle (x, 100, 50);
}

void drawTrava()
{
    txSetColor (TX_GREEN);
    txSetFillColor (TX_GREEN);
    txRectangle (3, 436, 800, 600);
}

void drawDom()
{
    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txRectangle (157, 122, 549, 434);
}

void drawMan(int x , double rasm)
{
    //x=705
    txSetColor (TX_BLACK);
    txSetFillColor (TX_RED);
    txLine (x, 375*rasm, x-24*rasm, 435*rasm);    //нога
    txLine (x, 375*rasm, x+17*rasm, 435*rasm);   //нога2
    txLine (x, 294*rasm, x,    372*rasm);    //тело
    txLine (x, 294*rasm, x+35*rasm, 345*rasm);    //рука
    txLine (x, 294*rasm, x-44*rasm, 356*rasm);    //рука2
    txSetFillColor (TX_BLACK);
    txCircle (x-3*rasm, 262*rasm, 30*rasm);
}  //x=705


void drawFon()
{
    txSetColor (TX_BLACK);
    txSetFillColor(TX_BLUE);
    txRectangle(1, 1, 800,600);
}
void drawOkno()
{
    txSetFillColor(TX_LIGHTBLUE);
    txRectangle(206, 164, 348, 277);

}
void drawDveri(int x, int y)
{
    txSetFillColor (TX_BLACK);
    txRectangle (430, 260, 530, 430);
    txSetFillColor (TX_BROWN);
    POINT Dver[4] = {{430, 260},{x, y},{x, y+170},{430, 430}};
    txPolygon(Dver, 4);

}
void drawCar()
{
    txSetFillColor(TX_GRAY);
    txRectangle (142, 378, 394, 466);

    txRectangle (201, 306, 335, 376);


    txSetFillColor(TX_YELLOW);

    txRectangle (190, 380, 140, 433);


    txLine(277, 307, 277, 465);

    txSetFillColor(TX_BLACK);

    txCircle(172, 502, 30);

    txCircle(334, 501, 30);
}

void Scena2()
{
    txSetColor (TX_BLACK);
    txSetFillColor(TX_RED);
    txRectangle(1, 1, 800,600);
    txSetFillColor (RGB(185, 122, 87));
    txRectangle(272, 331, 306, 455);
    txRectangle(86, 331, 115, 455);
    txRectangle(63, 296, 321, 330);
    txSetFillColor (RGB(112, 69, 46));
    txRectangle(185, 279, 203, 296);
    txRectangle(177, 256, 210, 279);
    txSetFillColor(TX_GREEN);
    txRectangle(188, 230, 195, 254);
    txRectangle(174, 234, 187, 243);
    txRectangle(211, 234, 195, 247);
    txSetFillColor(TX_YELLOW);
    txCircle(190, 220, 10);








}



int main()
{
    txCreateWindow (800, 600);

    int xSun = 100;
    int xMan = 884;
    int manRasm = 1;
    int xDoor = 530;
    int yDoor = 260;


    while(xSun < 850)


    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        xSun = xSun + 30;
        txSleep(10);
        txEnd();
    }

    while (xMan > 550)
    {

        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        xMan = xMan -10;
        txSleep(10);
        txEnd();
    }

    while (xDoor > 430)
    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        xDoor = xDoor -5;
        yDoor = yDoor +5;
        txSleep(10);
        txEnd();
    }
    while (xMan > 480)
    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        xMan = xMan -10;
        txSleep(10);
        txEnd();
    }

    while (manRasm > 0.8)
    {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        manRasm = manRasm - 0.05;
        txSleep(10);
        txEnd();
    }


   while (xDoor < 535)
       {
        txBegin();
        drawFon();
        drawSun(xSun);
        drawTrava();
        drawDom();
        drawKrisha();
        drawOkno();
        drawDveri(xDoor, yDoor);
        drawMan(xMan, manRasm);
        drawCar();

        xDoor = xDoor +5;
        yDoor = yDoor -5;
        txSleep(10);
        txEnd();
       }

    Scena2();











    txTextCursor ();

    return 0;
}


