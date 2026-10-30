#include<stdio.h>
int main()
{
    int a[2][2]={{10,20},{40,30}};
    int r,c ;
    printf("Displaiying the 2D array Elements \n");
    for (r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            printf("Val[%d][%d] -> %d\n",r,c,a[r][c]);
        }
    }
}