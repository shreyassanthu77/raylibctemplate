#include "../raylib/raylib.h"
#include "config.c"
#include "game.c"

int main()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE);
    init();
    while (!WindowShouldClose())
    {
        update();
        BeginDrawing();
        ClearBackground(RAYWHITE);
        draw();
        EndDrawing();
    }

    destroy();
    CloseWindow();
    return 0;
}