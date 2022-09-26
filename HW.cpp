#include<stdio.h>
#include<cmath>

int main()
{
    float x1,x2,y1,y2,r1,r2;

    printf("Center 1:");
    scanf("%f %f %f",&x1,&y1,&r1);
    printf("Center 2:");
    scanf("%f %f %f",&x2,&y2,&r2);

    if(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))>(r1+r2))
    {
        printf("No touch");
    }
    else
    {
        if(x1==x2 && y1==y2)
        {
            printf("Sovpadenie");
        }
        else if(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))==(r1+r2))
        {
            printf("1 touch");
        }
        else
        {
            printf("2 touch");
        }
    }
}