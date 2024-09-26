#include <src/raylib.h>

string windowname = "r-tr-t--r0t-r-Untitled Game-r-t0r--t-rt-r";
bool debug = true;
int main(void)
{
    if (debug) { windowname += " | DEBUG MODE"; }
    InitWindow(800, 450, windowname);

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
