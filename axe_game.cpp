#include <iostream>
#include "raylib.h"

int main ()
{
    // Window Dimensions

    int width = 800;
    int length = 450;
    InitWindow(width, length, "Eddie's Window");

    // Circle Coordinates

    int circle_x = 200;
    int circle_y = 200;
    int circle_radius = 25;
    
    // Circle Edges

    int l_circle_x = circle_x - circle_radius;
    int r_circle_x = circle_x + circle_radius;
    int u_circle_y = circle_y - circle_radius;
    int b_circle_y = circle_y + circle_radius;

    // Axe Coordinates

    int axe_x = 400;
    int axe_y = 0;
    int axe_length = 50;

    // Axe Edges

    int l_axe_x = axe_x;
    int r_axe_x = axe_x + axe_length;
    int u_axe_y = axe_y;
    int b_axe_y = axe_y + axe_length;

    int direction = 10;

    SetTargetFPS(60);
    
    bool collision_with_axe = true;


    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if (collision_with_axe)
        {
            DrawText("Game Over", 400, 200, 20, RED);
        }

        else
        {
            // Game Logic Begins

            DrawCircle(circle_x, circle_y, circle_radius, BLUE);
            DrawRectangle(axe_x, axe_y, axe_length, axe_length, RED);

            if (IsKeyDown(KEY_D) && circle_x < width)
            {
                circle_x += 10;
            }

            if (IsKeyDown(KEY_A) && circle_x > 0)
            {
                circle_x -= 10;
            }
        
            // Moving The Axe

            axe_y += direction;
            if (axe_y > height || axe_y < 0)
            {
                direction = -direction;
            }

            // Game Logic Ends
        }

        EndDrawing();
    }

}
