#include "raylib.h"

int main(void)
{
    InitWindow(800, 450, "Vis100 - basic window");// init the window

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);//change background
        DrawText("Congrats! We created our first window in Raylib!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow(); //Destroy a Window from rendering

    return 0;
}