#include "LibIra.h"
void Example ();

int main()
{
    txCreateWindow (1024, 648);
    Example ();
}
void Example ()
{
    int i = 0;
    while (i <= 100)
    {
        txClear();

        SpringFon();

        for (int j = 1; j <= 10; j++)
        {
            Tree_draw (0 + j*220, 250, 8, 0.8, 1.0);
            Flower_draw (50 + j*100, 500, 0.5, 0.5, RGB (255, 203, 255));
            Grass_draw (-100 + j*100, 620, TX_GREEN, 1.1, 1.1);
        }

        Deffy (110, 150, 0.6, 0.6, 10, 5,  RGB (217, 0, 217), RGB (56, 160, 56), RGB (130, 66, 151), RGB (55, 183, 193), RGB (242, 238, 77));

        Butterfly_draw (600 + i, 50, RGB (204, 139,  51), 2);

        Chuck_draw (300 + i*20, 300 + ((i/4)%2)*50, 0.5, 0.5, - 10, 50);

        MouseBody_draw (300 + i*20, 300 + ((i/4)%2)*50, 0.3, 0.3, RGB (116, 143, 141), RGB (255, 128, 128));

        CatBody_draw (160 , 500, 0.8 + ((i/4)%2)*0.3, 0.8 + (i%2)*0.3, 20.0, RGB (255, 157, 60), RGB (255, 245, 255));

        Millblades_draw (100, 180, ROUND (100*cos(i*0.1) + 100), ROUND (100*sin(i*0.1) + 180));

        txSleep (100);

        i++;
    }
}
