#include<stdio.h>
struct point
{
    int x,y;
};
int main()
{
    struct point p1,p2,p3;
    p1.x=10;
    p1.y=20;
    p2.x=30;
    p2.y=40;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    printf("P3 values are : %d,%d\n",p3.x,p3.y);
}