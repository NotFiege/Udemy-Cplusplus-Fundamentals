#include <iostream>
#include "raylib.h"

int main ()
{

    int width = 350;
    int length = 200;
    InitWindow(width, length, "Eddie's Window");

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }

}
