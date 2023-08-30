#include <stdio.h>

int main()
{
    int Length,Width,Area,Perimeter;

    printf("Input Length and Wide of a Rectengular : ");

    scanf("%d%d",&Length,&Width);

    Area = Length*Width;

    Perimeter = 2*(Length+Width);

    printf("Area of the Rectengular %d\n",Area);

    printf("Perimeter of Rectengular %d",Perimeter);

    return 0;
}
