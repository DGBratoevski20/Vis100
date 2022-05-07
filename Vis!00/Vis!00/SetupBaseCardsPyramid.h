#pragma once
#include "Main.h"
void SetupDown(vector<Rectangle>& basePyramidcard)
{
    int len = basePyramidcard.size();
    int counter = 0;
    switch (len)
    {
    case 3://if you click the card with 3
    {     int i = 0;
    for (i; i < 2; i++)
    {
        basePyramidcard[i].x = 725 + i * 210;
        basePyramidcard[i].y = 540;
        basePyramidcard[i].width = 99.5;
        basePyramidcard[i].height = 125;
    }
    if (i == 2)
    {
        basePyramidcard[i].x = 830;
        basePyramidcard[i].y = 670;
        basePyramidcard[i].width = 99.5;
        basePyramidcard[i].height = 125;
    }
    break;
    }

    case 6: //if you click the card with 4
    {
        int i = 0;
        for (i; i < 3; i++)
        {
            basePyramidcard[i].x = 640 + i * 200;
            basePyramidcard[i].y = 540;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;;
        }
        for (i; i < 5; i++)
        {
            basePyramidcard[i].x = 740 + counter * 200;
            basePyramidcard[i].y = 670;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;
            counter++;
        }
        if (i == 5)
        {
            basePyramidcard[i].x = 840;
            basePyramidcard[i].y = 800;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;
        }
        break;
    }

    case 10: //if you click the card with 5
    {
        int i = 0;
        for (i; i < 4; i++)
        {
            basePyramidcard[i].x = 470 + 80 + i * 210;
            basePyramidcard[i].y = 420 + 120;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        for (i; i < 7; i++)
        {
            basePyramidcard[i].x = 470 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 + 120 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 470 + 80 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 + 120 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePyramidcard[i].x = 470 + 80 + 80 + 80 + 80;
            basePyramidcard[i].y = 420 + 120 + 80 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        break;
    }

    case 15: //if you click the card with 6
    {
        int i = 0;
        for (i; i < 5; i++)
        {
            basePyramidcard[i].x = 358 + 80 + i * 210;
            basePyramidcard[i].y = 420 + 120;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 + 120 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 + 120 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 + 120 + 80 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + 80 + 80;
            basePyramidcard[i].y = 420 + 120 + 80 + 80 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        break;

    }


    }

}
void SetupUp(vector<Rectangle>& basePyramidcard)
{
    int len = basePyramidcard.size();
    int counter = 0;
    switch (len)
    {
    case 3://if you click the card with 3
    {     int i = 0;
    for (i; i < 2; i++)
    {
        basePyramidcard[i].x = 725 + i * 210;
        basePyramidcard[i].y = 280;
        basePyramidcard[i].width = 99.5;
        basePyramidcard[i].height = 125;
    }
    if (i == 2)
    {
        basePyramidcard[i].x = 750 + 80;
        basePyramidcard[i].y = 150;
        basePyramidcard[i].width = 99.5;
        basePyramidcard[i].height = 125;
    }
    break;
    }

    case 6: //if you click the card with 4
    {
        int i = 0;
        for (i; i < 3; i++)
        {
            basePyramidcard[i].x = 640 + i * 200;
            basePyramidcard[i].y = 280;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;
        }
        for (i; i < 5; i++)
        {
            basePyramidcard[i].x = 740 + counter * 200;
            basePyramidcard[i].y = 150;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;
            counter++;
        }
        if (i == 5)
        {
            basePyramidcard[i].x = 840;
            basePyramidcard[i].y = 20;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;
        }
        break;
    }

    case 10: //if you click the card with 5
    {
        int i = 0;
        for (i; i < 4; i++)
        {
            basePyramidcard[i].x = 555 + i * 200;
            basePyramidcard[i].y = 320;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
        }
        for (i; i < 7; i++)
        {
            basePyramidcard[i].x = 450 + 80 + 80 + counter * 200;
            basePyramidcard[i].y = 220;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 450 + 80 + 80 + 80 + counter * 200;
            basePyramidcard[i].y = 120;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePyramidcard[i].x = 450 + 80 + 80 + 80 + 80;
            basePyramidcard[i].y =10;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
        }
        break;
    }

    case 15: //if you click the card with 6
    {
        int i = 0;
        for (i; i < 5; i++)
        {
            basePyramidcard[i].x = 358 + 80 + i * 210;
            basePyramidcard[i].y = 420 - 90;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 - 90 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 - 90 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + 80 + counter * 210;
            basePyramidcard[i].y = 420 - 90 - 80 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePyramidcard[i].x = 358 + 80 + 80 + 80 + 80 + 80;
            basePyramidcard[i].y = 420 - 90 - 80 - 80 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        break;

    }


    }

}