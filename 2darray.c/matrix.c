#include<stdio.h>

int main()
{
    int num[10]={1,2,3,4,5,6,7,8,9,10};

     printf("Even numbers in the array:\n");

      for (int i = 0; i < 10; i++) 
      if (num[i] % 2 == 0) 
      {
            printf("%d ", num[i]);
        }

         printf("\n");
   return 0;
}