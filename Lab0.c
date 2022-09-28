#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, r1, x2, y2, r2;
    double distance;
    printf("Введите координаты центра и радиус первой окружности: ");
    scanf("%i%i%i", &x1, &y1, &r1);
    printf("Введите координаты центра и радиус второй окружности: ");
    scanf("%i%i%i", &x2, &y2, &r2);
    distance = sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
    if(x1==x2 && y1==y2 && r1==r2)
        printf("Совпадают полностью");
    else if(distance<r1-r2 || distance<r2-r1)
        printf("Не пересекаются");
    else if(distance==r1+r2 || distance==r1-r2 || distance==r2-r1)
        printf("Пересекаются в 1 точке");
    else if(distance>r1+r2)
        printf("Не пересекаются");
    else if(distance<r1+r2)
        printf("Пересекаются в 2 точках");
}