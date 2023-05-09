#include <stdio.h>


int main() {
    int n;
    scanf("%i",&n);
    int arr[100000]={(0)};
    int zero=0;
    for(int i=0;i<n;++i)
    {
        scanf("%i",&arr[i]);
    }

    for (int i=n-1;i>=0;i--)
    {
        if(arr[i]==0)
        {
            for(int j=n-1;j>i;j--)
            {
                arr[j]=arr[j-1];
            }
        }
    }

    for(int i=0;i<n;++i)
    {
        printf("%i ",arr[i]);
    }
}
