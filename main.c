#include <stdio.h>
#include "point.h"
#include "rectangle.h"

int main(void){

   Point p1 = {1,3};
   Point p2 = {5,6};
   Rectangle r = {&p1,&p2};

   printf("Rectangle's Point :\nx : 1 y : 3\nx : 5 y : 6\n");
   printf("Rectangle's Area : %d\n",getArea(&r));
   printf("Rectangle's Perimeter : %d\n",getPerimeter(&r));
   printf("Rectangle is Square? ");

   if(isSquare(&r) == 1) printf("True\n");
   else printf("False\n");
   
   Point p[6];
   Rectangle rect[3];
   
   for(int i = 0; i<3 ;i++){
       scanf("%d %d",&(p[2*i].x),&(p[2*i].y));
	   scanf("%d %d",&(p[2*i+1].x),&(p[2*i+1].y));
	   setPointA(&rect[i],&p[2*i]);
	   setPointB(&rect[i],&p[2*i+1]);
	   }
   
   printf("Biggest? :");
   printRectPoint(getBiggestRect(&rect[3],3));

   return 0;
}
