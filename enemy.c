#include "enemy.h"
#include "math.h"

void DrawEnemy(Vector2 enemy, Vector2 direction) {
    const float visionAngle = 60.0f;
    const float visionRange = 300.0f;
    const int visionSegments = 30;

    float enemyAngle = atan2f(
        direction.y,
        direction.x
    );

    Vector2 visionCone[visionSegments + 2];

    visionCone[0] = enemy;

    for (int i = 0; i <= visionSegments; i++) {
        float angle = enemyAngle 
            - (visionAngle * DEG2RAD) / 2
            + (visionAngle * DEG2RAD) * i / visionSegments;
        
        visionCone[i + 1] = (Vector2) {
            enemy.x + cosf(angle) * visionRange,
            enemy.y + sinf(angle) * visionRange
        };
    }

    DrawTriangleFan(
        visionCone,
        visionSegments + 2,
        YELLOW
    );

    DrawCircleV(enemy, 20, BLUE);
}