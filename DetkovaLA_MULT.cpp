
//-----------------------------------------------------------------------------
// Multfilm "LETO"
// Autor: Detkova Lumila
//-----------------------------------------------------------------------------

#include "TXLib.h"

void DrawHowse          (int x, int y, double sizex, double sizey, COLORREF stenaColor,COLORREF kryshaColor,
                        double krysha, double okno,double truba, double dym);

void DrawSun            (int x, int y, double sizex, double sizey, COLORREF sunColor, int rays);
void DrawCloud          (int x, int y, double sizex, double sizey, COLORREF cloudColor);

void DrawGirl           (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor,
                        double rhand, double lhand, double legs,double crazy,double smile);

void DrawBoy            (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor,
                        double rhand, double lhand, double legs,double crazy,double smile);

void DrawFlower         (int x, int y, double sizex, double sizey, COLORREF lepestkiColor,COLORREF serdcevinaColor,
                        int list, int naklon);

void DrawGrib           (int x, int y, double sizex, double sizey, COLORREF shlypkaColor,COLORREF nogkaColor);
void DrawTree           (int x, int y, double sizex, double sizey, COLORREF treeColor, int wind);
void DrawRain           (int x, int y, double sizex, double sizey, COLORREF cloudColor, int luzha, int rain);
void StartTitles        ();
void EndTitles          ();
void DrawBackGround     (int wind, int rays, double size);
void DrawBackGroundRain (int wind);
void Polyana            (int wind);
void SunDay             ();
void Meeting            ();
void Greeting           ();
void Walk               ();
void WalkFlower         ();
void WalkGrib           ();
void RainDay            ();
void GoHomeisLesa       ();
void GoHome             ();

//-----------------------------------------------------------------------------

int main ()
{
    txCreateWindow (1024, 648);

    StartTitles();

    SunDay();
    RainDay();

    EndTitles();

    return 0;
}

 //-----------------------------------------------------------------------------

 void StartTitles()
 {
    int step = 0;
    while (step >= -40)
       {
        printf("");

        txClear();

        txSetFillColor (TX_YELLOW);
        txRectangle    (0, 0, 1024, 648);
        txSetColor     (TX_LIGHTBLUE);

        txSelectFont   ("Arial", 300);
        txTextOut      (500 + step*10, 50, "Летo");

        for (int t = 1; t <= 6; t++)
        DrawFlower (150*t, 430, 3, 3, TX_LIGHTRED, TX_WHITE, abs(step)%11 - 5, abs(step)%10 - 5);

        txSleep (100);

        step--;

        }
 }

 //-----------------------------------------------------------------------------

 void EndTitles()
 {
        txSetFillColor (TX_YELLOW);
        txRectangle    (0, 0, 1024, 648);
        txSetColor     (TX_LIGHTBLUE);

        txSelectFont   ("Arial", 100);
        txTextOut      (150, 50,"Спасибо за внимание!");
        txSelectFont   ("Arial", 50);
        txTextOut      (10, 200, "Автор: Деткова Людмила Анатольевна, г. Одинцово МО");

        for (int t = 1; t <= 6; t++)
        DrawFlower (150*t, 430, 3, 3, TX_LIGHTRED, TX_WHITE, 0, 0);

        txSleep (50);
}

//-----------------------------------------------------------------------------

 void DrawBackGround(int wind, int rays, double size)
 {
    txSetFillColor (TX_WHITE);
    txRectangle    (0,   0, 1024, 648);
    txSetFillColor (TX_LIGHTGREEN);
    txRectangle    (0, 400, 1024, 648);

    DrawSun   (850, 100, 1, 1, TX_YELLOW, rays );
    DrawCloud ( 50, 150, size, size, TX_LIGHTCYAN);
    DrawCloud (300,  50, size, size, TX_LIGHTCYAN);
    DrawCloud (550, 200, size, size, TX_LIGHTCYAN);

    for (int step = 0; step <= 5; step++)
    {
        DrawGrib ( 10 + 300*step, 400, 1   , 1  , TX_ORANGE  , TX_YELLOW);
        DrawGrib (110 + 300*step, 400, 0.75, 0.5, TX_RED     , TX_WHITE);
        DrawGrib (210 + 300*step, 400, 0.5 , 1  , TX_LIGHTRED, TX_YELLOW);
    }

    for (int step = 0; step <= 6; step++)
    {
        DrawTree ( 50 + 200*step, 250, 1   , 1   , TX_GREEN     ,  wind%10);
        DrawTree (150 + 200*step, 300, 0.75, 0.75, TX_LIGHTGREEN, -wind%10);
    }
}

