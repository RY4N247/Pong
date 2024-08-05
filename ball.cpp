#include "ball.h"

Ball::Ball(Vector2 center, float radius, Color color, float Xspeed, float Yspeed, int Player1Score, int Player2Score)
{
    this->center = center;
    this->radius = radius;
    this->color = color;
    this->Xspeed = Xspeed;
    this->Yspeed = Yspeed;
    this->Player1Score = 0;
    this->Player2Score = 0;
}

void Ball::draw()
{
    DrawCircleV(center, radius, color);
}

void Ball::move()
{
    center.x += Xspeed;
    center.y += Yspeed;
    if (center.y <= 0 || center.y >= 1080)
    {
        Yspeed = -Yspeed;
    }

    if (center.x >= 1920)
    {
        Player1Score += 1;
        setCenter({1920 / 2, 1080 / 2}); // screen center
    }
    else if (center.x <= 0)
    {
        Player2Score += 1;
        setCenter({1920 / 2, 1080 / 2});
    }
    
}

void Ball::setCenter(Vector2 center)
{
    this->center = center;
}

Vector2 Ball::getBallPosition()
{
    return center;
}

int Ball::getPlayer1Score()
{
    return Player1Score;
}

int Ball::getPlayer2Score()
{
    return Player2Score;
}

float Ball::getRadius()
{
    return radius;
}

float Ball::getXspeed(){
    return Xspeed;
}

float Ball::getYspeed()
{
    return Yspeed;
}

void Ball::setBallPosition(Vector2 center)
{
    this->center = center;
}

void Ball::setXspeed(float Xspeed)
{
    this->Xspeed = Xspeed;
}

void Ball::setYspeed(float Yspeed)
{
    this->Yspeed = Yspeed;
}
