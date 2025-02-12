#include <stdio.h>
int main(){
    int age,yb,cy;
    
    printf("Enter year of birth :");
    scanf("%d",&yb);

    printf("Enter current year :");
    scanf("%d",&cy);

    age=cy-yb;

    if(age<=20){
        printf("Your age is %d, You are young",age);
    }else{
        printf("Your age is %d, You are an adult",age);
    }
    return 0;
}