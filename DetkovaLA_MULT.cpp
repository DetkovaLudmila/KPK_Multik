//-----------------------------------------------------------------------------
// Multfilm "LETO"
// Autor: Detkova Lumila
//-----------------------------------------------------------------------------

#include "DetkovaLAlib.h"

void StartTitles        ();
void EndTitles          ();
void DrawBackGround     (int wind, int rays);
void DrawBackGroundRain (int wind);
void Polyana            (int wind);
void Utro               ();
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

    StartTitles ();

    Utro ();
    SunDay ();
    RainDay ();

    EndTitles ();

    return 0;
}

 //-----------------------------------------------------------------------------

 void Utro ()
 {
    int i = 0;
    while (i <= 255)
    {
        txClear();
        txSetFillColor (RGB(i, i, 255));
        txRectangle    (0, 0, 1024, 648);

        DrawSun   (850, 355 - i, 1, 1, TX_YELLOW, i%20, (i/4)%2, (i/4)%2, (i/4)%2, (i/8)%2);

        txSetFillColor (TX_LIGHTGREEN);
        txRectangle    (0, 300, 1024, 648);

        txSetFillColor (RGB(0, 0, 128));
        txRectangle    (0, 350, 1024, 400);

        DrawCloud ( 50 + i, 150, 1, 1, TX_LIGHTCYAN);
        DrawCloud (300 + i,  50, 1, 1, TX_LIGHTCYAN);
        DrawCloud (550 + i, 200, 1, 1, TX_LIGHTCYAN);

        for (int a = 0; a <= 15; a++)
        {
            DrawTree (75 + 150*a, 200, 0.7, 0.7, RGB( 0, 100,  0), 0);
            DrawTree ( 0 + 150*a, 250, 0.5, 0.5, RGB( 0, 128,  0), 0);
            DrawTree (75 + 150*a, 300, 0.3, 0.3, RGB(50, 205, 50), 0);
            DrawKust (50 +  75*a, 400, 0.5, 0.5);
        }

        for (int a = 0; a <= 4; a++)
        {
            DrawHowse (  0 + 400*a, 400, 0.5, 0.5, RGB(255, 255, 224), RGB(139, 0,   0), RGB(0, 0, 0), 0, 0, 0, 0, 0);
            DrawHowse (200 + 400*a, 500, 0.5, 0.5, RGB(255, 255, 224), RGB(  0, 0, 255), RGB(0, 0, 0), 0, 0, 0, 0, 0);
        }

        DrawCat (50 + i, 600, 1,   1,   RGB(255, 165, 0), RGB(0, 0, 255), i%10, (i/4)%10 - 5, (i/4)%5, (i/8)%5, i%20, (i/8)%2);
        DrawCat ( 0 + i, 600, 0.5, 0.5, RGB(255,  69, 0), RGB(0, 0, 255), i%10, (i/4)%10 - 5, (i/4)%5, (i/8)%5, i%20, (i/8)%2);
        DrawCat ( 0 + i, 620, 0.5, 0.5, RGB(255, 140, 0), RGB(0, 0, 255), i%10, (i/4)%10 - 5, (i/4)%5, (i/8)%5, i%20, (i/8)%2);

        txSleep (20);

        i++;
    }
 }

 //-----------------------------------------------------------------------------

 void StartTitles ()
 {
    int i = 0;
    while (i >= -40)
    {
        txClear();

        txSetFillColor (TX_YELLOW);
        txRectangle    (0, 0, 1024, 648);
        txSetColor     (TX_LIGHTBLUE);
        txSelectFont   ("Arial", 300);
        txTextOut      (500 + i*10, 20, "Летo");

        DrawCat   (100, 500, 3, 3, RGB(255, 69, 0), RGB(0, 0, 255), 1, abs(i)%10-5, abs(i)%5, abs(i)%5, 1, abs(i/2)%2);

        DrawGirl  (300, 500 - 50*(abs(i/3)%2), 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255),
                    -20 + i%3*10, -20 + i%3*10, 0, 0, 5, abs(i/3)%2, abs(i)%11 - 5, 0, 0, 0, 0);

        DrawBoy   (500, 500 - 50*(abs(i/2)%2), 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(  0, 0, 255),
                    -20 + i%3*10, -20 + i%3*10, 0, 0, 1, abs(i/3)%2, abs(i)%5, abs(i)%5, 1, 2, 1);

        DrawHowse (600, 400, 1, 1, RGB(255, 255, 224), RGB(139, 0, 0), RGB(0, 0, 0), 0, 0, 0, 0, 0);

        for (int j = 1; j <= 6; j++)
        {
           DrawFlower (600 + 50*j,  600, 1, 1, RGB(255, 0, 0), RGB(255, 255, 255), abs(i)%11-5, abs(i)%10-5);
        }

        txSleep (100);

        i--;

    }
 }

 //-----------------------------------------------------------------------------

 void EndTitles ()
 {
    int i = 0;
    while (i >= -40)
    {
        txClear();

        txSetFillColor (TX_YELLOW);
        txRectangle    (0, 0, 1024, 648);
        txSetColor     (TX_LIGHTBLUE);
        txSelectFont   ("Arial", 100);
        txTextOut      (150, 50,"Спасибо за внимание!");
        txSelectFont   ("Arial", 50);
        txTextOut      (10, 200, "Автор: Деткова Людмила Анатольевна, г. Одинцово МО");

        DrawCat   (100, 500, 3, 3, RGB(255, 69, 0), RGB(0, 0, 255), 1, abs(i)%10-5, abs(i)%5, abs(i)%5, 1, abs(i/2)%2);

        DrawGirl  (300, 500 - 50*(abs(i/3)%2), 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255),
                    -20 + i%3*10, -20 + i%3*10, 0, 0, 5, abs(i/3)%2, abs(i)%11 - 5, 0, 0, 0, 0);

        DrawBoy   (500, 500 - 50*(abs(i/2)%2), 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(  0, 0, 255),
                    -20 + i%3*10, -20 + i%3*10, 0, 0, 1, abs(i/3)%2, abs(i)%5, abs(i)%5, 1, 2, 1);

        DrawHowse (600, 400, 1, 1, RGB(255, 255, 224), RGB(139, 0, 0), RGB(0, 0, 0), 0, 0, 0, 0, 0);

        for (int j = 1; j <= 6; j++)
        {
           DrawFlower (600 + 50*j,  600, 1, 1, RGB(255, 0, 0), RGB(255, 255, 255), abs(i)%11-5, abs(i)%10-5);
        }

        txSleep (100);

        i--;
    }
}

