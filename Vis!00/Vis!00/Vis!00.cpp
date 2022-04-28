#include "raylib.h"


int main(void)
{
    const int screenWidth = 1400;
    const int screenHeight = 750;

    InitWindow(screenWidth, screenHeight, "Vis!00");

    Rectangle colorsRecs;   

    
        colorsRecs.x = 100.0f;
        colorsRecs.y = 200.0f;
        colorsRecs.width = 160.0f;
        colorsRecs.height = 215.0f;
    

    Vector2 mousePoint = { 0.0f, 0.0f };

    SetTargetFPS(60); 

 
    while (!WindowShouldClose()) 
    {
        
        BeginDrawing();

        ClearBackground(LIGHTGRAY);
        DrawRectangle((int)colorsRecs.x, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        DrawRectangle((int)colorsRecs.x + 50 + 50 + 50 + 50 + 50, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        DrawRectangle((int)colorsRecs.x + 100 + 100 + 100 + 100 + 100, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        DrawRectangle((int)colorsRecs.x + 150 + 150 + 150 + 150 + 150, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);
        DrawRectangle((int)colorsRecs.x + 200 + 200 + 200 + 200 + 200, (int)colorsRecs.y, (int)colorsRecs.width, (int)colorsRecs.height, DARKGRAY);

        EndDrawing();
    }
    CloseWindow();
    

    return 0;
}