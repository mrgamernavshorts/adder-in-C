#include <stdio.h>

int main(){
    printf("adder 1000\n");
    printf("enter the first number : ");
    int num1;
    int num2;
    int ex;
    scanf("%d",&num1);
    printf("\n");
    printf("enter the second number : ");
    scanf("%d",&num2);
    int result = num1 + num2;
    printf("the answer is : %d",result);
    printf("\nexit ?: ");
    scanf("%d",&ex);
    return 0;
}