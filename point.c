#include <stdio.h>
#include <stdlib.h>
#include "point.h"

void printPoint(Point *p){
   printf("x : %d y : %d\n",p->x,p->y);
}

int getWidth(Point* p1,Point* p2){
   return abs(p1->x - p2->x);
}

int getHeight(Point* p1,Point* p2){
   return abs(p1->y - p2->y);
}
