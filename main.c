
#include <stdio.h>

int main()
{
    int x,y;
    printf("X and Y");
    scanf("%d %d",x,y);
    if(x==0 || y==0)
    {
        printf("No quarter");
    }
    else 
    {
        if(x>0)
        {
            if(y>0)
                printf("1st Quarter")
            else
                printf("4th Quarter")
        }
        else
        {
            if(y>0)
                printf("2nd Quarter")
            else
                printf("3rd Quarter")
        }
    }

    return 0;
}
