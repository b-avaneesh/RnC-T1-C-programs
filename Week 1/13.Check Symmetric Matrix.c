/* Check Symmetric Matrix: Implement a C program to check if a given matrix is
symmetric (i.e., matrix is equal to its transpose).*/


#include <stdio.h>

int main() {
    int i,j,row,col,y;


    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row,&col);

    int arr[row][col];


    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++) {
        for(j=0;j<col;j++){
        scanf("%d", &arr[i][j]);
    }
    }

     for (i = 0; i < row; i++) { y=0; //assuming its symmetric
        for(j=0;j<col;j++){
            if (arr[i][j]!=arr[j][i]){
                y=1;
                break;
            }
        }
        if (y==1) {
            printf("Given matrix isnt symmetric!");
            break;
        }

     }
    if(y==0){
        printf("Given matrix is symmetric");

    }
}
