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
   
    srand(time(0));
    InitWindow(screenWidth, screenHeight, "Vis!00");

    Rectangle colorsRecs[4];  
    for (int i = 0; i < sizeof(colorsRecs)/sizeof(colorsRecs[0]); i++)
    {
        colorsRecs[i].x = 225 + i * (110 + 150 + /*this number shows the space between the cards ->*/100);
        colorsRecs[i].y = 350;
        colorsRecs[i].height = 145 + 250;
        colorsRecs[i].width = 110 + 150;
    }
    Rectangle BaseCards = {225, 350, 150, 150 };
    Vector2 mousePoint;
    bool zero = 0, one = 0, two = 0, three = 0;
    bool ftAr[6];
    for (int i = 0; i < sizeof ftAr / sizeof ftAr[0]; i++)
    {
        ftAr[i] = rand() % 2;
    }
    SetTargetFPS(60); 

    while (!WindowShouldClose()) 
    {
        mousePoint = GetMousePosition();
        srand(time(NULL));
        BeginDrawing();
        
        for (int i = 0; i < sizeof(colorsRecs) / sizeof(colorsRecs[0]); i++)
        {
            
            string txt = to_string(3 + i);
            switch (i)
            {
            case 0:
            {
                DrawRectangleRec(colorsRecs[i], DARKBLUE);
                DrawText(txt.c_str(), (colorsRecs[i].width  / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/50, 350 + 100, 150, BLACK);
                break;
            }
            case 1:
            {
                DrawRectangleRec(colorsRecs[i], PINK);
                DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/50, 350 + 100, 150, BLACK);
                break;
            }
            case 2:
            {
                DrawRectangleRec(colorsRecs[i], RED);
                DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/50, 350 + 100, 150, BLACK);
                break;
            }
            case 3:
            {
                DrawRectangleRec(colorsRecs[i], ORANGE);
                DrawText(txt.c_str(), (colorsRecs[i].width / 2) + colorsRecs[i].x - /*this number pull back the text to appropriate align ->*/50, 350 + 100, 150, BLACK);
                break;
            }

            }
            
        }
       
       
        
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(mousePoint, colorsRecs[0]))
        {
            
            zero = true;
            one = 0, two = 0 , three = 0;
                
            
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
            DrawRectangle((int)BaseCards.x + 360, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 360, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 610, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 860, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 860, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);

            DrawText(to_string(ftAr[0]).c_str(), 625, 353, 75, BLACK);
            DrawText(to_string(!ftAr[0]).c_str(), 630, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[1]).c_str(), 875, 353, 75, BLACK);
            DrawText(to_string(!ftAr[1]).c_str(), 880.5, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[2]).c_str(), 1130, 353, 75, BLACK);
            DrawText(to_string(!ftAr[2]).c_str(), 1120, 427.5, 75, BLACK);
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
            DrawRectangle((int)BaseCards.x + 240, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 240, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 490, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 490, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 740, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 740, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 990, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 990, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);

            DrawText(to_string(ftAr[0]).c_str(), 500, 353, 75, BLACK);
            DrawText(to_string(!ftAr[0]).c_str(), 510, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[1]).c_str(), 761, 353, 75, BLACK);
            DrawText(to_string(!ftAr[1]).c_str(), 753, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[2]).c_str(), 1010, 353, 75, BLACK);
            DrawText(to_string(!ftAr[2]).c_str(), 1001, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[3]).c_str(), 1254, 353, 75, BLACK);
            DrawText(to_string(!ftAr[3]).c_str(), 1265, 427.5, 75, BLACK);
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
            DrawRectangle((int)BaseCards.x + 85, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 85, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 335, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 335, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 585, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 585, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 835, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 835, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 1085, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 1085, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);

            DrawText(to_string(ftAr[0]).c_str(), 350, 353, 75, BLACK);
            DrawText(to_string(!ftAr[0]).c_str(), 357.5, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[1]).c_str(), 604, 353, 75, BLACK);
            DrawText(to_string(!ftAr[1]).c_str(), 597, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[2]).c_str(), 856.5, 353, 75, BLACK);
            DrawText(to_string(!ftAr[2]).c_str(), 848.9, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[3]).c_str(), 1098, 353, 75, BLACK);
            DrawText(to_string(!ftAr[3]).c_str(), 1106, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[4]).c_str(), 1355, 353, 75, BLACK);
            DrawText(to_string(!ftAr[4]).c_str(), 1349, 427.5, 75, BLACK);
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
            DrawRectangle((int)BaseCards.x, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 250, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 250, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 500, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 500, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 750, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 750, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 1000, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 1000, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);
            DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y, (int)BaseCards.width, (int)BaseCards.height, DARKGRAY);
            DrawRectangle((int)BaseCards.x + 1250, (int)BaseCards.y + 72, (int)BaseCards.width, (int)BaseCards.height - 142.5, WHITE);

            DrawText(to_string(ftAr[0]).c_str(), 266, 353, 75, BLACK);
            DrawText(to_string(!ftAr[0]).c_str(), 271.5, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[1]).c_str(), 524.5, 353, 75, BLACK);
            DrawText(to_string(!ftAr[1]).c_str(), 512, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[2]).c_str(), 767.5, 353, 75, BLACK);
            DrawText(to_string(!ftAr[2]).c_str(), 761.5, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[3]).c_str(), 1010.5, 353, 75, BLACK);
            DrawText(to_string(!ftAr[3]).c_str(), 1022.5, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[4]).c_str(), 1270, 353, 75, BLACK);
            DrawText(to_string(!ftAr[4]).c_str(), 1264, 427.5, 75, BLACK);
            DrawText(to_string(ftAr[5]).c_str(), 1513.5, 353, 75, BLACK);
            DrawText(to_string(!ftAr[5]).c_str(), 1525, 427.5, 75, BLACK);
        }
        ClearBackground(LIGHTGRAY);
        

        EndDrawing();
        system("CLS");
    }
    CloseWindow();
    

    return 0;
}