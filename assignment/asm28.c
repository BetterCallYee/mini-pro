// // Set data

// #include<stdio.h>

// int main(){
//     int i;
//     int array[5]={1,2,3,4,5};
//     printf("The array defult is:");
//     for(i=0;i<5;i++){
//         printf("%d",array[i]);
//     }
//     printf("\n");
//     printf("The reverse array is:");
//     for(i=4;i>=0;i--){
//         printf("%d",array[i]);
//     }
// }

// User input

#include<stdio.h>

int main(){
    int i,n;

    printf("Enter number of element:");
    scanf("%d",&n);
    printf("\n");

    int array[n];

    
    for (i = 0; i < n; i++){
        printf("Enter Elements[%d]:",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nDefault array is:");
    for(i=0;i<5;i++){
        printf("%d",array[i]);
    }
    printf("\nReverse array is:");
    for(i=4;i>=0;i--){
        printf("%d",array[i]);
    }
}