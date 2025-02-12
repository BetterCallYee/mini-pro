#include <stdio.h>
int main(){
    int num1,num2,result;
    printf("Enter number1 :");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);

    result=num1-num2;

    if(result>0){
        printf("POSITIVE NUMBER");
    }else if(result<0){
        printf("NEGATIVE NUMBER");
    }else{
        printf("ZERO NUMBER");
    }
    return 0;
}