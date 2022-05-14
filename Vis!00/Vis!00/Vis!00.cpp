#include "Main.h"
bool checkPyramidPositions(int checker)
{
    return (checker==725);
}
bool checkPyramidPositions2(int checker)
{
    return (checker == 830);
}
bool checkPyramidPositions3(int checker)
{
    return (checker == 540);
}
bool checkPyramidPositions4(int checker)
{
    return (checker == 670);
}
bool checkPyramidPositions5(int checker)
{
    return (checker == 640);
}
bool checkPyramidPositions6(int checker)
{
    return (checker == 740);
}

void SetupDown(vector<Rectangle>& basePyramidcard)
{
    int len = basePyramidcard.size();
    int counter = 0;
    int var1 = 725;
    int var2 = 830;
    int var3 = 540;
    int var4 = 670;
    int var5 = 640;
    int var6 = 740;
    //vars for qa tests
    switch (len)
    {
    case 3://if you click the card with 3
    {     int i = 0;
    for (i; i < 2; i++)
    {
        basePyramidcard[i].x = var1 + i * 210;
        basePyramidcard[i].y = var3;
        basePyramidcard[i].width = 99.5;
        basePyramidcard[i].height = 125;
    }
    if (i == 2)
    {
        basePyramidcard[i].x = var2;
        basePyramidcard[i].y = var4;
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
            basePyramidcard[i].x = var5 + i * 200;
            basePyramidcard[i].y = 540;
            basePyramidcard[i].width = 99.5;
            basePyramidcard[i].height = 125;;
        }
        for (i; i < 5; i++)
        {
            basePyramidcard[i].x = var6 + counter * 200;
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
            basePyramidcard[i].x = 555 + i * 200;
            basePyramidcard[i].y = 550;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
        }
        for (i; i < 7; i++)
        {
            basePyramidcard[i].x = 650 + counter * 200;
            basePyramidcard[i].y = 660;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 750 + counter * 200;
            basePyramidcard[i].y = 770;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePyramidcard[i].x = 850;
            basePyramidcard[i].y = 880;
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
            basePyramidcard[i].x = 465 + i * 200;
            basePyramidcard[i].y = 420 + 120;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 565 + counter * 200;
            basePyramidcard[i].y = 420 + 120 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePyramidcard[i].x = 665 + counter * 200;
            basePyramidcard[i].y = 420 + 120 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePyramidcard[i].x = 765 + counter * 200;
            basePyramidcard[i].y = 420 + 120 + 80 + 80 + 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePyramidcard[i].x = 865;
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
            basePyramidcard[i].y = 330;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
        }
        for (i; i < 7; i++)
        {
            basePyramidcard[i].x = 650 + counter * 200;
            basePyramidcard[i].y = 222.5;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 750 + counter * 200;
            basePyramidcard[i].y = 115;
            basePyramidcard[i].width = 80;
            basePyramidcard[i].height = 100;
            counter++;
        }
        counter = 0;
        if (i == 9)
        {
            basePyramidcard[i].x = 850;
            basePyramidcard[i].y = 7.5;
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
            basePyramidcard[i].x = 465 + i * 200;
            basePyramidcard[i].y = 420 - 90;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        for (i; i < 9; i++)
        {
            basePyramidcard[i].x = 565 + counter * 200;
            basePyramidcard[i].y = 420 - 90 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 12; i++)
        {
            basePyramidcard[i].x = 665 + counter * 200;
            basePyramidcard[i].y = 420 - 90 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        for (i; i < 14; i++)
        {
            basePyramidcard[i].x = 765 + counter * 200;
            basePyramidcard[i].y = 420 - 90 - 80 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
            counter++;
        }
        counter = 0;
        if (i == 14)
        {
            basePyramidcard[i].x = 865;
            basePyramidcard[i].y = 420 - 90 - 80 - 80 - 80 - 80;
            basePyramidcard[i].width = 70;
            basePyramidcard[i].height = 70;
        }
        break;

    }


    }

}

void Filled(vector<Rectangle>& baseDown, vector<Rectangle>& baseUp, Rectangle& movingRed, Rectangle& movingBlue, Rectangle& movingYellow, Rectangle& movingF, Rectangle& movingRedRight, Rectangle& movingBlueRight, Rectangle& movingYellowRight, Rectangle& movingFRight, Rectangle& movingFive, Rectangle& movingFiveRight, vector<bool>& filledDown, vector<bool>& filledUp, Rectangle OperationArr[], vector<string>& checkDir, string randDir[], vector<string>& checkDirTwo)
{
    checkDir.resize(filledDown.size());
    checkDirTwo.resize(filledDown.size());
    for (int i = 0; i < 10; i++)
    {
        switch (i)
        {
        case 0:
            OperationArr[i] = movingRed;
            break;
        case 1:
            OperationArr[i] = movingBlue;
            break;
        case 2:
            OperationArr[i] = movingYellow;
            break;
        case 3:
            OperationArr[i] = movingF;
            break;
        case 4:
            OperationArr[i] = movingFive;
            break;
        case 5:
            OperationArr[i] = movingRedRight;
            break;
        case 6:
            OperationArr[i] = movingBlueRight;
            break;
        case 7:
            OperationArr[i] = movingYellowRight;
            break;
        case 8:
            OperationArr[i] = movingFRight;
            break;
        case 9:
            OperationArr[i] = movingFiveRight;
            break;
        }
    }
    for (int i = 0; i < baseDown.size(); i++)
    {

        if ((CheckCollisionRecs(baseDown[i], movingRed) && baseDown[i].width == movingRed.width) || (CheckCollisionRecs(baseDown[i], movingBlue) && baseDown[i].width == movingBlue.width) || (CheckCollisionRecs(baseDown[i], movingYellow) && baseDown[i].width == movingYellow.width) || (CheckCollisionRecs(baseDown[i], movingF) && baseDown[i].width == movingF.width) || (CheckCollisionRecs(baseDown[i], movingFive) && baseDown[i].width == movingFive.width))
        {
            filledDown[i] = 1;
            

        }
        else {

            filledDown[i] = 0;
        }
    }
    for (int i = 0; i < baseDown.size(); i++)
    {
        if ((CheckCollisionRecs(baseUp[i], movingRedRight) && baseUp[i].width == movingRedRight.width) || (CheckCollisionRecs(baseUp[i], movingYellowRight) && baseUp[i].width == movingYellowRight.width) || (CheckCollisionRecs(baseUp[i], movingBlueRight) && baseUp[i].width == movingBlueRight.width) || (CheckCollisionRecs(baseUp[i], movingFRight) && baseUp[i].width == movingFRight.width) || (CheckCollisionRecs(baseDown[i], movingFiveRight) && baseDown[i].width == movingFiveRight.width))
        {
            filledUp[i] = 1;
           
        }
        else {
            filledUp[i] = 0;
        }
    }
    for (int i = 0; i < filledDown.size(); i++)
    {

        if (filledDown[i])
        {

            for (int j = 0; j < 10; j++)
            {
                if (baseDown[i].x == OperationArr[j].x && baseDown[i].y == OperationArr[j].y && baseDown[i].width == OperationArr[j].width)
                {
                    checkDir[i] = randDir[j];

                    break;
                }
                else {
                    checkDir[i] = "";
                }
                



            }
           
            


        }

    }
    for (int i = 0; i < filledDown.size(); i++)
    {

        if (filledUp[i])
        {

            for (int j = 0; j < 10; j++)
            {
                if (baseUp[i].x == OperationArr[j].x && baseUp[i].y == OperationArr[j].y && baseUp[i].width == OperationArr[j].width)
                {
                    checkDirTwo[i] = randDir[j];
                    break;

                }
                else {
                    checkDirTwo[i] = "";
                }




            }
            



        }

    }

}
void checkTwoCardsFilled(vector<bool>& fDown, vector<bool>& fUp, int size)
{

    for (int i = fDown.size() - 1; i > size; i--)
    {

        int diff = fDown.size() - i;

        if (diff == 1)
        {
            if (fDown[i - 2] && fDown[i - 1])
            {

                fDown[i] = 0;

            }
            else
            {
                
                fDown[i] = 1;
            }


        }
        else if (diff > 1 && diff < 4)
        {
            if (fDown[i - 3] && fDown[i - 2])
            {
                fDown[i] = 0;

            }
            else
            {
                
                fDown[i] = 1;
            }




        }
        else if (diff > 3 && diff < 7)
        {
            if (fDown[i - 4] && fDown[i - 3])
            {
                fDown[i] = 0;

            }
            else
            {
                //cout << "H";
                fDown[i] = 1;
            }



        }
        else if (diff > 6 && diff < 11)
        {
            if (fDown[i - 5] && fDown[i - 4])
            {
                fDown[i] = 0;

            }
            else
            {

                fDown[i] = 1;
            }



        }


    }
    for (int i = fDown.size() - 1; i > size; i--)
    {
        int diff = fDown.size() - i;

        if (diff == 1)
        {
            if (fUp[i - 2] && fUp[i - 1])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }


        }
        else if (diff > 1 && diff < 4)
        {
            if (fUp[i - 3] && fUp[i - 2])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }




        }
        else if (diff > 3 && diff < 7)
        {
            if (fUp[i - 4] && fUp[i - 3])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }



        }
        else if (diff > 6 && diff < 11)
        {
            if (fUp[i - 5] && fUp[i - 4])
            {
                fUp[i] = 0;

            }
            else
            {

                fUp[i] = 1;
            }



        }


    }
}




