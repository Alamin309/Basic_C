#include <stdio.h>

int main()
{
    int j,k,s;
    printf("Numbers you want to swap ");
    scanf("%d%d",&j,&k);
    s=j+k;//Suppose (s=13,j=5,k=8)
    j=s-j;//j=8
    k=s-j;//k=5
    printf("The swap numbers %d,%d" ,j,k);

    return 0;

}
