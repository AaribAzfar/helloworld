#include <stdio.h>
#include <math.h>

int main(){
    int side1,side2,side3;

    printf("Enter Side 1 ");
    scanf("%d",&side1);
    printf("Enter Side 2 ");
    scanf("%d",&side2);
    printf("Enter Side 3 ");
    scanf("%d",&side3);

    if ((side1==side2))
    {
        if (side1==side3)
        {
            if (side2==side3)
            {
                printf("Equilateral triangle");
            }
        }
        else
        {
            printf("Isosceles triangle");
        }
    }
    else if (side1==side3)
    {
        printf("Isosceles triangle");
    }
    else if (side2==side3)
    {
        printf("Isosceles triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }
}