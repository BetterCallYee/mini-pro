// // Set data

#include <stdio.h>
int main() {
    int matrixA[2][2]={{1,2},{3,4}};
    int matrixB[2][2]={{5,6},{7,8}};
    int add[2][2];
    int i,j,sum;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            add[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
    printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
}

// User input

// #include <stdio.h>
// int main() {
    
//     int z,x,c,v;

//     printf("Enter rows of matrixA:");
//     scanf("%d",&z);
//     printf("Enter columms of matrixA:");
//     scanf("%d",&x);

//     printf("Enter rows of matrixB:");
//     scanf("%d",&c);
//     printf("Enter columms of matrixB:");
//     scanf("%d",&v);


//     int matrixA[z][x];
//     int matrixB[c][v];

//     int add;
//     int i,j;

//     printf("Enter elements of matrixA:\n");
//     for(i=0;i<z;i++){
//         for (j=0;j<x;j++) {
//             printf("Element [%d][%d]: ",i+1,j+1);
//             scanf("%d",&matrixA[i][j]);
//         }
//     }

//     printf("Enter elements of matrixB:\n");
//     for(i=0;i<c;i++){
//         for(j=0;j<v;j++) {
//             printf("Element [%d][%d]: ",i+1,j+1);
//             scanf("%d",&matrixB[i][j]);
//         }
//     }
    
//     printf("Matrix after Addition:\n");
//     for(i=0;i<z;i++){
//         for(j=0;j<x;j++) {
//             add=matrixA[i][j]+matrixB[i][j];
//             printf("%d\t",add);
//         }
//         printf("\n");
//     }
// }