#include "common.h"

int main(void)
{
    // Initialize raylib
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "RG35XX Square Demo");
    SetTargetFPS(60);
    
    // Main game loop
    while (!WindowShouldClose())
    {
        // Update game state
        // (Your game logic here)
        
        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        // (Your drawing code here)
        
        EndDrawing();
    }
    
    // Clean up
    CloseWindow();
    
    return 0;
}