Color playerLeftColor = GRAY;
Color playerRightColor = LIGHTGRAY;

void DropDown(Rectangle& moving, Vector2& mPoint, Vector2& posPoint, Texture2D& texture, vector<Rectangle>& downPy, vector<Rectangle>& upPy, bool& checkcoll, int startX, int startY, vector<bool> &fillDown, vector<bool> &fillUp, bool checkTurn, Rectangle OpArr[], string randDir[], vector<string> checkDir, vector<string> checkDirTwo, vector<bool> ftAr)
{


    
    int check = 0;
    if (CheckCollisionPointRec(mPoint, moving) && IsMouseButtonDown(MOUSE_BUTTON_LEFT) && checkTurn)
    {
        checkcoll = 1;


    }
    if (checkcoll)
    {
        if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
        {

            posPoint.x = mPoint.x;
            posPoint.y = mPoint.y;
            moving.x = posPoint.x;
            moving.y = posPoint.y;
        }
        else 
        {
            vector<bool> arrDown(fillDown.size());
            vector<bool> arrUP(fillDown.size());
            if (ColorToInt(playerLeftColor) == -926365441)
            {

                for (int i = 0; i < fillDown.size(); i++)
                {
                    arrDown[i] = 0;
                }
                for (int i = 0; i < fillDown.size(); i++)
                {
                    arrUP[i] = 1;
                }
            }
            else
            {

                for (int i = 0; i < fillUp.size(); i++)
                {
                    arrUP[i] = 0;
                }
                for (int i = 0; i < fillDown.size(); i++)
                {
                    arrDown[i] = 1;
                }
            }

            for (int i = 0; i < downPy.size(); i++)
            {

                if (CheckCollisionPointRec(mPoint, downPy[i]) && IsMouseButtonReleased(MOUSE_BUTTON_LEFT) && arrDown[i])
                {
                    //mama
                    for (int z = downPy.size() - 1; z != -1; z--)
                    {

                        


                            int diff = fillDown.size() - z;
                            string dir;
                            for (int j = 0; j < 10; j++)
                            {
                                if (mPoint.x == OpArr[j].x && mPoint.y == OpArr[j].y)
                                {
                                    dir = randDir[j];
                                }
                            }
                            switch (z)
                            {
                            case 0:
                            {
                                if (dir.find("and") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[0] && !ftAr[1]))
                                    {
                                        fillDown[z] = 0;

                                    }
                                    else
                                    {
                                        fillDown[z] = 1;

                                    }


                                }
                                if (dir.find("or") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[0] || !ftAr[1]))
                                    {
                                        fillDown[z] = 0;
                                    }
                                    else
                                    {
                                        fillDown[z] = 1;
                                    }
                                }
                                if (dir.find("x") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[0] ^ !ftAr[1]))
                                    {
                                        fillDown[z] = 0;
                                    }
                                    else
                                    {
                                        fillDown[z] = 1;
                                    }
                                }

                                break;
                            }
                            case 1:
                            {
                                if (dir.find("and") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[1] && !ftAr[2]))
                                    {
                                        fillDown[z] = 0;
                                    }
                                    else
                                    {
                                        fillDown[z] = 1;
                                    }
                                }
                                if (dir.find("or") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[1] || !ftAr[2]))
                                    {
                                        fillDown[z] = 0;
                                    }
                                    else
                                    {
                                        fillDown[z] = 1;
                                    }
                                }
                                if (dir.find("x") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (!ftAr[1] ^ !ftAr[2]))
                                    {
                                        fillDown[z] = 0;
                                    }
                                    else
                                    {
                                        fillDown[z] = 1;
                                    }
                                }

                                break;
                            }
                            case 2:
                            {
                                if (ftAr.size() == 4)
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[2] && !ftAr[3]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[2] || !ftAr[3]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[2] ^ !ftAr[3]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                }
                                break;
                            }
                            case 3:
                            {
                                if (ftAr.size() == 5)
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[3] && !ftAr[4]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[3] || !ftAr[4]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[3] ^ !ftAr[4]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                }
                                break;
                                
                            }
                            case 4:
                            {
                                if (ftAr.size() == 6)
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[4] && !ftAr[5]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[4] || !ftAr[5]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        if (atoi(&dir[dir.size() - 5]) == (!ftAr[4] ^ !ftAr[5]))
                                        {
                                            fillDown[z] = 0;
                                        }
                                        else
                                        {
                                            fillDown[z] = 1;
                                        }
                                    }
                                }
                                break;
                            }
                            default:
                            {
                                if (diff == 1)
                                {

                                    if (fillDown[z - 2] && fillDown[z - 1])
                                    {

                                        if (dir.find("and") != string::npos)
                                        {
                                            int l = 0, r = 0;

                                            if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                l = 1;


                                            }
                                             if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                l = 0;

                                            }
                                             if (checkDir[z - 1].find("0.png") != string::npos)
                                            {
                                                r = 0;

                                            }
                                             if (checkDir[z - 1].find("1.png") != string::npos)
                                            {
                                                r = 1;


                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l && r))
                                            {
                                                fillDown[z] = 0;

                                            }
                                            else
                                            {
                                                fillDown[z] = 1;

                                            }
                                        }
                                        if (dir.find("or") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                l = 1;

                                            }
                                            if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                l = 0;

                                            }
                                            if (checkDir[z - 1].find("0.png") != string::npos)
                                            {
                                                r = 0;

                                            }
                                            if (checkDir[z - 1].find("1.png") != string::npos)
                                            {
                                                r = 1;


                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l || r))
                                            {
                                                fillDown[z] = 0;

                                            }
                                            else
                                            {
                                                fillDown[z] = 1;

                                            }
                                        }
                                        if (dir.find("x") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                l = 1;

                                            }
                                            if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                            }
                                             if (checkDir[z - 1].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                            }
                                             if (checkDir[z - 1].find("1.png") != string::npos)
                                            {
                                                r = 1;

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                            {
                                                fillDown[z] = 0;
                                                cout << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                cout << l << " " << r;
                                            }
                                        }


                                    }
                                }
                                else if (diff > 1 && diff < 4)
                                {

                                    if (fillDown[z - 3] && fillDown[z - 2])
                                    {

                                        if (dir.find("and") != string::npos)
                                        {
                                            int l = 0, r = 0;

                                            if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                l = 1;


                                            }
                                             if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                l = 0;

                                            }
                                             if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                r = 0;

                                            }
                                             if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                r = 1;
                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l && r))
                                            {
                                                fillDown[z] = 0;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                            }
                                        }
                                        if (dir.find("or") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                l = 1;
                                            }
                                            if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                            }
                                            if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                            }
                                            if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                r = 1;

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l || r))
                                            {
                                                fillDown[z] = 0;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                            }
                                        }
                                        if (dir.find("x") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                l = 1;

                                            }
                                             if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                            }
                                             if (checkDir[z - 2].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                            }
                                             if (checkDir[z - 2].find("1.png") != string::npos)
                                            {
                                                r = 1;

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                            {
                                                fillDown[z] = 0;
                                                cout << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                cout << l << " " << r;
                                            }
                                        }


                                    }
                                }
                                else if (diff > 3 && diff < 7)
                                {

                                    if (fillDown[z - 4] && fillDown[z - 3])
                                    {

                                        if (dir.find("and") != string::npos)
                                        {
                                            int l = 0, r = 0;

                                            if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                l = 1;
                                                // cout << "f";

                                            }
                                             if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                                //cout << "f";
                                            }
                                             if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                                //cout << "f";
                                            }
                                             if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                r = 1;
                                                //cout << "f";

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l && r))
                                            {
                                                fillDown[z] = 0;
                                                //cout << "fHHHHHHH10100001010101010101010101001111" << l << " " << r;;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //cout << "fHHHHHHH" << l << " " << r;
                                            }
                                        }
                                        if (dir.find("or") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                l = 1;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                r = 1;
                                                //cout << "f";

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l || r))
                                            {
                                                fillDown[z] = 0;
                                                //cout << "fHHHHHHHKKKKKKKKKKKKKKKKKKK" << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //cout << "OOOOOOOOOOOOOOOOOOOO" << l << " " << r;
                                            }
                                        }
                                        if (dir.find("x") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                l = 1;

                                            }
                                             if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                            }
                                             if (checkDir[z - 3].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                            }
                                             if (checkDir[z - 3].find("1.png") != string::npos)
                                            {
                                                r = 1;

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                            {
                                                fillDown[z] = 0;
                                                // cout << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //  cout << l << " " << r;
                                            }
                                        }


                                    }
                                }
                                else if (diff > 6 && diff < 11)
                                {

                                    if (fillDown[z - 5] && fillDown[z - 4])
                                    {

                                        if (dir.find("and") != string::npos)
                                        {
                                            int l = 0, r = 0;

                                            if (checkDir[z - 5].find("1.png") != string::npos)
                                            {
                                                l = 1;
                                                // cout << "f";

                                            }
                                             if (checkDir[z - 5].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                                //cout << "f";
                                            }
                                             if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                                //cout << "f";
                                            }
                                             if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                r = 1;
                                                //cout << "f";

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l && r))
                                            {
                                                fillDown[z] = 0;
                                                //cout << "fHHHHHHH10100001010101010101010101001111" << l << " " << r;;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //cout << "fHHHHHHH" << l << " " << r;
                                            }
                                        }
                                        if (dir.find("or") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 5].find("1.png") != string::npos)
                                            {
                                                l = 1;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 5].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                                //cout << "f";
                                            }
                                            if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                r = 1;
                                                //cout << "f";

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l || r))
                                            {
                                                fillDown[z] = 0;
                                                //cout << "fHHHHHHHKKKKKKKKKKKKKKKKKKK" << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //cout << "OOOOOOOOOOOOOOOOOOOO" << l << " " << r;
                                            }
                                        }
                                        if (dir.find("x") != string::npos)
                                        {
                                            int l = 0, r = 0;
                                            if (checkDir[z - 5].find("1.png") != string::npos)
                                            {
                                                l = 1;

                                            }
                                             if (checkDir[z - 5].find("0.png") != string::npos)
                                            {
                                                l = 0;
                                            }
                                             if (checkDir[z - 4].find("0.png") != string::npos)
                                            {
                                                r = 0;
                                            }
                                             if (checkDir[z - 4].find("1.png") != string::npos)
                                            {
                                                r = 1;

                                            }

                                            if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                            {
                                                fillDown[z] = 0;
                                                // cout << l << " " << r;
                                            }
                                            else
                                            {
                                                fillDown[z] = 1;
                                                //  cout << l << " " << r;
                                            }
                                        }


                                    }
                                }
                                break;
                            }
                            }



                        
                    }
                    check = 1;
                    if (fillDown[i])
                    {
                        cout << fillDown[i] << endl;
                        check = 0;
                        posPoint.x = startX;
                        posPoint.y = startY;
                        moving.x = startX;
                        moving.y = startY;
                        texture.height = 90;
                        texture.width = 70;
                        moving.width = 70;
                        moving.height = 90;
                        
                    }
                    else
                    {
                        cout << fillDown[i] << endl;
                        

                        posPoint.x = downPy[i].x;
                        posPoint.y = downPy[i].y;
                        texture.height = downPy[i].height;
                        texture.width = downPy[i].width;
                        moving.width = downPy[i].width;
                        moving.height = downPy[i].height;
                        moving.x = downPy[i].x;
                        moving.y = downPy[i].y;
                        
                     }



                }
                else if (CheckCollisionPointRec(mPoint, upPy[i]) && IsMouseButtonReleased(MOUSE_BUTTON_LEFT) && arrUP[i])
                {
                    

                //GoodEv
                for (int i = upPy.size() - 1; i != -1; i--)
                {

                    if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mPoint, upPy[i]))
                    {


                        int diff = fillUp.size() - i;
                        string dir;
                        for (int j = 0; j < 10; j++)
                        {
                            if (mPoint.x == OpArr[j].x && mPoint.y == OpArr[j].y)
                            {
                                dir = randDir[j];
                            }
                        }
                        switch (i)
                        {
                        case 0:
                        {
                            if (dir.find("and") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[0] && ftAr[1]))
                                {
                                    fillUp[i] = 0;

                                }
                                else
                                {
                                    fillUp[i] = 1;

                                }


                            }
                            if (dir.find("or") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[0] || ftAr[1]))
                                {
                                    fillUp[i] = 0;
                                }
                                else
                                {
                                    fillUp[i] = 1;
                                }
                            }
                            if (dir.find("x") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[0] ^ ftAr[1]))
                                {
                                    fillUp[i] = 0;
                                }
                                else
                                {
                                    fillUp[i] = 1;
                                }
                            }

                            break;
                        }
                        case 1:
                        {
                            if (dir.find("and") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[1] && ftAr[2]))
                                {
                                    fillUp[i] = 0;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];
                                }
                                else
                                {
                                    fillUp[i] = 1;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];

                                }
                            }
                            if (dir.find("or") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[1] || ftAr[2]))
                                {
                                    fillUp[i] = 0;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];

                                }
                                else
                                {
                                    fillUp[i] = 1;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];

                                }
                            }
                            if (dir.find("x") != string::npos)
                            {
                                if (atoi(&dir[dir.size() - 5]) == (ftAr[1] ^ ftAr[2]))
                                {
                                    fillUp[i] = 0;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];

                                }
                                else
                                {
                                    fillUp[i] = 1;
                                    cout << dir << " " << ftAr[1] << " " << ftAr[2];

                                }
                            }

                            break;
                        }
                        case 2:
                        {

                            if (ftAr.size() == 4)
                            {


                                if (dir.find("and") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[2] && ftAr[3]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("or") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[2] || ftAr[3]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("x") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[2] ^ ftAr[3]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                            }
                            break;
                            
                        }
                        case 3:
                        {
                            if (ftAr.size() == 5)
                            {

                                if (dir.find("and") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[3] && ftAr[4]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("or") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[3] || ftAr[4]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("x") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[3] ^ ftAr[4]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                            }
                            break;
                        }
                        case 4:
                        {
                            if (ftAr.size() == 6)
                            {

                                if (dir.find("and") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[4] && ftAr[5]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("or") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[4] || ftAr[5]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                                if (dir.find("x") != string::npos)
                                {
                                    if (atoi(&dir[dir.size() - 5]) == (ftAr[4] ^ ftAr[5]))
                                    {
                                        fillUp[i] = 0;
                                    }
                                    else
                                    {
                                        fillUp[i] = 1;
                                    }
                                }
                            }
                            break;
                            
                        }
                        default:
                        {

                            if (diff == 1)
                            {

                                if (fillUp[i - 2] && fillUp[i - 1])
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        int l = 0, r = 0;

                                        if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 1].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 1].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l && r))
                                        {
                                            fillUp[i] = 0;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                        }
                                        if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                        if (checkDirTwo[i - 1].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                        if (checkDirTwo[i - 1].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l || r))
                                        {
                                            fillUp[i] = 0;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 1].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 1].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                        {
                                            fillUp[i] = 0;
                                            cout << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            cout << l << " " << r;
                                        }
                                    }


                                }
                            }
                            else if (diff > 1 && diff < 4)
                            {

                                if (fillUp[i - 3] && fillUp[i - 2])
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        int l = 0, r = 0;

                                        if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l && r))
                                        {
                                            fillUp[i] = 0;
                                            cout << "fHHHHHHH10100001010101010101010101001111" << l << " " << r;;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                        }
                                        if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                        if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                        if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l || r))
                                        {
                                            fillUp[i] = 0;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 2].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 2].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                        {
                                            fillUp[i] = 0;
                                            cout << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            cout << l << " " << r;
                                        }
                                    }


                                }
                            }
                            else if (diff > 3 && diff < 7)
                            {

                                if (fillUp[i - 4] && fillUp[i - 3])
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        int l = 0, r = 0;

                                        if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                            // cout << "f";

                                        }
                                         if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                            //cout << "f";
                                        }
                                         if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                            //cout << "f";
                                        }
                                         if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            r = 1;
                                            //cout << "f";

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l && r))
                                        {
                                            fillUp[i] = 0;
                                            //cout << "fHHHHHHH10100001010101010101010101001111" << l << " " << r;;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //cout << "fHHHHHHH" << l << " " << r;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            r = 1;
                                            //cout << "f";

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l || r))
                                        {
                                            fillUp[i] = 0;
                                            //cout << "fHHHHHHHKKKKKKKKKKKKKKKKKKK" << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //cout << "OOOOOOOOOOOOOOOOOOOO" << l << " " << r;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 3].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 3].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                        {
                                            fillUp[i] = 0;
                                            // cout << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //  cout << l << " " << r;
                                        }
                                    }


                                }
                            }
                            else if (diff > 6 && diff < 11)
                            {

                                if (fillUp[i - 5] && fillUp[i - 4])
                                {

                                    if (dir.find("and") != string::npos)
                                    {
                                        int l = 0, r = 0;

                                        if (checkDirTwo[i - 5].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                            // cout << "f";

                                        }
                                         if (checkDirTwo[i - 5].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                            //cout << "f";
                                        }
                                         if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                            //cout << "f";
                                        }
                                         if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            r = 1;
                                            //cout << "f";

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l && r))
                                        {
                                            fillUp[i] = 0;
                                            //cout << "fHHHHHHH10100001010101010101010101001111" << l << " " << r;;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //cout << "fHHHHHHH" << l << " " << r;
                                        }
                                    }
                                    if (dir.find("or") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 5].find("1.png") != string::npos)
                                        {
                                            l = 1;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 5].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                            //cout << "f";
                                        }
                                        if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            r = 1;
                                            //cout << "f";

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l || r))
                                        {
                                            fillUp[i] = 0;
                                            //cout << "fHHHHHHHKKKKKKKKKKKKKKKKKKK" << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //cout << "OOOOOOOOOOOOOOOOOOOO" << l << " " << r;
                                        }
                                    }
                                    if (dir.find("x") != string::npos)
                                    {
                                        int l = 0, r = 0;
                                        if (checkDirTwo[i - 5].find("1.png") != string::npos)
                                        {
                                            l = 1;

                                        }
                                         if (checkDirTwo[i - 5].find("0.png") != string::npos)
                                        {
                                            l = 0;
                                        }
                                         if (checkDirTwo[i - 4].find("0.png") != string::npos)
                                        {
                                            r = 0;
                                        }
                                         if (checkDirTwo[i - 4].find("1.png") != string::npos)
                                        {
                                            r = 1;

                                        }

                                        if (atoi(&dir[dir.size() - 5]) == (l ^ r))
                                        {
                                            fillUp[i] = 0;
                                            // cout << l << " " << r;
                                        }
                                        else
                                        {
                                            fillUp[i] = 1;
                                            //  cout << l << " " << r;
                                        }
                                    }


                                }
                            }
                            break;
                        }
                        }



                    }
                }

                    check = 1;
                    if (fillUp[i])
                    {
                        cout << fillUp[i] << endl;
                        check = 0;
                        posPoint.x = startX;
                        posPoint.y = startY;
                        moving.x = startX;
                        moving.y = startY;
                        texture.height = 90;
                        texture.width = 70;
                        moving.width = 70;
                        moving.height = 90;
                       
                    }
                    else
                    {
                        
                        
                    posPoint.x = upPy[i].x;
                    posPoint.y = upPy[i].y;
                    texture.height = upPy[i].height;
                    texture.width = upPy[i].width;
                    moving.width = upPy[i].width;
                    moving.height = upPy[i].height;
                    moving.x = upPy[i].x;
                    moving.y = upPy[i].y;
                    }



                }
                else
                {
                    posPoint.x = startX;
                    posPoint.y = startY;
                    moving.x = startX;
                    moving.y = startY;
                    texture.height = 90;
                    texture.width = 70;
                    moving.width = 70;
                    moving.height = 90;
                    
                }
            }
            if (check)
            {
                if(moving.x == startX && moving.y == startY)
                { 
                    
                }
                else {
                    if (ColorToInt(playerLeftColor) == -926365441)
                    {
                        playerLeftColor = GRAY;
                        playerRightColor = LIGHTGRAY;

                    }
                    else
                    {
                        playerLeftColor = LIGHTGRAY;
                        playerRightColor = GRAY;

                    }
                }
            }
            checkcoll = 0;

        }
    }


}
vector<bool> checkForPlayerTurn(8);

