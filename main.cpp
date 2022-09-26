#include <stdio.h>
#include<cmath>

using namespace std;

int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("%d",x+y+z-max(max(x,y),z)-min(min(x,y),z));

    return 0;
}
