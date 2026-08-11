#include "player.h"

void UpdatePlayer(Vector2 *player) {
    if (IsKeyDown(KEY_RIGHT))
        player->x += 5;

    if (IsKeyDown(KEY_LEFT))
        player->x -= 5;

    if (IsKeyDown(KEY_DOWN))
        player->y += 5;
    
    if (IsKeyDown(KEY_UP))
        player->y -= 5;
}

void DrawPlayer(Vector2 player) {
    DrawCircleV(player, 20, RED);
}