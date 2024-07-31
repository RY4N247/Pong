#include "raylib.h"
#include "racket.h"
#include "ball.h"
#include <iostream>
#include <unistd.h>

int main()
{

    const int ScreenWidth = 1920;
    const int ScreenHeight = 1080;


    InitWindow(ScreenWidth, ScreenHeight, "Pong Game");
    SetTargetFPS(120);

    float racketSpeed = 7.0f;
    Racket racket1({40, (ScreenHeight / 2 - 75)}, {20, 150}, WHITE, racketSpeed);
    Racket racket2({1880, (ScreenHeight / 2 - 75)}, {20, 150}, WHITE, racketSpeed);
    Ball ball({ScreenWidth / 2, ScreenHeight / 2}, 15, WHITE, 5, 5,0,0);

    while (!WindowShouldClose())
    {
        if (IsKeyDown(KEY_S))
        {
            racket1.moveDown();
        }
        else if (IsKeyDown(KEY_W))
        {
            racket1.moveUp();
        }

        if (IsKeyDown(KEY_K))
        {
            racket2.moveDown();
        }
        else if (IsKeyDown(KEY_I))
        {
            racket2.moveUp();
        }

        BeginDrawing();
        ClearBackground(BLUE);
        racket1.draw();
        racket2.draw();
        ball.draw();
        ball.move();



        // Debug lines
        // DrawLine(0, ScreenHeight / 2, ScreenWidth, ScreenHeight / 2, RED); // Horizontal center line
        // DrawLine(ScreenWidth / 2, 0, ScreenWidth / 2, ScreenHeight, RED); // Vertical center line
        EndDrawing();

        // std::cout << racket1.getYPosition() << std::endl;
        // std::cout << GetFPS() << std::endl;
        //std::cout << ball.getBallPosition().x << std::endl;
        //std::cout << ball.getBallPosition().x << std::endl;
        

    }

    CloseWindow();

    return 0;
}
