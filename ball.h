#ifndef BALL_H
#define BALL_H
#include "raylib.h"

class Ball{
    private:
        Vector2 center;
        float radius;
        Color color;
        float Xspeed;
        float Yspeed;
        int Player1Score;
        int Player2Score; 

    public:
        Ball(Vector2 center, float radius, Color color, float Xspeed, float Yspeed, int Player1Score, int Player2Score);
        void draw();
        void move();
        void setCenter(Vector2 center);
        Vector2 getBallPosition();
        int getPlayer1Score();
        int getPlayer2Score();

};

#endif