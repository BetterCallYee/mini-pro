#include <stdio.h>
int main(){
    int pa,ds,t=3,d=4;
    float hd=1;

    printf("Enter the patient's age: ");
    scanf("%d",&pa);

    if(pa<=5){
        printf("Take half a tablet per dose");
        printf("\nTotal medicine required: %.0f tablets",(hd*0.5)*t*d);
    }else if(pa<=15){
        printf("Take one tablet per dose");
        printf("\nTotal medicine required: %d tablets",ds=t*d);
    }else{
        printf("Take two tablet per dose");
        printf("\nTotal medicine required: %d tablets",ds=(t*d)*2);
    }
    return 0;
}