//-----------------------------------------------------------------------------

 void DrawBackGround (int wind, int rays, double size)
 {
    txSetFillColor (RGB(255, 255, 255));
    txRectangle    (0, 0, 1024, 648);

    DrawSun   (850, 355, 1, 1, TX_YELLOW, rays, 1, 1, 1, 1);

    txSetFillColor (TX_LIGHTGREEN);
    txRectangle    (0, 300, 1024, 648);

    txSetFillColor (RGB(0, 0, 128));
    txRectangle    (0, 350, 1024, 400);

    DrawCloud (  0 + wind, 150, size, size, TX_LIGHTCYAN);
    DrawCloud (200 + wind,  50, size, size, TX_LIGHTCYAN);
    DrawCloud (400 + wind, 200, size, size, TX_LIGHTCYAN);

    for (int a = 0; a <= 15; a++)
    {
        DrawTree (75 + 150*a, 200, 0.7, 0.7, RGB( 0, 100,  0), wind%11 - 5);
        DrawTree ( 0 + 150*a, 250, 0.5, 0.5, RGB( 0, 128,  0), wind%11 - 5);
        DrawTree (75 + 150*a, 300, 0.3, 0.3, RGB(50, 205, 50), wind%11 - 5);
        DrawKust (50 +  75*a, 400, 0.5, 0.5);
    }
}

