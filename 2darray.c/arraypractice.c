#include <stdio.h>

int main()
{

    int num1[5]={1,3,4,5,3};
    int num2[3]={4,3,2};
    int i;

    printf(" new array output ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d,",num1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d,",num2[i]);
    }

    printf("\n");
    return 0;
    
    
}