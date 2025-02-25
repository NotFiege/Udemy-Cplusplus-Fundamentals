#include <iostream>
#include "raylib.h"

int main ()
{
    // Window Dimensions

    int width = 350;
    int length = 200;
    InitWindow(width, length, "Eddie's Window");

    // Circle Coordinates

    int circle_x = 175;
    int circle_y = 100;

    SetTargetFPS(60);
    
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game Logic Begins

        DrawCircle(circle_x, circle_y, 25, BLUE);

        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }

        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }

        // Game Logic Ends
        EndDrawing();
    }

}
