#include <stdio.h>
#include "point.h"
#include "rectangle.h"

void printRectPoint(Rectangle *r){
  printPoint(r->a);
  printPoint(r->b);
}

void setPointA(Rectangle* r,Point* p){
   r->a = p;
}

void setPointB(Rectangle* r,Point* p){
   r->b = p;
}

int getArea(Rectangle* r){
   int w = getWidth(r->a,r->b);
   int h = getHeight(r->a,r->b);
   return w*h;
}

int getPerimeter(Rectangle* r){
   int w = getWidth(r->a,r->b);
   int h = getHeight(r->a,r->b);
   return 2*(w+h);
}

int isSquare(Rectangle* r){
   int w = getWidth(r->a,r->b);
   int h = getHeight(r->a,r->b);
   if(w == h) return 1;
   else return 0;
}

Rectangle* getBiggestRect(Rectangle* rect,int size){
   int k = getArea(&rect[0]);
   Rectangle* biggest;
   for(int i = 0; i<size ; i++){
      if( k < getArea(&rect[i]) ){
	      k = getArea(&rect[i]);
		  biggest = &rect[i];
	  }
   }
   return biggest;
}
