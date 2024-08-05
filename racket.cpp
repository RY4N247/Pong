#include "racket.h"

Racket::Racket(Vector2 position, Vector2 WidthHeight, Color color, float speed){
	this->position = position;
	this->WidthHeight = WidthHeight;
	this->color = color;
	this->speed = speed;
}

void Racket::moveDown(){
	if (position.y < 946){
		position.y += speed;
	}
}

void Racket::moveUp(){
	if(position.y > 0 ){
		position.y -= speed;
	}
}

void Racket::draw(){
	DrawRectangleV(position, WidthHeight, color);
}

int Racket::getYPosition(){
    return position.y;
}

int Racket::getXPosition(){
    return position.x;
}
float Racket::getWidth(){
    return WidthHeight.x;
}

float Racket::getHeight(){
    return WidthHeight.y;
}

Rectangle Racket::getRectangle(){
	return Rectangle{position.x, position.y, WidthHeight.x, WidthHeight.y}; 
}
