#include <stdio.h>

int main()
{
    float Fahrenhiet,Celsius,Equation;
    printf("In Fahrenhiet :");
    scanf("%f",&Fahrenhiet);
    Equation = (((Fahrenhiet-32)*5)/9);

    printf("Celsius is %f",Equation);

    return 0;
}
