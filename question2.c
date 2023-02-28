#include<stdio.h>

//reverse function
int reverse(int num)
{
    int rev_num;

    //reverse code formula
    rev_num=(num%10)*100+((num/10)%10)*10+(num/100);
    printf("the reverse number is : %d\n", rev_num);
    return 0;
}
int main()
{    
    int num;
    //calling function
    printf("enter any three numbers: ");
    scanf("%d", &num);
    reverse(num);
}