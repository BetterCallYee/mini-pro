// // Set data

// #include<stdio.h>

// int main(){
//     int i;
//     int array[5]={5,2,8,1,9};

//     printf("The array is: ");
//     for (i = 0; i < 5; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");

//     int max=array[0];
//     int min=array[0];

//     for (i=1;i<5;i++) {
//         if(array[i]>max){
//             max=array[i];
//         }
//         if(array[i]<min){
//             min=array[i];
//         }
//     }
//     printf("Minimum value: %d\n",min);
//     printf("Maximum value: %d\n",max);

// }

// User input

#include<stdio.h>

int main(){
    int num,i;

    printf("Enter number of elements: ");
    scanf("%d",&num);
    printf("\n");

    int array[num];

    for (i = 0; i < num; i++) {
        printf("Enter %d elements[%d]:",num,i+1);
        scanf("%d",&array[i]);
    }
    printf("\nThe entered array is: ");
    for (i = 0; i < num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int max=array[0];
    int min=array[0];

    for (i=1;i<num;i++) {
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("\nMinimum value: %d\n",min);
    printf("Maximum value: %d\n",max);

}
