#include <stdio.h>
#include "point.h"
#include "rectangle.h"

int main(void){

   Point p1, p2;
   Rectangle r;

   printf("Rectangle's Point :\n");
   
   printf("A: ");
   scanf("%d %d",&(p1.x),&(p1.y));
   setPointA(&r,&p1);

   printf("B: ");
   scanf("%d %d",&(p2.x),&(p2.y));
   setPointB(&r,&p2);

   printf("Rectangle's Area : %d\n",getArea(&r));
   printf("Rectangle's Perimeter : %d\n",getPerimeter(&r));
   printf("Rectangle is Square? ");

   if(isSquare(&r) == 1) printf("True\n");
   else printf("False\n");
   
   Point p[6];
   Rectangle rect[3];
   
   for(int i = 0; i<3 ;i++){
       printf("enter rect %d's Point A : ",i+1);
	   scanf("%d %d",&(p[2*i].x),&(p[2*i].y));
	   setPointA(&rect[i],&p[2*i]);

	   printf("enter rect %d's Point B : ",i+1);
	   scanf("%d %d",&(p[2*i+1].x),&(p[2*i+1].y));
	   setPointB(&rect[i],&p[2*i+1]);
	   }
   
   printf("Biggest?\n");
   printRectPoint(getBiggestRect(rect,3));

   return 0;
}
