

#include <stdio.h>
int avg_student( int row,int col){
    int i,j,sum,a[row][col]; float avg;
    for (i=0;i<row;i++){
        sum=0;
        printf("Enter grades for student %d:",i+1);
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
            sum=sum+ a[i][j];
        }
        avg= (float)sum/col;
        printf("Average grade for student %d: %f\n",i+1,avg);
    }

}
int main() {
    // Write C code here
   int i,j,col,row;
   printf("Enter number of students: ");
   scanf("%d",&row);
   printf("Enter number of subjects: ");
   scanf("%d",&col);
   avg_student(row,col);


    return 0;
}
