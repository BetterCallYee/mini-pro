#include<stdio.h>
void greet(){
    printf("Welcome to ");
}
int plus(int x,int y){
    int sum=x+y;
    return sum;
}
int minus(int x,int y){
    int sum=x-y;
    return sum;
}
int divided(int x,int y){
    int sum=x/y;
    return sum;
}
int multiply(int x,int y){
    int sum=x*y;
    return sum;
}

int main(){
    int result,num1,num2,selection;
    greet();
    printf("Enter number of selection(1=Plus 2=Minus 3=Divided 4=Multiply)");
    scanf("%d",&selection);
    printf("Enter number 1");
    scanf("%d",&num1);
    printf("Enter number 2");
    scanf("%d",&num2);

    if(selection==1){
        printf("%d+%d=%d",num1,num2,plus(num1,num2));
    }else if(selection==2){
        printf("%d-%d=%d",num1,num2,minus(num1,num2));
    }else if(selection==3){
        printf("%d/%d=%d",num1,num2,divided(num1,num2));
    }else if(selection==4){
        printf("%d*%d=%d",num1,num2,multiply(num1,num2));
    }else
    printf("Error Please try again");
}