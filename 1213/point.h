#ifndef POINT
#define POINT

typedef struct point{
	int x;
	int y;
}Point;

void printPoint(Point* p);
int getWidth(Point* p1, Point* p2);
int getHeight(Point* p1, Point* p2);

#endif
