#ifndef RECTANGLE
#define RECTANGLE

#include "point.h"


typedef struct rectangle{
	Point *a,*b;
}Rectangle;

void printRectPoint(Rectangle* r);
void setPointA(Rectangle* r, Point* p);
void setPointB(Rectangle* r, Point* p);
int getArea(Rectangle* r);
int getPerimeter(Rectangle* r);
int isSquare(Rectangle* r);
Rectangle* getBiggestRect(Rectangle* rects,int size);

#endif
