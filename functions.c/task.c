#include <stdio.h>

int sub();
int mul();
int div();

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

int div()
{
    int x=10;
    int y=2;

    printf("Div = %d",x/y);
}

int main()
{
    sub();
    mul();
    div();

    return 0;
}