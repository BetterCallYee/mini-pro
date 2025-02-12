#include <stdio.h>
int main(){
    int score,pp,ex;

    printf("Enter the number of people in the class\n");
    scanf("%d",&pp);

    printf("Enter the number of people coming to the exam\n");
    scanf("%d",&ex);

    loop1:{
        
        printf("Enter score exam :");
        scanf("%d",&score);
        
        if (pp==ex){
            printf("finished");
        }
        if(score>=50){
            printf("You Passed the Examination\n");
        }else{
            printf("You Failed the Examination\n");
    }}
    goto loop1;
    return 0;
}