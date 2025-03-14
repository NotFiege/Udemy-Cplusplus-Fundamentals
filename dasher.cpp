#include "raylib.h"
#include <iostream>

int main ()
{
    // Window Dimensions

    const int windowWidth = 512;
    const int windowHeight = 380;

    // Initialize Window
    InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        // Start Drawing

        BeginDrawing();
        ClearBackground(WHITE);

        //Stop Drawing

        EndDrawing();
    }
    CloseWindow();

}
