#include <stdio.h>
int main()
{
    //initialization of variable
    int div,mul;
    int x=10;
    int y=5;

    //formula making
    div=x/y;
    mul=(x*y)+10;

    //printing the output
    printf("x : 10| y : 5 | x*=y : %d | x is now : %d\n", x*=y, x);
    printf("x : 10 | y : 5 | x/=y : %d | x is now : %d\n", div, div);
    printf("x : 10| y : 5 | x=y : %d | x is now : %d\n", x%=y, x);
    printf("x : 10| y : 5 | x*=y+10 : %d | x is now : %d\n", mul, mul);
    
    //ending the code
    return 0;
}