//-----------------------------------------------------------------------------

void DrawBackGroundRain (int wind)
{
    txSetFillColor (TX_GREY);
    txRectangle    (0,   0, 1024, 648);
    txSetFillColor (TX_LIGHTGREEN);
    txRectangle    (0, 400, 1024, 648);

    for (int i = 0; i <= 6; i++)
    {
        DrawTree ( 50 + 200*i,  250, 1   , 1   , TX_GREEN     , wind );
        DrawTree (150 + 200*i,  300, 0.75, 0.75, TX_LIGHTGREEN, wind );
    }
    for (int i = 0; i <= 5; i++)
    {
        DrawGrib ( 10 + 300*i,  400, 1    , 1   , TX_ORANGE   , TX_YELLOW);
        DrawGrib (110 + 300*i,  400, 0.75 , 0.5 , TX_RED      , TX_WHITE);
        DrawGrib (210 + 300*i,  400, 0.5  , 1   , TX_LIGHTRED , TX_YELLOW);
    }
}

//-----------------------------------------------------------------------------
void Polyana (int wind)
 {
    txSetFillColor (RGB(255, 255, 255));
    txRectangle    (0, 0, 1024, 648);

    DrawSun (850, 355, 1, 1, TX_YELLOW, 1, 1, 1, 1, 1);

    txSetFillColor (TX_LIGHTGREEN);
    txRectangle    (0, 300, 1024, 648);

    DrawCloud (  0 + wind, 150, 1, 1, TX_LIGHTCYAN);
    DrawCloud (200 + wind,  50, 1, 1, TX_LIGHTCYAN);
    DrawCloud (400 + wind, 200, 1, 1, TX_LIGHTCYAN);

    for (int a = 0; a <= 15; a++)
    {
        DrawTree (125 + 250*a, 100, 1.5, 1.5, RGB( 0, 100,  0), wind%11 - 5);
        DrawTree (  0 + 250*a, 200, 1,   1,   RGB( 0, 128,  0), wind%11 - 5);
        DrawTree (125 + 250*a, 300, 0.5, 0.5, RGB(50, 205, 50), wind%11 - 5);
    }

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
    int a = 200;
    while (a <= 500)
    {
        txClear ();
        DrawBackGround (a, a%10, 1);

        DrawSun (850, 75, 1, 1, TX_YELLOW, a%20, (a/4)%2, 0, 1, 1);

        for (int a = 0; a <= 4; a++)
        {
            DrawHowse (  0 + 400*a, 400, 0.5, 0.5, RGB(255, 255, 224), RGB(139, 0,   0), RGB(  0,  0,  0), 0, 0, 0, 0, 0);
            DrawHowse (200 + 400*a, 500, 0.5, 0.5, RGB(255, 255, 224), RGB(139, 69, 19), RGB(255, 99, 71), 0, 0, 0, 0, 1);
        }

        DrawGirl (380 + a/5, 560, 0.5, 0.5, RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, 0, 0, 5, (a/5)%2,
                  a%11 - 5, (a/10)%2*5, (a/10)%2*5, (a/10)%3 - 1, (a/10)%5 - 2);
        DrawBoy (780 - a/2, 560, 0.5, 0.5, RGB(221, 160, 221), RGB(218, 105, 30), RGB(0, 0, 255), 0, 0, 0, 0, 0, (a/5)%2, (a/10)%2*5, (a/10)%2*5,
                (a/10)%3 - 1, (a/10)%5 - 2, (a/10)%2);

        a++;

        txSleep (20);
    }
}

//-----------------------------------------------------------------------------

