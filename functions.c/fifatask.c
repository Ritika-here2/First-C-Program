#include <stdio.h>

struct Player
{
    int id;
    char name[20];
    char country[30];
    
};

 int main()
{
   struct Player p[5];
   
    for (int i = 0; i < 5; i++)
{
    printf("Please enter player's id = \n");
    scanf("%d",&p[i].id);

   printf("Please enter player's name = \n");
    scanf("%s",&p[i].name);

    printf("Please enter player's country = \n");
    scanf("%s",&p[i].country);

}
 
   printf("\n*************Player details***************\n");
   
   for (int i = 0; i < 5; i++)
   {
   
   printf(" ID = %d\n", p[i].id);
   printf(" NAME = %s\n", p[i].name);
   printf(" COUNTRY = %s\n", p[i].country);

   }

   return 0;
}

