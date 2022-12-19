#include "TXLib.h"
void drawKrisha()
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
    txSetFillColor (TX_BROWN);
    POINT star[3] = {{350, 3}, {155, 120}, { 550, 120}};
    txPolygon (star, 3);
}


void drawSun(int x)
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
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


    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
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
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
    txRectangle (430, 260, 530, 430);
    txSetFillColor (TX_BROWN);
    POINT Dver[4] = {{430, 260},{x, y},{x, y+170},{430, 430}};
    txPolygon(Dver, 4);

}
void drawCar()
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);



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
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
    txSetFillColor(TX_RED);
    txRectangle(1, 1, 800,600);
    txSetFillColor(TX_WHITE);
    txRectangle(19, 456, 163, 178);
    txSetFillColor(TX_GRAY);
    txRectangle(36, 456, 151, 211);





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
    txSetFillColor(RGB(185, 122, 87));
    txRectangle(377, 451, 405, 359);
    txRectangle(422, 451, 452, 359);
    txRectangle(366, 355, 453, 331);
    txRectangle(425, 331, 466, 220);
    txSetFillColor(TX_BLUE);
    txRectangle(430, 11, 771, 201);


}

void drawDialog()
{
    txSetFillColor(TX_WHITE);
    txCircle(628, 235, 15);
    txCircle(656, 199, 20);
    txEllipse (554, 53, 733, 133);
    txSetFillColor(TX_BLACK);
    txDrawText (554, 53, 733, 133, "эх как я устал");
}
void drawDialog2()
   {txSetFillColor(TX_WHITE);
    txCircle(628, 235, 15);
    txCircle(656, 199, 20);
    txEllipse (532, 48, 790, 187);
    txSetFillColor(TX_BLACK);
    txDrawText (532, 48, 790, 187, "надо бы перекусить");





}
void drawScena3()
{
    txSetFillColor(TX_RED);
    txRectangle(0, 0, 800,600);
}

void drawHand(int x, int y)
{
    //x=580 y = 270
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
    txLine(x, y, x+1800-580, y+1400-270);
    txLine(x, y, x+570-580, y+230-270);
    txLine(x, y, x+550-580, y+260-270);
    txLine(x, y, x+550-580, y+280-270);
}
void drawHolodilnik(int x, int y)
{
    txSetFillColor(TX_WHITE);
    txRectangle(139, 600, 668, 27);
    txSetFillColor(TX_GRAY);
    txRectangle(179, 600, 636, 52);
    txLine(501, 263, 635, 282);
    txLine(501, 320, 635, 343);
    txLine(501, 404, 635, 425);
    txLine(501, 464, 635, 490);

    POINT Holodilnik[4] = {{179, 600} , {179, 52} , {x, y}, {x, y+548}};
    txPolygon(Holodilnik, 4);

    txLine(x+521-636, y+156-52, x+544-636, y+155-52);
    txLine(x+545-636, y+155-52, x+571-636, y+168-52);
    txLine(x+521-636, y+172-52, x+543-636, y+171-52);
    txLine(x+543-636, y+171-52, x+544-636, y+336-52);
    txLine(x+544-636, y+336-52, x+526-636, y+359-52);
    txLine(x+571-636, y+168-52, x+571-636, y+339-52);
    txLine(x+571-636, y+339-52, x+542-636, y+372-52);
}
void drawDialogyh()
{
    txSetFillColor(TX_WHITE);
    txCircle(726, 386, 20);
    txCircle(648, 314, 30);
    txEllipse(380, 30, 790, 270);
    txDrawText(380, 30, 790, 270, "Блин в холодильнике пусто");

}
void drawDialohyh2()
 {
    txSetFillColor(TX_WHITE);
    txCircle(726, 386, 20);
    txCircle(648, 314, 30);
    txEllipse(380, 30, 790, 270);
    txDrawText(380, 30, 790, 270, "Надо сходить в магаз");

 }






int main()
{
    txCreateWindow (800, 600);

    int xSun = 100;
    int xMan = 884;
    int manRasm = 1;
    int xDoor = 530;
    int yDoor = 260;
    int xHand = 900;
    int yHand = 400;
    int xHolodilnik = 636;
    int yHolodilnik = 52;

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

    xMan=890;
    manRasm=1;

    while (xMan > 480)
   {
    txBegin();
    Scena2();

    drawMan(xMan, manRasm);
    xMan -= 5;
    txSleep(10);
    txEnd();

   }
    Scena2();
    drawMan(xMan, manRasm);
    drawDialog();
    txSleep(3000);
    drawDialog2();
    txSleep(3000);
    drawScena3();

    while(xHand > 571)
    {
        txBegin();
        drawScena3();
        drawHolodilnik(xHolodilnik, yHolodilnik);
        drawHand(xHand, yHand);

        xHand-=10;
        yHand-=5;
        txEnd();
        txSleep(10);
    }

    while(xHolodilnik > 500)
    {
        txBegin();
        drawScena3();
        drawHolodilnik(xHolodilnik, yHolodilnik);
        drawHand(xHand, yHand);

        xHolodilnik-=5;
        yHolodilnik+=5;
        xHand-=5;
        yHand+=5;
        txEnd();
        txSleep(10);
        txEnd();
        txSleep(10);


    }


    drawDialogyh();
        txEnd();
        txSleep(10);
    drawDialohyh2();
        txEnd();
        txSleep(10);







    txTextCursor ();

    return 0;
}


