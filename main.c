#include "raylib.h"

char windowname[] = "r-tr-t--r0t-r-Untitled Game-r-t0r--t-rt-r";
bool debug = true;
int main(void)
{
    if (debug) { InitWindow(800, 450,"UG - DEBUG MODE"); } 
    else {
    InitWindow(800, 450, windowname[0]);
    }

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Test TEXT HERE", 190, 200, 20, BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
