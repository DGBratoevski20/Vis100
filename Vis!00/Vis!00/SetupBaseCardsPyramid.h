#pragma once
#include "Main.h"
void SetupDown(vector<Rectangle>& basePiramidcard)
{
    int len = basePiramidcard.size();
    int counter = 0;
    switch (len)
    {
    case 3://if you click the card with 3
    {     int i = 0;
    for (i; i < 2; i++)
    {
        basePiramidcard[i].x = 665 + 80 + i * 210;
        basePiramidcard[i].y = 420 + 120;
        basePiramidcard[i].width = 70;
        basePiramidcard[i].height = 70;
    }
    if (i == 2)
    {
        basePiramidcard[i].x = 665 + 80 + 80;
        basePiramidcard[i].y = 420 + 120 + 80;
        basePiramidcard[i].width = 70;
        basePiramidcard[i].height = 70;
    }
    break;
    }

    case 6: //if you click the card with 4
    {
        int i = 0;
        for (i; i < 3; i++)
        {
            basePiramidcard[i].x = 645 + 80 + i * 210;
            basePiramidcard[i].y = 420 + 120;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 5; i++)
        {
            basePiramidcard[i].x = 645 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        if (i == 5)
        {
            basePiramidcard[i].x = 645 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 + 120 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;
    }

    case 10: //if you click the card with 5
    {
        int i = 0;
        for (i; i < 4; i++)
        {
            basePiramidcard[i].x = 470 + 80 + i * 210;
            basePiramidcard[i].y = 420 + 120;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 7; i++)
        {
            basePiramidcard[i].x = 470 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePiramidcard[i].x = 470 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePiramidcard[i].x = 470 + 80 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 + 120 + 80 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;
    }

    case 15: //if you click the card with 6
    {
        int i = 0;
        for (i; i < 5; i++)
        {
            basePiramidcard[i].x = 358 + 80 + i * 210;
            basePiramidcard[i].y = 420 + 120;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 + 120 + 80 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 + 120 + 80 + 80 + 80 + 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;

    }


    }

}
void SetupUp(vector<Rectangle>& basePiramidcard)
{
    int len = basePiramidcard.size();
    int counter = 0;
    switch (len)
    {
    case 3://if you click the card with 3
    {     int i = 0;
    for (i; i < 2; i++)
    {
        basePiramidcard[i].x = 665 + 80 + i * 210;
        basePiramidcard[i].y = 420 - 90;
        basePiramidcard[i].width = 70;
        basePiramidcard[i].height = 70;
    }
    if (i == 2)
    {
        basePiramidcard[i].x = 665 + 80 + 80;
        basePiramidcard[i].y = 420 - 90 - 80;
        basePiramidcard[i].width = 70;
        basePiramidcard[i].height = 70;
    }
    break;
    }

    case 6: //if you click the card with 4
    {
        int i = 0;
        for (i; i < 3; i++)
        {
            basePiramidcard[i].x = 645 + 80 + i * 210;
            basePiramidcard[i].y = 420 - 90;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 5; i++)
        {
            basePiramidcard[i].x = 645 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        if (i == 5)
        {
            basePiramidcard[i].x = 645 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 - 90 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;
    }

    case 10: //if you click the card with 5
    {
        int i = 0;
        for (i; i < 4; i++)
        {
            basePiramidcard[i].x = 470 + 80 + i * 210;
            basePiramidcard[i].y = 420 - 90;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 7; i++)
        {
            basePiramidcard[i].x = 450 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePiramidcard[i].x = 450 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePiramidcard[i].x = 450 + 80 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 - 90 - 80 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;
    }

    case 15: //if you click the card with 6
    {
        int i = 0;
        for (i; i < 5; i++)
        {
            basePiramidcard[i].x = 358 + 80 + i * 210;
            basePiramidcard[i].y = 420 - 90;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + 80 + counter * 210;
            basePiramidcard[i].y = 420 - 90 - 80 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePiramidcard[i].x = 358 + 80 + 80 + 80 + 80 + 80;
            basePiramidcard[i].y = 420 - 90 - 80 - 80 - 80 - 80;
            basePiramidcard[i].width = 70;
            basePiramidcard[i].height = 70;
        }
        break;

    }


    }

}