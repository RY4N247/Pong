#ifndef RACKET_H
#define RACKET_H

#include "raylib.h"

class Racket{
    private:
        Vector2 position;
        Vector2 WidthHeight;
        Color color;
        float speed;

    public:
        Racket(Vector2 position, Vector2 WidthHeight, Color color, float speed);
        void moveUp();
        void moveDown();
        void draw();
        int getYPosition();
        int getXPosition();
        float getWidth();
        float getHeight();
        
};


#endif