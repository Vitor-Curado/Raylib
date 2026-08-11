#include "raylib.h"
#include "enemy.h"
#include "player.h"

int main(void)
{
    const int screenWidth = 2500;
    const int screenHeight = 1800;

    InitWindow(
        screenWidth, 
        screenHeight, 
        "My First Raylib Game"
    );

    SetTargetFPS(240);

    Vector2 player = {
        screenWidth / 2,
        screenHeight / 2
    };

    Vector2 enemy = {
        screenWidth / 4,
        screenHeight / 4
    };

    Vector2 enemyDirection = {
        1,
        0
    };

    while (!WindowShouldClose())
    {
        // Update
        UpdatePlayer(&player);

        // Draw
        BeginDrawing();

            ClearBackground(BLACK);

            DrawPlayer(player);
            DrawEnemy(enemy, enemyDirection);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}