//-----------------------------------------------------------------------------

void DrawBackGroundRain(int wind)
{
    txSetFillColor (TX_GREY);
    txRectangle    (0,   0, 1024, 648);
    txSetFillColor (TX_LIGHTGREEN);
    txRectangle    (0, 400, 1024, 648);

    for (int step = 0; step <= 6; step++)
    {
        DrawTree ( 50 + 200*step, 250, 1   , 1   , TX_GREEN     , wind);
        DrawTree (150 + 200*step, 300, 0.75, 0.75, TX_LIGHTGREEN, wind);
    }
    for (int step = 0; step <= 5; step++)
    {
        DrawGrib ( 10 + 300*step, 400, 1   , 1  , TX_ORANGE  , TX_YELLOW);
        DrawGrib (110 + 300*step, 400, 0.75, 0.5, TX_RED     , TX_WHITE);
        DrawGrib (210 + 300*step, 400, 0.5 , 1  , TX_LIGHTRED, TX_YELLOW);
    }
}

//-----------------------------------------------------------------------------

 void SunDay ()
{
    Meeting ();
    Greeting ();
    Walk ();
    WalkFlower ();
    WalkGrib ();
}

//-----------------------------------------------------------------------------

void Meeting ()
{
    int step = 200;
    while (step <= 300)
    {
        txClear ();
        DrawBackGround (step, step%10, (step/20)%2 + 0.5);

        DrawHowse (  0, 150, 1,   1,   TX_ORANGE, TX_RED  , 0, 0, 0, 0);
        DrawHowse (800,  80, 1.2, 1.2, TX_RED,    TX_BLUE , 0, 0, 0, 0);

        DrawGirl (150 + step, 480 - step%10, 1, 1, TX_WHITE, TX_PINK , step%10, step%10, step%2 , 0, 5);
        DrawBoy  (950 - step, 480,           1, 1, TX_WHITE, TX_BLACK, step%10, step%10, step%20, 0, 0);

        step++;

        txSleep (20);
    }
}

//-----------------------------------------------------------------------------

void Greeting ()
{
    int step = 10;
    while ( step <= 30 )
    {
        txClear ();
        DrawBackGround (0, step%10, (step/10)%2 + 0.5);

        DrawHowse (  0, 150, 1,   1,   TX_ORANGE, TX_RED , 0, 0, 0, 0);
        DrawHowse (800,  80, 1.2, 1.2, TX_RED,    TX_BLUE, 0, 0, 0, 0);

        DrawGirl (450, 480, 1, 1, TX_WHITE, TX_PINK , -step%2*50,          0, 0, 0, 5);
        DrawBoy  (600, 480, 1, 1, TX_WHITE, TX_BLACK,          0, -step%2*50, 0, 0, 0);

        step++;

        txSleep (70);
    }
}

//-----------------------------------------------------------------------------

