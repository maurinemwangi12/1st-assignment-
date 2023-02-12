#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void main()

{
    float a,b,c,x1,x2,d;
    printf("to find the roots of a quadratic equation/n");
    printf("enter values of a:");
    scanf("%f",&a);
    printf("enter values of b:");
    scanf("%f",&b);
    printf("enter value of c:");
    scanf("%f",&c);
    d=b*b-(4*a*c);

    if(d==0)
    {
     printf("the roots are real and equal/n");
     x1=-b/(2*a);
     x2=-b/(2*a);
     printf("root 1 is %f/n",x1);
     printf("the root 2 is %f)/n",x2);

    }
    else if (d>0)
    {
        printf("the roots are real and different/n");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("root 1 is%f/n",x1);
        printf("root 2 is %f",x2);

    }
    else
    {
        printf("roots are real and imaginary/n");

    }
    return 0;





}
