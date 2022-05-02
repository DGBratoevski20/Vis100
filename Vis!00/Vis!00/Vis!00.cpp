#include "raylib.h"
#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 950;
    
    bool checker = 1;

    Rectangle hide = {0,0,screenWidth,screenHeight};

    srand(time(0));
    InitWindow(screenWidth, screenHeight, "Vis!00");

    Rectangle colorsRecs[4];
    for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
    {
        colorsRecs[i].height = 145 + 250;
        colorsRecs[i].width = 110 + 150;
        colorsRecs[i].x = 225 + i * (110 + 150 + /*this number shows the space between the cards ->*/100);
        colorsRecs[i].y = GetScreenHeight() / 2 - colorsRecs[i].height / 2;
    }

    Rectangle gameMenu[3];


    Rectangle BaseCards = { 225, 350, 90, 105 };
    Vector2 mousePoint;
    bool zero = 0, one = 0, two = 0, three = 0;
    bool menuZero = 0, menuOne = 0, menuTwo = 0;
    bool ftAr[6];
    for (int i = 0; i < sizeof ftAr / sizeof ftAr[0]; i++)
    {
        ftAr[i] = rand() % 2;
    }
    SetTargetFPS(240);

    while (!WindowShouldClose())
    {
        mousePoint = GetMousePosition();
        srand(time(NULL));
        BeginDrawing();


        for (int i = 0; i < 3; i++)
        {
            switch (i)
            {
            case 0:
                gameMenu[i].width = 110 + 300;
                gameMenu[i].height = 145 + 25;
                gameMenu[i].x = 700/*this number shows the space between the cards ->*/;
                gameMenu[i].y = gameMenu[i].height * 1.1;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Play", (gameMenu[i].width / 5) + gameMenu[i].x/*this number pull back the text to appropriate align ->*/ -55, 175, 175, BLACK);
                break;
            case 1:
                gameMenu[i].width = 110 + 225;
                gameMenu[i].height = 145;
                gameMenu[i].x = gameMenu[i - 1].x + 40;
                gameMenu[i].y = gameMenu[i - 1].height * 3;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Quit", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ -40, 510, 150, BLACK);
                break;
            case 2:
                gameMenu[i].width = 650;
                gameMenu[i].height = 165;
                gameMenu[i].x = gameMenu[i - 1].x - 150;
                gameMenu[i].y = gameMenu[i - 1].height * 2.45;

                DrawRectangleRec(gameMenu[i], LIGHTGRAY);
                DrawText("Settings", (gameMenu[i].width / 5) + gameMenu[i].x /*this number pull back the text to appropriate align ->*/ - 122.5, 360, 150, BLACK);
            }


            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[0]) && checker)
            {
               
                menuZero = true;
                menuOne = 0;
                menuTwo = 0;

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[1])&& checker)
            {

                menuOne = true;
                menuZero = 0;
                menuTwo = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, gameMenu[2])&& checker)
            {
                menuTwo = true;
                menuOne = 0;
                menuZero = 0;
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
        





            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[0]))
            {

                zero = true;
                one = 0, two = 0, three = 0;


            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[1]))
            {

                one = true;
                zero = 0, two = 0, three = 0;

            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[2]))
            {

                two = true;
                one = 0, zero = 0, three = 0;
            }
            else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[3]))
            {

                three = true;
                one = 0, two = 0, zero = 0;

            }


            if (zero)
            {

                for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
                {
                    colorsRecs[i].x = -100;
                    colorsRecs[i].y = -100;
                    colorsRecs[i].height = 0;
                    colorsRecs[i].width = 0;
                }

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 394, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 604, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 814, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 400, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 820, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 665, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 657.5, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 657.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 665, 410, 50, BLACK);
                }
                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 874.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 867, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 867, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 874.5, 410, 50, BLACK);
                }
                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1084.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1077, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 1077, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 1084.5, 410, 50, BLACK);
                }
            }
            else if (one)
            {
                for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
                {
                    colorsRecs[i].x = -100;
                    colorsRecs[i].y = -100;
                    colorsRecs[i].height = 0;
                    colorsRecs[i].width = 0;
                }

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

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

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 587.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 580, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 580, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 587.5, 410, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 787.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 780, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 780, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 787.5, 410, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 987.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 980, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 980, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 987.5, 410, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1187.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1180, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1180, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1187.5, 410, 50, BLACK);
                }
            }
            else if (two)
            {
                for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
                {
                    colorsRecs[i].x = -100;
                    colorsRecs[i].y = -100;
                    colorsRecs[i].height = 0;
                    colorsRecs[i].width = 0;
                }

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

                DrawRectangle((int)BaseCards.x + 219, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 419, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 619, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 819, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);
                DrawRectangle((int)BaseCards.x + 1019, (int)BaseCards.y - 5, (int)BaseCards.width + 12.5, (int)BaseCards.height + 12.5, BLACK);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);

                DrawRectangle((int)BaseCards.x + 225, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 425, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 625, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 825, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);
                DrawRectangle((int)BaseCards.x + 1025, (int)BaseCards.y + 55, (int)BaseCards.width, (int)BaseCards.height - 102.5, WHITE);

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 492.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 485, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 485, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 492.5, 410, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 692.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 685, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 685, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 692.5, 410, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 892.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 885, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 885, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 892.5, 410, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1092.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1085, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 1085, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 1092.5, 410, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1292.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1285, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1285, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1292.5, 410, 50, BLACK);
                }
            }
            else if (three)
            {
                for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
                {
                    colorsRecs[i].x = -100;
                    colorsRecs[i].y = -100;
                    colorsRecs[i].height = 0;
                    colorsRecs[i].width = 0;
                }

                DrawRectangle((int)BaseCards.x + 100, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);
                DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y - 400, (int)BaseCards.width - 85, (int)BaseCards.height + 1200, BLACK);

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

                if (ftAr[0])
                {
                    DrawText(to_string(ftAr[0]).c_str(), 397.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 390, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[0]).c_str(), 390, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[0]).c_str(), 397.5, 410, 50, BLACK);
                }

                if (ftAr[1])
                {
                    DrawText(to_string(ftAr[1]).c_str(), 597.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 590, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[1]).c_str(), 590, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[1]).c_str(), 597.5, 410, 50, BLACK);
                }

                if (ftAr[2])
                {
                    DrawText(to_string(ftAr[2]).c_str(), 797.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 790, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[2]).c_str(), 790, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[2]).c_str(), 797.5, 410, 50, BLACK);
                }

                if (ftAr[3])
                {
                    DrawText(to_string(ftAr[3]).c_str(), 997.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 990, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[3]).c_str(), 990, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[3]).c_str(), 997.5, 410, 50, BLACK);
                }

                if (ftAr[4])
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1197.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1190, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[4]).c_str(), 1190, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[4]).c_str(), 1197.5, 410, 50, BLACK);
                }

                if (ftAr[5])
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1397.5, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1390, 410, 50, BLACK);
                }
                else
                {
                    DrawText(to_string(ftAr[5]).c_str(), 1390, 355, 50, BLACK);
                    DrawText(to_string(!ftAr[5]).c_str(), 1397.5, 410, 50, BLACK);
                }
            }
        }
        else if (menuTwo)
        {

        }
        else if (menuOne)
        {
           
            exit(0);
        }
        ClearBackground(LIGHTGRAY);


        EndDrawing();
        system("CLS");
    }
    CloseWindow();


    return 0;
    }