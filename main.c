#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "RayLib Simple Game");

    Texture2D texture = LoadTexture("assets/raylib_logo.png");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);

            DrawTexture(texture, screenWidth/2 - texture.width/2, screenHeight/2 - texture.height/2, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

