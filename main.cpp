#include <stdlib.h>
#include "raylib.h"
#include "raymath.h"

int main() {
    _putenv_s("GALLIUM_DRIVER", "llvmpipe");

//A partir daqui o código pode ser alterado

    const int width = 900;
    const int height = 900;
    InitWindow(width, height, "Teste raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()){

        Vector2 bola = {450, 450};


        BeginDrawing();
        ClearBackground(BLACK);
        DrawCircleV((bola), 20, RED);

        DrawText(TextFormat("Raylib funcionando -Paul Mccartney"), 10, 10, 45, WHITE);
        DrawFPS(10, 60);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}