void Walk ()
{
    int step = 50;
    while ( step <= 150 )
    {
        txClear ();
        DrawBackGround (0, step%10, (step/20)%2 + 0.5);

        Polyana(step);

        DrawGirl (450 + step/2, 480 + step/2, 1, 1, TX_WHITE, TX_PINK , 0, 0, step%10, 0,  5);
        DrawBoy  (600 + step/2, 480 + step/2, 1, 1, TX_WHITE, TX_BLACK, 0, 0, step%10, 0,  3);

        step++;
        txSleep (30);
    }
}
 void Polyana (int wind)
 {
    for (int t = 0; t <= 5; t++)
        {
        DrawGrib ( 10 + 300*t, 400, 1   , 1  , TX_ORANGE  , TX_YELLOW);
        DrawGrib (110 + 300*t, 400, 0.75, 0.5, TX_RED     , TX_WHITE );
        DrawGrib (210 + 300*t, 400, 0.5 , 1  , TX_LIGHTRED, TX_YELLOW);
        }

    for (int t = 0; t <= 10; t++)
        {
        DrawFlower ( 10 + 100*t, 480 + t%3*100, 1   , 1   , TX_WHITE   , TX_YELLOW, wind%11 - 5, wind%10 - 5);
        DrawFlower (160 + 100*t, 530 + t%3*100, 0.75, 0.75, TX_BLUE    , TX_WHITE , wind%11 - 5, wind%10 - 5);
        DrawFlower (300 + 100*t, 580 + t%3*100, 1.2 , 1.2 , TX_LIGHTRED, TX_YELLOW, wind%11 - 5, wind%10 - 5);
        }
}
//-----------------------------------------------------------------------------

void WalkFlower ()
{
    int step = 50;
    while ( step <= 150 )
    {
        txClear ();
        DrawBackGround (0, step%10, (step/20)%2 + 0.5);

        Polyana(step);

        DrawGirl   (525 - step/2, 555 - step, 1  , 1  , TX_WHITE  ,  TX_PINK ,  0,  0, step%10, 0, 5);
        DrawFlower (485 - step/2, 555 - step, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0,  0);
        DrawBoy    (675 - step/2, 555 - step, 1  , 1  , TX_WHITE  ,  TX_BLACK,  0,  0, step%10, 0, 0);

        step++;
        txSleep (30);
    }
}

//-----------------------------------------------------------------------------

void WalkGrib ()
{
    int step = 50;
    while ( step <= 150 )
    {
        txClear ();
        DrawBackGround (0, step%10,(step/20)%2 + 0.5);

        Polyana(step);

        DrawGirl   (450 + step/2, 405 - step/2, 1  , 1  , TX_WHITE  ,  TX_PINK ,  0,  0, step%10, 0, 5);
        DrawFlower (410 + step/2, 405 - step/2, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0,  0);
        DrawBoy    (600 + step/2, 405 - step/2, 1  , 1  , TX_WHITE  ,  TX_BLACK,  0,  0, step%10, 0, 0);

        step++;
        txSleep (30);
    }

    DrawGirl   (525, 330, 1,   1  , TX_WHITE  ,  TX_PINK ,  0, 0, 0, 0, 5);
    DrawFlower (485, 330, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0, 0);
    DrawBoy    (675, 330, 1,   1  , TX_WHITE  ,  TX_BLACK,  0, 0, 0, 0, 0);
    DrawGrib   (720, 360, 1,   1  , TX_ORANGE ,  TX_YELLOW);

    txSleep (1000);
}

//-----------------------------------------------------------------------------

void RainDay ()
{
    GoHomeisLesa ();
    GoHome ();
}

