#include "raylib.h"
#include <iostream>
using namespace std;

int main(void)
{
    const int screenWidth = 1800;
    const int screenHeight = 950;
    int a;
    cin >> a;
    InitWindow(screenWidth, screenHeight, "Vis!00");

    Rectangle colorsRecs;   

    Vector2 mousePoint = { 0.0f, 0.0f };

    colorsRecs.y = 350.0f;
    colorsRecs.height = 145.0f;
    colorsRecs.width = 110.0f;
    colorsRecs.x = 225.0f;

    SetTargetFPS(60); 

 
    while (!WindowShouldClose()) 
    {
        
        BeginDrawing();
        if (a == 3)
        {
            DrawRectangle((int)colorsRecs.x + 360, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 360 + 50 + 50 + 50 + 50 + 50, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 360 + 100 + 100 + 100 + 100 + 100, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        }
        else if (a == 4)
        {
            DrawRectangle((int)colorsRecs.x + 240, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 240 + 50 + 50 + 50 + 50 + 50, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 240 + 100 + 100 + 100 + 100 + 100, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 240 + 150 + 150 + 150 + 150 + 150, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        }
        else if (a == 5)
        {
            DrawRectangle((int)colorsRecs.x + 85, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 85 + 50 + 50 + 50 + 50 + 50, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 85 + 100 + 100 + 100 + 100 + 100, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 85 + 150 + 150 + 150 + 150 + 150, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 85 + 200 + 200 + 200 + 200 + 200, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        }
        else if (a == 6)
        {
            DrawRectangle((int)colorsRecs.x, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 50 + 50 + 50 + 50 + 50, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 100 + 100 + 100 + 100 + 100, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 150 + 150 + 150 + 150 + 150, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 200 + 200 + 200 + 200 + 200, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
            DrawRectangle((int)colorsRecs.x + 250 + 250 + 250 + 250 + 250, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        }
        else
        {
            cout << "Error";
        }
        ClearBackground(LIGHTGRAY);
        

        EndDrawing();
    }
    CloseWindow();
    

    return 0;
}