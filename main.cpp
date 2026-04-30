#include "raylib.h"
#include <iostream>

int main() {
    InitWindow(800, 450, "Raylib 6.0 Test");
    std::cout << "Raylib Version: " << RAYLIB_VERSION << std::endl;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("running raylib 6.0", 190, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}