void changePlayer(Color Leftp, Color  Rightp)
{
    if (ColorToInt(Leftp) != -926365441)
    {
        checkForPlayerTurn = { 1, 1, 1, 1, 0, 0, 0, 0 };

    }
    else if (ColorToInt(Rightp) != -926365441)
    {
        checkForPlayerTurn = { 0,0,0,0,1,1,1,1 };

    }


}
int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 1000;

    bool checker = 1;
    bool checker2 = 1;
    vector<bool> filledDown;
    vector<bool> filledUp;
    srand(time(0));
    Rectangle hide = { 0,0,screenWidth,screenHeight };
    string Directories[6] = { "../images/or1.png", "../images/or0.png", "../images/and1.png", "../images/and0.png", "../images/x1.png", "../images/x0.png" };
    string randomDir[10];
    for (int i = 0; i < 10; i++)
    {
        randomDir[i] = Directories[rand() % 6];
    }



    InitWindow(screenWidth, screenHeight, "Vis!00");
    Texture2D check_mark = LoadTexture("../images/Check.png");

    Texture2D deck_texture = LoadTexture("../images/deck.png");

    Texture2D bin = LoadTexture("../images/bin.png");

    Texture2D red_card = LoadTexture(randomDir[0].c_str());
    Texture2D blue_card = LoadTexture(randomDir[1].c_str());
    Texture2D yellow_card = LoadTexture(randomDir[2].c_str());
    Texture2D F_card = LoadTexture(randomDir[3].c_str());
    Texture2D Five_card = LoadTexture(randomDir[4].c_str());
    

    red_card.width = 70, red_card.height = 90;
    blue_card.width = 70, blue_card.height = 90;
    yellow_card.width = 70, yellow_card.height = 90;
    F_card.width = 70, F_card.height = 90;
    Five_card.width = 70, Five_card.height = 90;
    bin.width = 60, bin.height = 60;
    deck_texture.width = 70, deck_texture.height = 70;

    Texture2D redRight_card = LoadTexture(randomDir[5].c_str());
    Texture2D blueRight_card = LoadTexture(randomDir[6].c_str());
    Texture2D yellowRight_card = LoadTexture(randomDir[7].c_str());
    Texture2D FRight_card = LoadTexture(randomDir[8].c_str());
    Texture2D FiveRight_card = LoadTexture(randomDir[9].c_str());

    redRight_card.width = 70, redRight_card.height = 90;
    blueRight_card.width = 70, blueRight_card.height = 90;
    yellowRight_card.width = 70, yellowRight_card.height = 90;
    FRight_card.width = 70, FRight_card.height = 90;
    FiveRight_card.width = 70, FiveRight_card.height = 90;
    


    Rectangle colorsRecs[4];
    for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
    {
        colorsRecs[i].height = 145 + 250;
        colorsRecs[i].width = 110 + 150;
        colorsRecs[i].x = 225 + i * (110 + 150 + /*this number shows the space between the cards ->*/100);
        colorsRecs[i].y = GetScreenHeight() / 2 - colorsRecs[i].height / 2;
    }

    Rectangle gameMenu[4];
    vector<Rectangle> BasePyramidDown;
    vector<Rectangle> BasePyramidUp;
    bool checkfirstcollisionRed = 0;
    bool checkfirstcollisionBlue = 0;
    bool checkfirstcollisionYellow = 0;
    bool checkfirstcollisionF = 0;
    bool checkfirstcollisionFive = 0;

    vector<string> deck(48);
    for (int i = 0; i < deck.size(); i++)
    {
        if (i > -1 && i < 8)
        {
            deck[i] = "../image/x1.png";
        }
        if (i > 7 && i < 16)
        {
            deck[i] = "../image/x0.png";
        }
        if (i > 15 && i < 24)
        {
            deck[i] = "../image/or1.png";
        }
        if (i > 23 && i < 32)
        {
            deck[i] = "../image/or0.png";
        }
        if (i > 31 && i < 40)
        {
            deck[i] = "../image/and0.png";
        }
        if (i > 39 && i < 48)
        {
            deck[i] = "../image/and1.png";
        }
    }
    Vector2 check_marker = { 837.5, 260 };
    Vector2 check_marker3 = { 946, 600.5 };
    Vector2 check_marker2 = { -946, -600.5 };
    Vector2 check_marker4 = { 946, 785 };

    int XFPS = -100;
    int YFPS = -100;


    bool ifs = 0;
    bool ivs = 0;
    bool ifss = 0;
    bool ivss = 0;
    bool its = 0;
    bool itss = 0;
    bool iks = 0;
    bool ikss = 0;

    Rectangle arr[4];
    Rectangle arr2[4];
    Rectangle arr3[2];
    Rectangle arr4[2];
    check_mark.width = 38;
    check_mark.height = 38;


    bool checkfirstcollisionRedRight = 0;
    bool checkfirstcollisionBlueRight = 0;
    bool checkfirstcollisionYellowRight = 0;
    bool checkfirstcollisionFRight = 0;
    bool checkfirstcollisionFiveRight = 0;

    Rectangle BaseCards = { 225, 420, 90, 105 };
    Vector2 mousePoint;
    Vector2 posImgRed = { 10,50 };
    Vector2 posImgBlue = { 10,200 };
    Vector2 posImgYellow = { 10,350 };
    Vector2 posImgF = { 10,500 };
    Vector2 posImgFive = { 10,650 };


    Vector2 posImgRedRight = { 1600,50 };
    Vector2 posImgBlueRight = { 1600,200 };
    Vector2 posImgYellowRight = { 1600,350 };
    Vector2 posImgFRight = { 1600,500 };
    Vector2 posImgFiveRight = { 1600,650 };

    Rectangle movingBoxRed = { posImgRed.x, posImgRed.y, red_card.width, red_card.height };
    Rectangle movingBoxBlue = { posImgBlue.x, posImgBlue.y, blue_card.width, blue_card.height };
    Rectangle movingBoxYellow = { posImgYellow.x, posImgYellow.y, yellow_card.width, yellow_card.height };
    Rectangle movingBoxF = { posImgF.x, posImgF.y, F_card.width, F_card.height };
    Rectangle movingBoxFive = { posImgFive.x, posImgFive.y, Five_card.width, Five_card.height };
    Rectangle RectBin = {400, 900, 60, 60};
    Rectangle RectDeck = { 1300, 40, 60, 60 };


    
    Rectangle movingBoxRedRight = { posImgRedRight.x, posImgRedRight.y, red_card.width, red_card.height };
    Rectangle movingBoxBlueRight = { posImgBlueRight.x, posImgBlueRight.y, blue_card.width, blue_card.height };
    Rectangle movingBoxYellowRight = { posImgYellowRight.x, posImgYellowRight.y, yellow_card.width, yellow_card.height };
    Rectangle movingBoxFRight = { posImgFRight.x, posImgFRight.y, FRight_card.width, FRight_card.height };
    Rectangle movingBoxFiveRight = { posImgFiveRight.x, posImgFiveRight.y, FiveRight_card.width, FiveRight_card.height };

    Rectangle arrToCheckOperation[10];
    for (int i = 0; i < 10; i++)
    {
        switch (i)
        {
        case 0:
            arrToCheckOperation[i] = movingBoxRed;
            break;
        case 1:
            arrToCheckOperation[i] = movingBoxBlue;
            break;
        case 2:
            arrToCheckOperation[i] = movingBoxYellow;
            break;
        case 3:
            arrToCheckOperation[i] = movingBoxF;
            break;
        case 4:
            arrToCheckOperation[i] = movingBoxFive;
            break;
        case 5:
            arrToCheckOperation[i] = movingBoxRedRight;
            break;
        case 6:
            arrToCheckOperation[i] = movingBoxBlueRight;
            break;
        case 7:
            arrToCheckOperation[i] = movingBoxYellowRight;
            break;
        case 8:
            arrToCheckOperation[i] = movingBoxFRight;
            break;
        case 9:
            arrToCheckOperation[i] = movingBoxFiveRight;
            break;
        }
    }

    Rectangle LeftPlayer = { 0, 0, 325, 1000 };
    Rectangle RightPlayer = { 1475, 0, 325, 1000 };
    vector<string> checkDir;
    vector<string> checkDirTwo;



    bool zero = 0, one = 0, two = 0, three = 0;
    bool menuZero = 0, menuOne = 0, menuTwo = 0, menuThree = 0;
    vector<bool>ftAr(6);
    for (int i = 0; i < sizeof ftAr / sizeof ftAr[0]; i++)
    {
        ftAr[i] = rand() % 2;
    }
    SetTargetFPS(120);

    while (!WindowShouldClose())
    {

        mousePoint = GetMousePosition();
        srand(time(NULL));
        BeginDrawing();


        for (size_t i = 0; i < 4; i++)
        {
            switch (i)
            {
            case 0:
                gameMenu[i].width = 110 + 300;
                gameMenu[i].height = 145 + 25;
                gameMenu[i].x = 700/*this number shows the space between the cards ->*/;
                gameMenu[i].y = gameMenu[i].height / 15;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Play", (gameMenu[i].width / 5) + gameMenu[i].x/*this number pull back the text to appropriate align ->*/ - 55, 0.1, 175, BLACK);
                break;
            case 1:
                gameMenu[i].width = 110 + 225;
                gameMenu[i].height = 145;
                gameMenu[i].x = gameMenu[i - 1].x + 40;
                gameMenu[i].y = gameMenu[i - 1].height * 3;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Quit", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 40, 510, 150, BLACK);
                break;
            case 2:
                gameMenu[i].width = 650;
                gameMenu[i].height = 165;
                gameMenu[i].x = gameMenu[i - 1].x - 150;
                gameMenu[i].y = gameMenu[i - 1].height * 2.45;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Settings", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 122.5, 360, 150, BLACK);
                break;
            case 3:
                gameMenu[i].width = 570;
                gameMenu[i].height = 175;
                gameMenu[i].x = gameMenu[i - 1].x + 40;
                gameMenu[i].y = gameMenu[i - 1].height * 1.1;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Rules", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 40, 187.5, 150, BLACK);
                break;
            }



            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[0]) && checker)
            {

                menuZero = true;
                menuOne = 0;
                menuTwo = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[1]) && checker)
            {

                menuOne = true;
                menuZero = 0;
                menuTwo = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[2]) && checker)
            {
                menuTwo = true;
                menuOne = 0;
                menuZero = 0;
                menuThree = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[3]) && checker)
            {
                menuThree = true;
                menuOne = 0;
                menuZero = 0;
                menuTwo = 0;
            }
        }

        if (menuZero)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);

            for (int i = 0; i < 2; i++)
            {
                gameMenu[i].x = -100;
                gameMenu[i].y = -100;
                gameMenu[i].height = 0;
                gameMenu[i].width = 0;
            }

            for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
            {

                string txt = to_string(3 + i);
                switch (i)
                {
                case 0:
                {
                    DrawRectangleRec(colorsRecs[i], DARKBLUE);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 1:
                {
                    DrawRectangleRec(colorsRecs[i], PINK);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 2:
                {
                    DrawRectangleRec(colorsRecs[i], RED);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }
                case 3:
                {
                    DrawRectangleRec(colorsRecs[i], ORANGE);
                    DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/37.5, 350 + 50, 150, BLACK);
                    break;
                }

                }

            }






            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[0]) && checker2)
            {

                zero = true;
                one = 0, two = 0, three = 0;
                BasePyramidDown.resize(3);
                BasePyramidUp.resize(3);
                filledUp.resize(3);
                filledDown.resize(3); 
                ftAr.resize(3);


            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[1]) && checker2)
            {

                one = true;
                zero = 0, two = 0, three = 0;
                BasePyramidDown.resize(6);
                BasePyramidUp.resize(6);
                filledUp.resize(6);
                filledDown.resize(6);
                ftAr.resize(4);


            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[2]) && checker2)
            {

                two = true;
                one = 0, zero = 0, three = 0;
                BasePyramidDown.resize(10);
                BasePyramidUp.resize(10);
                filledUp.resize(10);
                filledDown.resize(10);
                ftAr.resize(5);
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[3]) && checker2)
            {

                three = true;
                BasePyramidDown.resize(15);
                BasePyramidUp.resize(15);
                filledUp.resize(15);
                filledDown.resize(15);
                ftAr.resize(6);
                one = 0, two = 0, zero = 0;

            }
            SetupDown(BasePyramidDown);
            SetupUp(BasePyramidUp);

            if (zero)
            {
                
                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(movingBoxRed, LIGHTGRAY);
                DrawRectangleRec(movingBoxBlue, LIGHTGRAY);
                DrawRectangleRec(movingBoxYellow, LIGHTGRAY);
                DrawRectangleRec(movingBoxF, LIGHTGRAY);

                DrawRectangleRec(movingBoxBlueRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxYellowRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxRedRight, LIGHTGRAY);
                DrawRectangleRec(movingBoxFRight, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);


                changePlayer(playerLeftColor, playerRightColor);




                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 394, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 604, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 814, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
                }

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 665, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 657.5, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 657.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 665, 480, 50, BLACK);
                }
                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 874.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 867, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 867, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 874.5, 480, 50, BLACK);
                }
                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1084.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1077, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1077, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1084.5, 480, 50, BLACK);
                }
                //check if filled


                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, movingBoxFive, movingBoxFiveRight, filledDown, filledUp, arrToCheckOperation, checkDir, randomDir, checkDirTwo);
                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 1);

                

                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);

                //bin and deck
                DrawRectangleRec(RectBin, LIGHTGRAY);
                DrawRectangleRec(RectDeck, LIGHTGRAY);
                DrawTexture(bin, 400, 900, LIGHTGRAY);
                DrawTexture(deck_texture, 1300, 40, LIGHTGRAY);



            }
            // globalcout = 0;
            if (one)
            {
                changePlayer(playerLeftColor, playerRightColor);


                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 314, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 514, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 714, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 914, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 320, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 520, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 720, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 920, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 320, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 520, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 720, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 920, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
                }


                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 587.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 580, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 580, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 587.5, 480, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 787.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 780, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 780, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 787.5, 480, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 987.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 980, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 980, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 987.5, 480, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1187.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1180, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1180, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1187.5, 480, 50, BLACK);
                }

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, movingBoxFive, movingBoxFiveRight, filledDown, filledUp, arrToCheckOperation, checkDir, randomDir, checkDirTwo);

                ///Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 2);

                

                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);

                //bin and deck
                DrawRectangleRec(RectBin, LIGHTGRAY);
                DrawRectangleRec(RectDeck, LIGHTGRAY);
                DrawTexture(bin, 400, 900, LIGHTGRAY);
                DrawTexture(deck_texture, 1300, 40, LIGHTGRAY);
            }
            //globalcout = 0;
            if (two)
            {

                changePlayer(playerLeftColor, playerRightColor);

                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 219, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 419, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 619, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 819, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1019, (int)BaseCards.y + 10, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 15, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 70, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }


                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
                }


                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 492.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 485, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 485, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 492.5, 495, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 692.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 685, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 685, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 692.5, 495, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 892.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 885, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 885, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 892.5, 495, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1092.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1085, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1085, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1092.5, 495, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1292.5, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1285, 495, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1285, 440, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1292.5, 495, 50, BLACK);
                }

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, movingBoxFive, movingBoxFiveRight, filledDown, filledUp, arrToCheckOperation, checkDir, randomDir, checkDirTwo);

                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 3);

                

                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);
                //bin and deck
                DrawRectangleRec(RectBin, LIGHTGRAY);
                DrawRectangleRec(RectDeck, LIGHTGRAY);
                DrawTexture(bin, 400, 900, LIGHTGRAY);
                DrawTexture(deck_texture, 1300, 40, LIGHTGRAY);


            }
            else if (three)
            {



                changePlayer(playerLeftColor, playerRightColor);


                checker2 = 0;
                DrawRectangleRec(hide, LIGHTGRAY);

                DrawRectangleRec(LeftPlayer, playerLeftColor);
                DrawRectangleRec(RightPlayer, playerRightColor);

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 450, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 126.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 326.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 526.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 726.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 926.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1126.5, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 132.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 332.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 532.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 732.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 932.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1132.5, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 132.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 332.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 532.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 732.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 932.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1132.5, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                /*Draw Blue cudes ->*/ for (int i = 0; i < BasePyramidDown.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidDown[i], 10, BLACK);
                }

                for (int i = 0; i < BasePyramidUp.size(); i++)
                {
                    DrawRectangleLinesEx(BasePyramidUp[i], 10, BLACK);
                }

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 397.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 390, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 390, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 397.5, 480, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 597.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 590, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 590, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 597.5, 480, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 797.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 790, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 790, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 797.5, 480, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 997.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 990, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 990, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 997.5, 480, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1197.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1190, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1190, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1197.5, 480, 50, BLACK);
                }

                if (ftAr[5])
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1397.5, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1390, 480, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1390, 425, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1397.5, 480, 50, BLACK);
                }

                Filled(BasePyramidDown, BasePyramidUp, movingBoxRed, movingBoxBlue, movingBoxYellow, movingBoxF, movingBoxRedRight, movingBoxBlueRight, movingBoxYellowRight, movingBoxFRight, movingBoxFive, movingBoxFiveRight, filledDown, filledUp, arrToCheckOperation, checkDir, randomDir, checkDirTwo);

                //Check if two are filled and then to put another
                checkTwoCardsFilled(filledDown, filledUp, 4);



                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);
                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {
                    DropDown(movingBoxRed, mousePoint, posImgRed, red_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRed, 10, 50, filledDown, filledUp, checkForPlayerTurn[0], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);



                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {


                    DropDown(movingBoxYellow, mousePoint, posImgYellow, yellow_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellow, 10, 350, filledDown, filledUp, checkForPlayerTurn[1], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);

                }
                else if (checkfirstcollisionBlue && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlue, mousePoint, posImgBlue, blue_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlue, 10, 200, filledDown, filledUp, checkForPlayerTurn[2], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxBlueRight, mousePoint, posImgBlueRight, blueRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionBlueRight, 1600, 200, filledDown, filledUp, checkForPlayerTurn[4], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxYellowRight, mousePoint, posImgYellowRight, yellowRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionYellowRight, 1600, 350, filledDown, filledUp, checkForPlayerTurn[5], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxRedRight, mousePoint, posImgRedRight, redRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionRedRight, 1600, 50, filledDown, filledUp, checkForPlayerTurn[6], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxF, mousePoint, posImgF, F_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionF, 10, 500, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFRight, mousePoint, posImgFRight, FRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFRight, 1600, 500, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }

                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight == 0 && checkfirstcollisionFive)
                {

                    DropDown(movingBoxFive, mousePoint, posImgFive, Five_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFive, 10, 650, filledDown, filledUp, checkForPlayerTurn[3], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                else if (checkfirstcollisionBlue == 0 && checkfirstcollisionRed == 0 && checkfirstcollisionYellow == 0 && checkfirstcollisionF == 0 && checkfirstcollisionBlueRight == 0 && checkfirstcollisionRedRight == 0 && checkfirstcollisionYellowRight == 0 && checkfirstcollisionFRight == 0 && checkfirstcollisionFiveRight && checkfirstcollisionFive == 0)
                {

                    DropDown(movingBoxFiveRight, mousePoint, posImgFiveRight, FiveRight_card, BasePyramidDown, BasePyramidUp, checkfirstcollisionFiveRight, 1600, 650, filledDown, filledUp, checkForPlayerTurn[7], arrToCheckOperation, randomDir, checkDir, checkDirTwo, ftAr);


                }
                DrawTexture(red_card, posImgRed.x, posImgRed.y, WHITE);
                DrawTexture(blue_card, posImgBlue.x, posImgBlue.y, WHITE);
                DrawTexture(yellow_card, posImgYellow.x, posImgYellow.y, WHITE);
                DrawTexture(F_card, posImgF.x, posImgF.y, WHITE);
                DrawTexture(Five_card, posImgFive.x, posImgFive.y, WHITE);

                DrawTexture(redRight_card, posImgRedRight.x, posImgRedRight.y, WHITE);
                DrawTexture(blueRight_card, posImgBlueRight.x, posImgBlueRight.y, WHITE);
                DrawTexture(yellowRight_card, posImgYellowRight.x, posImgYellowRight.y, WHITE);
                DrawTexture(FRight_card, posImgFRight.x, posImgFRight.y, WHITE);
                DrawTexture(FiveRight_card, posImgFiveRight.x, posImgFiveRight.y, WHITE);

                //bin and deck
                DrawRectangleRec(RectBin, LIGHTGRAY);
                DrawRectangleRec(RectDeck, LIGHTGRAY);
                DrawTexture(bin, 400, 900, LIGHTGRAY);
                DrawTexture(deck_texture, 1300, 40, LIGHTGRAY);


            }
        }
        else if (menuTwo)
        {
            checker = 0;
            Rectangle YES = { 806.5, 600.5 }, NO = { 946, 600.5 };
            Rectangle ON = { 806.5, 785 }, OFF = { 946, 785 };
            for (int i = 0; i < 4; i++)
            {
                arr[i].x = 737.5 + i * 100;
                arr[i].y = 260;
                arr[i].width = 38;
                arr[i].height = 38;

                arr2[i].x = 737.5 + i * 100;
                arr2[i].y = 420;
                arr2[i].width = 38;
                arr2[i].height = 38;

            }
            for (int i = 0; i < 2; i++)
            {
                arr3[i].x = 806 + i * 140;
                arr3[i].y = 600;
                arr3[i].width = 38;
                arr3[i].height = 38;
            }
            for (int i = 0; i < 2; i++)
            {
                arr4[i].x = 806 + i * 140;
                arr4[i].y = 785;
                arr4[i].width = 38;
                arr4[i].height = 38;
            }

            //225, 420, 90, 105 
            DrawRectangleRec(hide, LIGHTGRAY);
            DrawText("Settings:", 650, 25, 125, VIOLET);

            DrawText("Choose your FPS:", 685, 160, 50, BLACK);

            DrawText("30 FPS", 715, 220, 20, BLACK);
            DrawText("60 FPS", 815, 220, 20, BLACK);
            DrawText("120 FPS", 915, 220, 20, BLACK);
            DrawText("240 FPS", 1015, 220, 20, BLACK);
            DrawRectangle((int)BaseCards.x + 506.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 606.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 706.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 806.5, (int)BaseCards.y - 165, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 4; i++)
            {
                DrawRectangleRec(arr[i], DARKGRAY);
            }

            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[0]))
            {
                ifs = 1;


                SetTargetFPS(30);
            }
            else
            {
                ifs = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[1]))
            {


                SetTargetFPS(60);
                ifss = 1;

            }

            else
            {
                ifss = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[2]))
            {
                SetTargetFPS(120);
                ivs = 1;
            }
            else
            {
                ivs = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr[3]))
            {
                SetTargetFPS(240);
                ivss = 1;
            }
            else
            {
                ivss = 0;
            }

            //show fps
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr3[0]))
            {
                its = 1;
            }
            else
            {
                its = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr3[1]))
            {

                itss = 1;
            }
            else
            {
                itss = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr4[0]))
            {

                iks = 1;
            }
            else
            {
                iks = 0;
            }
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr4[1]))
            {

                ikss = 1;
            }
            else
            {
                ikss = 0;
            }
            //draw fps
            if (ifs)
            {
                check_marker = { 737.5, 260 };
            }

            if (ifss)
            {
                check_marker = { 837.5, 260 };

            }
            if (ivs)
            {

                check_marker = { 937.5, 260 };
            }
            if (ivss)
            {
                check_marker = { 1037.5, 260 };
            }

            //show fps
            if (its)
            {
                check_marker3 = { 806.5, 600.5 };
                XFPS = 10, YFPS = 10;
            }
            if (itss)
            {
                check_marker3 = { 946, 600.5 };
                XFPS = -100, YFPS = -100;
            }

            if (its)
            {
                check_marker4 = { 806.5, 600.5 };
                //music
            }
            if (itss)
            {
                check_marker4 = { 946, 600.5 };
                //music
            }

            DrawText("Choose your mode:", 675, 320, 50, BLACK);
            DrawText("Normal", 722.5, 380, 20, BLACK);
            DrawText("Old", 840.5, 380, 20, BLACK);
            DrawText("Modern", 920, 380, 20, BLACK);
            DrawText("Colorblind", 1009, 380, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 506.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 606.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 706.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 806.5, (int)BaseCards.y - 5, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 4; i++)
            {
                DrawRectangleRec(arr2[i], DARKGRAY);
                if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, arr2[i]))
                {
                    //needs to be added color mode changer and texture
                }
            }

            DrawFPS(XFPS, YFPS);
            DrawText("Show FPS:", 775, 500, 50, BLACK);

            DrawText("YES", 805, 560.5, 20, BLACK);
            DrawText("NO", 950, 560.5, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 575, (int)BaseCards.y + 175, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 715, (int)BaseCards.y + 175, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 2; i++)
            {
                DrawRectangleRec(arr3[i], DARKGRAY);

            }

            DrawText("Music:", 825, 675, 50, BLACK);

            DrawText("ON", 815, 750.5, 20, BLACK);
            DrawText("OFF", 947.5, 750.5, 20, BLACK);

            DrawRectangle((int)BaseCards.x + 575, (int)BaseCards.y + 360, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            DrawRectangle((int)BaseCards.x + 715, (int)BaseCards.y + 360, (int)BaseCards.width - 41, (int)BaseCards.height - 56, BLACK);
            for (int i = 0; i < 2; i++)
            {
                DrawRectangleRec(arr4[i], DARKGRAY);

            }
            DrawTexture(check_mark, check_marker3.x, check_marker3.y, DARKGRAY);
            DrawTexture(check_mark, check_marker.x, check_marker.y, DARKGRAY);
            DrawTexture(check_mark, check_marker4.x, check_marker4.y, DARKGRAY);
        }
        else if (menuThree)
        {
            checker = 0;
            DrawRectangleRec(hide, LIGHTGRAY);
            DrawText("What is b00le0?", 400, 25, 125, VIOLET);
            DrawText("b00leo is a card game which combins strategy card play with the concept of Boolean logic.  Players race to resolve an", 50, 160, 25, BLACK);
            DrawText("intial binary number to a single specific bit by creating a logic pyramid. This is accomplished through the use of logical gates.", 50, 210, 25, BLACK);
            DrawText("Cards:", 50, 250, 50, BLACK);
            DrawText("A b00leo deck contains a total of 64 cards: ", 50, 310, 25, BLACK);
            DrawText("2-Truth Table Cards – demonstrate the outputs of each different gates given all possible input combinations ", 50, 360, 25, BLACK);
            DrawText("6-Initial Binaries- cards that are used to determine the binary numbers that form the starting point which players will build their logic", 50, 395, 25, BLACK);
            DrawText("gate pyramids", 50, 415, 25, BLACK);
            DrawText("8 – Not Cards-can be used to change the state of a bit in the initial binary.", 50, 460, 25, BLACK);
            DrawText("48 – Logical Gate Cards-cards that represent the operations allowed in the field of Boolean algebra.", 50, 510, 25, BLACK);
            DrawText("How do you win the game? ", 50, 550, 50, BLACK);
            DrawText("The goal of the game is to build a pyramid of logic gates starting from a base initial binary number.", 50, 610, 25, BLACK);
            DrawText("Game Play: ", 50, 650, 50, BLACK);
            DrawText("During each turn the player first draws the top card from the deck and then either plays a card or discards a card.", 50, 710, 25, BLACK);
            DrawText("Only one card may be played (or discarded) each turn.", 50, 735, 25, BLACK);
            DrawText("How to use not cards: ", 50, 770, 50, BLACK);
            DrawText("To play the Not card the player declares which initial bit is the target and reverses that bit card.", 50, 830, 25, BLACK);


        }
        else if (menuOne)
        {

            exit(0);
        }

        ClearBackground(LIGHTGRAY);


        EndDrawing();
        //system("CLS");
    }
    UnloadTexture(red_card);
    UnloadTexture(blue_card);
    UnloadTexture(yellow_card);
    UnloadTexture(F_card);
    UnloadTexture(deck_texture);
    UnloadTexture(bin);

    UnloadTexture(blueRight_card);
    UnloadTexture(yellowRight_card);
    UnloadTexture(redRight_card);
    UnloadTexture(FRight_card);
    UnloadTexture(FiveRight_card);
    UnloadTexture(Five_card);


    CloseWindow();


    return 0;
}