#include <stdio.h>

int main()
{
  int marks[5];
  char subject_1[10];
  char subject_2[10];
  char subject_3[10];
  char subject_4[10];
  char subject_5[10];
  int total=0;

  printf(" Please enter first subject: ");
  scanf("%s",&subject_1);

   printf(" Please enter second subject: ");
  scanf("%s",&subject_2);

   printf(" Please enter third subject: ");
  scanf("%s",&subject_3);

   printf(" Please enter fourth subject: ");
  scanf("%s",&subject_4);

   printf(" Please enter fifth subject: ");
  scanf("%s",&subject_5);

  printf("\nPlease enter marks: \n");
  for (int i=0;i<5;i++)
{
    scanf("%d",&marks[i]);
    total+=marks[i];
}

  printf("Percentage: %.2f",total/5);
 
  return 0;
}