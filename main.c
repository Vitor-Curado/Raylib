#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "My First Raylib Game");

    SetTargetFPS(60);

    Vector2 player = {
        screenWidth / 2,
        screenHeight / 2
    };

    while (!WindowShouldClose())
    {
        // Update
        if (IsKeyDown(KEY_RIGHT))
            player.x += 5;

        if (IsKeyDown(KEY_LEFT))
            player.x -= 5;

        if (IsKeyDown(KEY_DOWN))
            player.y += 5;

        if (IsKeyDown(KEY_UP))
            player.y -= 5;


        // Draw
        BeginDrawing();

            ClearBackground(BLACK);

            DrawCircleV(player, 20, RED);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}