//-----------------------------------------------------------------------------

 void GoHomeisLesa ()
 {
    int step = 50;
    while ( step <= 150)
    {
        txClear ();
        DrawBackGroundRain (step%20-10);

        Polyana(step);

        DrawGirl   (525 + step, 330 + step/2, 1,   1  , TX_WHITE  ,  TX_PINK ,  0, 0, step%10, 0, 0);
        DrawFlower (485 + step, 330 + step/2, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0, 0);
        DrawBoy    (675 + step, 330 + step/2, 1,   1  , TX_WHITE  ,  TX_BLACK,  0, 0, step%10, 0, 0);
        DrawGrib   (720 + step, 360 + step/2, 1.2, 1.2, TX_ORANGE ,  TX_YELLOW);

        step++;
        txSleep (20);
    }
 }

 //-----------------------------------------------------------------------------

 void GoHome ()
 {
    int step = 350;
    while ( step <= 500 )
    {
        txClear ();
        DrawBackGroundRain (step%20 - 10);

        DrawRain (step,       100, 2, 2, TX_BLUE, step, step%10);
        DrawRain (step + 350, 100, 2, 2, TX_BLUE, step, step%10);
        DrawRain (step + 700, 100, 2, 2, TX_BLUE, step, step%10);

        DrawGirl   (780 - step, 450, 1,   1  , TX_WHITE  ,  TX_PINK ,     0,  0, step%10, 0, 0);
        DrawFlower (740 - step, 450, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW,    0,  0);
        DrawBoy    (880 - step, 450, 1  , 1  , TX_WHITE  ,  TX_BLACK,  -100, 20, step%10, 0, 0);
        DrawGrib   (750 - step, 420, 3  , 3  , TX_ORANGE ,  TX_YELLOW);


        DrawHowse (   0, 150, 1,   1,   TX_ORANGE, TX_RED,  step%10, step%10, step%10, step%10);
        DrawHowse ( 800,  80, 1.2, 1.2, TX_RED,    TX_BLUE, step%10, step%10, step%10, step%10);

        step++;
        txSleep (20);
    }
 }

 //-----------------------------------------------------------------------------

 void DrawHowse(int x, int y, double sizex, double sizey, COLORREF stenaColor,COLORREF kryshaColor,
                double krysha, double okno,double truba, double dym)
{
    txSetColor     (stenaColor);
    txSetFillColor (stenaColor);
    txRectangle    (x + (50 - 50)*sizex, y + (350 - 150)*sizey, x + (250 - 50)*sizex, y + (550 - 150)*sizey);

    txSetColor     (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle    (x + (100 - 50)*sizex + okno, y + (400 - 150)*sizey, x + (200 - 50)*sizex + okno, y + (500 - 150)*sizey);

    txSetColor     (stenaColor, 3);
    txSetFillColor (stenaColor);
    txLine         (x +(150 - 50)*sizex + okno, y + (400 - 150)*sizey, x + (150 - 50)*sizex + okno, y + (500 - 150)*sizey);
    txLine         (x +(100 - 50)*sizex + okno, y + (450 - 150)*sizey, x + (200 - 50)*sizex + okno, y + (450 - 150)*sizey);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle    (x + (80 - 50)*sizex, y + (220 - 150)*sizey - truba, x + (120 - 50)*sizex, y + (350 - 150)*sizey);

    txSetColor     (TX_BLACK);
    txSetFillColor (TX_BLACK);

    if (dym > 0)
    {
        for (int t = 1; t <= 3; t++)
        {
            txEllipse  (x + (90 - 50)*sizex - t*30, y + (200 - 150)*sizey - t*30 - dym, x + (110 - 50)*sizex + t*30, y + (210 - 150)*sizey - t*30 - dym);
        }
    }

    txSetColor     (kryshaColor);
    txSetFillColor (kryshaColor);
    POINT triangleHouse[3]= {{x + ( 50 - 50)*sizex, y + (350 - 150)*sizey}, {x + (150 - 50)*sizex, y + (250 - 150)*sizey + krysha},
                             {x + (250 - 50)*sizex, y + (350 - 150)*sizey}};
    txPolygon      (triangleHouse,3);
}

 //-----------------------------------------------------------------------------

void DrawCloud (int x, int y, double sizex, double sizey, COLORREF cloudColor)
{
    txSetColor     (cloudColor);
    txSetFillColor (cloudColor);

    txCircle (x + (150 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);
    txCircle (x + (190 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);
    txCircle (x + (230 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);
}

//-----------------------------------------------------------------------------

void DrawRain (int x, int y, double sizex, double sizey, COLORREF cloudColor, int luzha, int rain)
{
    txSetColor     (cloudColor,3);
    txSetFillColor (cloudColor);

    txCircle (x + (150 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);
    txCircle (x + (190 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);
    txCircle (x + (230 - 150)*sizex, y + (100 - 100)*sizey, 40*sizex);

    for (int t = 1; t <= 5; t++)
    {
        for (int j = 1; j <= 20; j++)
        {
        if ((t + j)%2) txLine (x + 30*t, y + 100*j + rain, x + 30*t,y + 130*j + rain);
        }
    }
    if (luzha > 0)
    {
        txEllipse (380, 450, 400 + luzha , 480);
        txEllipse (280, 550, 300 + luzha , 580);
        txEllipse (580, 500, 600 + luzha , 530);
    }
}

//-----------------------------------------------------------------------------

void DrawSun (int x, int y, double sizex, double sizey, COLORREF sunColor, int rays)
{
    txSetColor     (sunColor,3);
    txSetFillColor (sunColor);

    txCircle (x + (850 - 850)*sizex,        y + (100 - 100)*sizey,        40*sizex);
    txLine   (x + (780 - 850)*sizex + rays, y + (100 - 100)*sizey,        x + (920 - 850)*sizex - rays, y + (100 - 100)*sizey);
    txLine   (x + (850 - 850)*sizex,        y + ( 30 - 100)*sizey + rays, x + (850 - 850)*sizex,        y + (170 - 100)*sizey - rays);
    txLine   (x + (780 - 850)*sizex - rays, y + ( 30 - 100)*sizey - rays, x + (920 - 850)*sizex + rays, y + (170 - 100)*sizey + rays);
    txLine   (x + (920 - 850)*sizex - rays, y + ( 30 - 100)*sizey - rays, x + (780 - 850)*sizex + rays, y + (170 - 100)*sizey + rays);
}

//-----------------------------------------------------------------------------

void DrawGirl (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor, double rhand, double lhand, double legs,double crazy,double smile)
{
    txSetColor     (headColor, 3);
    txSetFillColor (headColor);
    txCircle       (x + (700 - 700)*sizex, y + (450 - 480)*sizey, 30*sizex);

    txSetColor     (TX_YELLOW, 3);
    txSetFillColor (TX_YELLOW);
    txEllipse      (x + (680 - 700)*sizex, y + (420 - 480)*sizey, x + (720 - 700)*sizex, y + (430 - 480)*sizey);
    txEllipse      (x + (650 - 700)*sizex, y + (410 - 480)*sizey, x + (680 - 700)*sizex, y + (440 - 480)*sizey);
    txEllipse      (x + (640 - 700)*sizex, y + (430 - 480)*sizey, x + (670 - 700)*sizex, y + (460 - 480)*sizey);
    txEllipse      (x + (720 - 700)*sizex, y + (410 - 480)*sizey, x + (750 - 700)*sizex, y + (440 - 480)*sizey);
    txEllipse      (x + (730 - 700)*sizex, y + (430 - 480)*sizey, x + (760 - 700)*sizex, y + (460 - 480)*sizey);

    txSetColor     (torsoColor, 3);
    txSetFillColor (torsoColor);
    POINT triangleGirl[3]={{x + (700 - 700)*sizex, y + (480 - 480)*sizey}, {x + (670 - 700)*sizex, y + (540 - 480)*sizey},
                           {x + (730 - 700)*sizex, y + (540 - 480)*sizey}};
    txPolygon      (triangleGirl, 3);

    txLine (x + (690 - 700)*sizex, y + (540 - 480)*sizey, x + (690 - 700)*sizex + legs, y + (570 - 480)*sizey        );
    txLine (x + (670 - 700)*sizex, y + (570 - 480)*sizey, x + (690 - 700)*sizex + legs, y + (570 - 480)*sizey        );
    txLine (x + (730 - 700)*sizex, y + (570 - 480)*sizey, x + (710 - 700)*sizex - legs, y + (570 - 480)*sizey        );
    txLine (x + (710 - 700)*sizex, y + (540 - 480)*sizey, x + (710 - 700)*sizex - legs, y + (570 - 480)*sizey        );
    txLine (x + (700 - 700)*sizex, y + (480 - 480)*sizey, x + (660 - 700)*sizex,        y + (500 - 480)*sizey + rhand);
    txLine (x + (700 - 700)*sizex, y + (480 - 480)*sizey, x + (740 - 700)*sizex,        y + (500 - 480)*sizey + lhand);

    txSetColor     (TX_LIGHTCYAN , 3);
    txSetFillColor (TX_LIGHTCYAN);
    txCircle       (x + (685 - 700)*sizex, y + (450 - 480)*sizey, 5*sizex + crazy);
    txCircle       (x + (715 - 700)*sizex, y + (450 - 480)*sizey, 5*sizex - crazy);

    txSetColor     (TX_BLUE, 3);
    txSetFillColor (TX_BLUE);
    txCircle       (x + (685 - 700)*sizex, y + (450 - 480)*sizey, 2*sizex + crazy);
    txCircle       (x + (715 - 700)*sizex, y + (450 - 480)*sizey, 2*sizex - crazy);

    txLine         (x + (699 - 700)*sizex, y + (455 - 480)*sizey, x + (701 - 700)*sizex, y + (455 - 480)*sizey);

    txSetColor     (TX_RED, 3);
    txSetFillColor (TX_RED);
    txLine         (x + (690 - 700)*sizex, y + (465 - 480)*sizey, x + (700 - 700)*sizex, y + (465 - 480)*sizey + smile);
    txLine         (x + (710 - 700)*sizex, y + (465 - 480)*sizey, x + (700 - 700)*sizex, y + (465 - 480)*sizey + smile);
}

 //-----------------------------------------------------------------------------

void DrawBoy (int x, int y, double sizex, double sizey, COLORREF headColor,COLORREF torsoColor,double rhand, double lhand,double legs,double crazy, double smile)
{
    txSetColor      (headColor, 3);
    txSetFillColor  (headColor);
    txCircle        (x + (500 - 500)*sizex, y + (450 - 480)*sizey, 30*sizex);

    txSetColor      (torsoColor,3);
    txSetFillColor  (torsoColor);
    txEllipse       (x + (480 - 500)*sizex, y + (420 - 480)*sizey, x + (520 - 500)*sizex,        y + (430 - 480)*sizey        );
    txRectangle     (x + (470 - 500)*sizex, y + (480 - 480)*sizey, x + (530 - 500)*sizex,        y + (540 - 480)*sizey        );
    txLine          (x + (490 - 500)*sizex, y + (540 - 480)*sizey, x + (490 - 500)*sizex + legs, y + (570 - 480)*sizey        );
    txLine          (x + (470 - 500)*sizex, y + (570 - 480)*sizey, x + (490 - 500)*sizex + legs, y + (570 - 480)*sizey        );
    txLine          (x + (530 - 500)*sizex, y + (570 - 480)*sizey, x + (510 - 500)*sizex - legs, y + (570 - 480)*sizey        );
    txLine          (x + (510 - 500)*sizex, y + (540 - 480)*sizey, x + (510 - 500)*sizex - legs, y + (570 - 480)*sizey        );
    txLine          (x + (470 - 500)*sizex, y + (480 - 480)*sizey, x + (430 - 500)*sizex,        y + (500 - 480)*sizey + rhand);
    txLine          (x + (530 - 500)*sizex, y + (480 - 480)*sizey, x + (570 - 500)*sizex,        y + (500 - 480)*sizey + lhand);

    txSetColor      (TX_LIGHTCYAN , 3);
    txSetFillColor  (TX_LIGHTCYAN );
    txCircle        (x + (485 - 500)*sizex, y + (450 - 480)*sizey + crazy, 5*sizex);
    txCircle        (x + (515 - 500)*sizex, y + (450 - 480)*sizey - crazy, 5*sizex);

    txSetColor      (TX_BLUE, 3);
    txSetFillColor  (TX_BLUE);
    txCircle        (x + (485 - 500)*sizex, y + (450 - 480)*sizey + crazy, 2*sizex);
    txCircle        (x + (515 - 500)*sizex, y + (450 - 480)*sizey - crazy, 2*sizex);

    txLine         (x + (499 - 500)*sizex, y + (455 - 480)*sizey, x + (501 - 500)*sizex, y + (455 - 480)*sizey);

    txSetColor     (TX_RED, 3);
    txSetFillColor (TX_RED);
    txLine         (x + (490 - 500)*sizex, y + (465 - 480)*sizey + smile, x + (500 - 500)*sizex, y + (465 - 480)*sizey);
    txLine         (x + (510 - 500)*sizex, y + (465 - 480)*sizey - smile, x + (500 - 500)*sizex, y + (465 - 480)*sizey);

}

//-----------------------------------------------------------------------------

void DrawFlower (int x, int y, double sizex, double sizey, COLORREF lepestkiColor,COLORREF serdcevinaColor, int list, int naklon)
{
    txSetColor     (lepestkiColor);
    txSetFillColor (lepestkiColor);
    txCircle       (x + (890 - 900)*sizex + naklon, y + (500 - 520)*sizey, 10*sizex);
    txCircle       (x + (910 - 900)*sizex + naklon, y + (500 - 520)*sizey, 10*sizex);
    txCircle       (x + (900 - 900)*sizex + naklon, y + (510 - 520)*sizey, 10*sizex);
    txCircle       (x + (900 - 900)*sizex + naklon, y + (490 - 520)*sizey, 10*sizex);

    txSetColor     (serdcevinaColor);
    txSetFillColor (serdcevinaColor);
    txCircle       (x + (900 - 900)*sizex + naklon, y + (500 - 520)*sizey, 10*sizex);

    txSetColor     (TX_GREEN, 3);
    txSetFillColor (TX_GREEN);
    txLine         (x + (900 - 900)*sizex + naklon, y + (520 - 520)*sizey, x + (900 - 900)*sizex, y + (570 - 520)*sizey);
    POINT triangleList[3]=  {{x + (900 - 900)*sizex, y + (570 - 520)*sizey}, {x + (880 - 900)*sizex, y + (540 - 520)*sizey + list},
                             {x + (900 - 900)*sizex, y + (550 - 520)*sizey}};
    txPolygon      (triangleList, 3);
    POINT triangleListok[3]={{x + (900 - 900)*sizex, y + (570 - 520)*sizey}, {x + (920 - 900)*sizex, y + (540 - 520)*sizey - list},
                             {x + (900 - 900)*sizex, y + (550 - 520)*sizey}};
    txPolygon      (triangleListok, 3);
}

//-----------------------------------------------------------------------------

void DrawGrib (int x, int y, double sizex, double sizey, COLORREF shlypkaColor, COLORREF nogkaColor)
{
    txSetColor      (shlypkaColor);
    txSetFillColor  (shlypkaColor);
    txPie           (x - 10*sizex, y - 50*sizey, x + 50*sizex, y, 0, 180);

    txSetColor      (nogkaColor);
    txSetFillColor  (nogkaColor);
    txPie           (x + 10*sizex, y - 50*sizey, x + 30*sizex, y, 180, 180);
}

//-----------------------------------------------------------------------------

void DrawTree (int x, int y, double sizex, double sizey, COLORREF treeColor, int wind)
{
    txSetColor              (treeColor, 3);
    txSetFillColor          (treeColor);

    POINT triangleTre[3]=  {{x - wind           , y - 50*sizey + wind}, {x - 50*sizex - wind, y + wind    },{x +  50*sizex, y - wind           }};
    txPolygon               (triangleTre, 3);
    POINT triangleTree[3]= {{x - 75*sizex - wind, y + 75*sizey + wind}, {x - wind           , y + wind    },{x +  75*sizex, y + 75*sizey - wind}};
    txPolygon               (triangleTree, 3);
    POINT triangleTreee[3]={{x - 100*sizex      , y + 150*sizey      }, {x                  , y + 75*sizey},{x + 100*sizex, y + 150*sizey      }};
    txPolygon               (triangleTreee, 3);
}

