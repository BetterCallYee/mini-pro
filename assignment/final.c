#include<stdio.h>
void greet(){
    char name[50];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Hello %s! \n\nWelcome to my program \n", name);
}
void rifhan(){
    int total,num,price,shoes=250;
    printf("\nEnter number of shoe you want to buy:");
    scanf("%d",&num);

    total=shoes*num;
    printf("\nTotal price is %d\n",total);

    if(num==1){
        price=shoes;
    }else if (num<=4){
        price=(shoes*num)-(num*20);
    }else{
        price=(shoes*num)-(num*50);
    }
    printf("Total price after discunt is %d\n",price);
}

#include <stdio.h>

void faris() {
    int n, sum = 0;

    printf("\nHow many times do you want to print the multiplication table of 10? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int result = 10 * i;
        printf("10 X %d = %d\n", i, result);
        sum += result;
    }

    printf("Total sum: %d\n", sum);

}

void hamdan(){
int com,total,total_price;
int price=15000;
printf("\nEnter number of computer you want to buy:");
scanf("%d",&com);
total=com*price;
printf("\nTotal price before discount%d\n", total);
if (com<5){
    total_price=com*price;
}else if (com<=9){
    total_price=(com*price)-(500*com);
}else{
    total_price=(com*price)-(1000*com);
}
printf("total to pay:%d bath\n",total_price);
}

int main(){
    int press,l;
    greet();
    loop1:
    printf("\nPress1 for Shoe(rifhan) \nPress2 for Computer(hamdan) \nPress3 for Multiply(faris)\nPress:");
    scanf("%d",&press);
    if(press==1){
        rifhan();
    }else if(press==2){
        hamdan();
    }else if(press==3){
        faris();
    }else{
        printf("Error Please select in choice!");
    }
    printf("\nDo you to do it again? (press 1 for do it again):");
    scanf("%d",&l);
    if(l==1){
        goto loop1;
    }else{
        printf("\nThank you");
    }
}