void Greeting ()
{
    int b = 10;
    while (b <= 75)
    {
        txClear ();
        txSetFillColor (TX_LIGHTGREEN);
        txRectangle    (0, 0, 1024, 648);

        DrawGirl (270, 300, 4, 4, RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), -150 + b%4*10,  0,            0, 0, 20, (b/3)%2, 0, 0, 0, 0, 0);
        DrawBoy  (720, 300, 4, 4, RGB(221, 160, 221), RGB(218, 105, 30), RGB(  0, 0, 255), 0,             -150 + b%4*10, 0, 0,  0, (b/3)%2, 0, 0, 0, 0, 0);

        b++;

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

        DrawCat (150 + step, 400, 2, 2, RGB(255, 165, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (  0 + step, 400, 1, 1, RGB(255,  69, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (  0 + step, 450, 1, 1, RGB(255, 140, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);

        DrawGirl (450 + step/2, 480 + step/2, 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
        DrawBoy  (600 + step/2, 480 + step/2, 1, 1, RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), 0, 0, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);

        step++;
        txSleep (30);
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

        DrawCat (300, 400, 2, 2, RGB(255, 165, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150, 400, 1, 1, RGB(255,  69, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150, 450, 1, 1, RGB(255, 140, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);

        DrawGirl   (525 - step/2, 555 - step, 1  , 1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
        DrawFlower (485 - step/2, 555 - step, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0,  0);
        DrawBoy    (675 - step/2, 555 - step, 1  , 1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), 0, 0, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);

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

        DrawCat (300, 400, 2, 2, RGB(255, 165, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150, 400, 1, 1, RGB(255,  69, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150, 450, 1, 1, RGB(255, 140, 0), RGB(0, 0, 255), 0, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);

        DrawGirl   (450 + step/2, 405 - step/2, 1  , 1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
        DrawFlower (410 + step/2, 405 - step/2, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0,  0);
        DrawBoy    (600 + step/2, 405 - step/2, 1  , 1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), 0, 0, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);

        step++;
        txSleep (30);
    }

    DrawGirl   (525, 330, 1,   1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
    DrawFlower (485, 330, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0, 0);
    DrawBoy    (675, 330, 1,   1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), 0, 0, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);
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

        DrawCat (300 + step, 400, 2, 2, RGB(255, 165, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150 + step, 400, 1, 1, RGB(255,  69, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);
        DrawCat (150 + step, 450, 1, 1, RGB(255, 140, 0), RGB(0, 0, 255), step%10, (step/4)%10 - 5, (step/4)%5, (step/8)%5, step%20, (step/8)%2);

        DrawGirl   (525 + step, 330 + step/2, 1,   1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
        DrawFlower (485 + step, 330 + step/2, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW, 0, 0);
        DrawBoy    (675 + step, 330 + step/2, 1,   1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), 0, 0, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);
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

        DrawGirl   (780 - step, 450, 1,   1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(255, 0, 255), 0, 0, step%10, 0, 5, (step/5)%2, 0, 0, 0, 0, 0);
        DrawFlower (740 - step, 450, 1.2, 1.2, TX_LIGHTRED, TX_YELLOW,    0,  0);
        DrawBoy    (880 - step, 450, 1  , 1  , RGB(221, 160, 221), RGB(218, 105, 30), RGB(0,   0, 255), -100, 20, step%10, 0, 0, (step/5)%2, 0, 0, 0, 0, 0);
        DrawGrib   (750 - step, 420, 3  , 3  , TX_ORANGE ,  TX_YELLOW);

        DrawHowse (   0, 350, 1, 1,   RGB(255, 255, 224), RGB(139, 0,   0), RGB(0, 0, 0), step%10, step%10, step%10, step%10, 0);
        DrawHowse ( 800, 350, 1, 1, RGB(255, 255, 224), RGB(  0, 0, 255), RGB(0, 0, 0), step%10, step%10, step%10, step%10, 0);

        step++;
        txSleep (20);
    }
 }

