#include "raylib.h"

const char *windowname = "r-tr-t--r0t-r-Untitled Game-r-t0r--t-rt-r";
bool debug = true;

bool nottrolledyet = true;
int main(void)
{
    if (debug) { InitWindow(800, 450,"UG - DEBUG MODE"); } 
    else {
    InitWindow(800, 450, windowname);
    }
    

    while (!WindowShouldClose())
    {
        
        BeginDrawing();
            if (nottrolledyet) {
            ClearBackground(RAYWHITE);
            
            DrawText("Test TEXT HERE", 190, 200, 20, BLACK);
            sleep(2);
            ClearBackground(BLACK);
            nottrolledyet = false;

            }

            else { 
            DrawText("Test TEXT HEREEEEEEEEEEEE", 200, 200, 20, BLACK);
            
            }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
