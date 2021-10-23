#include <stdio.h>
#include <math.h>

int main(){
    int num,last;
    printf("Enter a number ");
    scanf("%d",&num);

    last=num%10;
    num/=10;
    last*=2;
    num-=last;

    if (num==0)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==-7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else
    {
        
        last=num%10;
        num/=10;
        last*=2;
        num-=last;
    }

    if (num==0)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==-7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else
    {
        
        last=num%10;
        num/=10;
        last*=2;
        num-=last;
    }
    if (num==0)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==-7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else
    {
        
        last=num%10;
        num/=10;
        last*=2;
        num-=last;
    }
    if (num==0)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==-7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else
    {
        
        last=num%10;
        num/=10;
        last*=2;
        num-=last;
    }
    if (num==0)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else if (num==-7)
    {
        printf("It is divisible by 7");
        return 0;
    }
    else
    {
        printf("Not divisible by 7");
        last=num%10;
        num/=10;
        last*=2;
        num-=last;
    }
    
    //printf("%d",num);

}