#include<stdio.h>

int main()
{
    int num[10]={1,2,3,4,5,7,6,8,9,10};
    int min=num[1];
    int max=num[30];

    for (int i = 0; i < 10; i++)
    {
        if (num[i]<min){
            min = num[i];
        }

        if (num[i]>max){
            max = num[i];
        }


    }

    printf("min number is = %d\n", min);
    printf("max number is = %d\n", max);

    return 0;
}