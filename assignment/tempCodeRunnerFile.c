// User input

#include <stdio.h>
int main() {
    int x,y;
    printf("Enter rows:");
    scanf("%d",&x);
    printf("Enter columms:");
    scanf("%d",&y);
    int matrix[x][y];
    int sum = 0;
    int i,j;
    printf("\nEnter element\n");
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; 
        }
    }
    printf("\nSum of All element: %d", sum);
}
