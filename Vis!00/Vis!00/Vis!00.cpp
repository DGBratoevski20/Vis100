#include "raylib.h"
#include <iostream>

using namespace std;

int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 950;
    int a=0;
    InitWindow(screenWidth, screenHeight, "Vis!00");

    Rectangle colorsRecs;   

    Vector2 mousePoint = { 0.0f, 0.0f };

    colorsRecs.x = 225.0f;
    colorsRecs.y = 350.0f;
    colorsRecs.height = 145.0f;
    colorsRecs.width = 110.0f;

    SetTargetFPS(60); 

    while (!WindowShouldClose()) 
    {
        BeginDrawing();
        
        DrawRectangle((int)colorsRecs.x - 95.0, (int)colorsRecs.y - 110, (int)colorsRecs.width + 150, (int)colorsRecs.height + 250, DARKBLUE);
        DrawText("3", 225, 350, 150, BLACK);
        DrawRectangle((int)colorsRecs.x + 330, (int)colorsRecs.y - 110, (int)colorsRecs.width + 150, (int)colorsRecs.height + 250, PINK);
        DrawText("4", 645, 350, 150, BLACK);
        DrawRectangle((int)colorsRecs.x + 740, (int)colorsRecs.y - 110, (int)colorsRecs.width + 150, (int)colorsRecs.height + 250, RED);
        DrawText("5", 1060, 350, 150, BLACK);
        DrawRectangle((int)colorsRecs.x + 1150, (int)colorsRecs.y - 110, (int)colorsRecs.width + 150, (int)colorsRecs.height + 250, ORANGE);
        DrawText("6", 1470, 350, 150, BLACK);
         

        if (a == 3)
        {
            DrawRectangle((int)colorsRecs.x + 360, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 360, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawRectangle((int)colorsRecs.x + 610, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 610, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawRectangle((int)colorsRecs.x + 860, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 860, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
           
                DrawText("0", 625, 353, 75, BLACK);
                DrawText("1", 630, 427.5, 75, BLACK);
                DrawText("0", 875, 353, 75, BLACK);
                DrawText("1", 880.5, 427.5, 75, BLACK);
                DrawText("1", 1130, 353, 75, BLACK);
                DrawText("0", 1120, 427.5, 75, BLACK);
                
            
        }
        else if (a == 4)
        {
            DrawRectangle((int)colorsRecs.x + 240, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 240, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 500, 353, 75, BLACK);
            DrawText("1", 510, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 490, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 490, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 761, 353, 75, BLACK);
            DrawText("0", 753, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 740, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 740, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 1010, 353, 75, BLACK);
            DrawText("0", 1001, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 990, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 990, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 1254, 353, 75, BLACK);
            DrawText("1", 1265, 427.5, 75, BLACK);
        }
        else if (a == 5)
        {
            DrawRectangle((int)colorsRecs.x + 85, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 85, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 350, 353, 75, BLACK);
            DrawText("1", 357.5, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 335, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 335, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 604, 353, 75, BLACK);
            DrawText("0", 597, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 585, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 585, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 856.5, 353, 75, BLACK);
            DrawText("0", 848.9, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 835, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 835, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 1098, 353, 75, BLACK);
            DrawText("1", 1106, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 1085, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 1085, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 1355, 353, 75, BLACK);
            DrawText("0", 1349, 427.5, 75, BLACK);
        }
        else if (a == 6)
        {
            DrawRectangle((int)colorsRecs.x, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 266, 353, 75, BLACK);
            DrawText("1", 271.5, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 250, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 250, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 524.5, 353, 75, BLACK);
            DrawText("0", 512, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 500, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 500, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 767.5, 353, 75, BLACK);
            DrawText("0", 761.5, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 750, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 750, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 1010.5, 353, 75, BLACK);
            DrawText("1", 1022.5, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 1000, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 1000, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("1", 1270, 353, 75, BLACK);
            DrawText("0", 1264, 427.5, 75, BLACK);
            DrawRectangle((int)colorsRecs.x + 1250, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 1250, (int)colorsRecs.y + 72, (int)colorsRecs.width, (int)colorsRecs.height - 142.5, WHITE);
            DrawText("0", 1513.5, 353, 75, BLACK);
            DrawText("1", 1525, 427.5, 75, BLACK);
        }
        ClearBackground(LIGHTGRAY);
        

        EndDrawing();
        system("CLS");
    }
    CloseWindow();
    

    return 0;
}