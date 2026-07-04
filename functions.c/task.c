#include <stdio.h>

int sub();
int mul();
float div();

int sub()
{
     int c=6;
    int d=2;

    printf("Sub = %d\n",c-d);
}

int mul()
{
    int a=2;
    int b=3;

    printf("Mul = %d\n",a*b);

}

float div()
{
   float x=10;
   float y=2;

    printf("Div = %.2f",x/y);
}

int main()
{
    sub();
    mul();
    div();

    return 0;
}