#include <stdio.h>
#include <math.h>

int main(){
    float calorie,fatg,calfromfat;
    int per;

    printf("Enter Calorie in food ");
    scanf("%f",&calorie);
    printf("Enter fat in food ");
    scanf("%f",&fatg);

    if (calorie<=0)
    {
        if(fatg<=0)
        {
            printf("Enter values greater than 0");
        }
    }
    else
    {
        calfromfat=fatg*9;
        if (calfromfat>calorie)
        {
            printf("Enter correct Calories in the food");
        }
        else
        {
            per=(calfromfat/calorie)*100;
            if (per<30)
            {
                printf("Food is low on fat");
            }
            else
            {
                printf("Food is high on fat");
            }
        }
    }
}