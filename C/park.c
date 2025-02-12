#include <stdio.h>
int main(){
    int h,price;

    printf("Enter parking hours");
    scanf("%d",&h);

    if(h<=2){
        price=40*h;
    }else if(h<=5){
        price=(80)+((h-2)*30);
    }else{
        price=(170)+((h-5)*20);
    }
    printf("Total parking fee: %d baht",price);
    return 0;
}