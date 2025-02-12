#include <stdio.h>
int main(){
    int h,wage=30;
    printf("Enter working hours: ");
    scanf("%d",&h);

    if(h<=8){
        wage=wage*h;
    }else{
        wage = (h * wage) + ((h - 8) * 15);
    }
    printf("Total wage: %d baht",wage);
    return 0;
}