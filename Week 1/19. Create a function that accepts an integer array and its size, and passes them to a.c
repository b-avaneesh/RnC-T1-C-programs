#include <stdio.h>
//Finding average
int average( int *arr, int size){
    int i,avg;avg=0;
    for(i=0;i<size;i++){
        avg=avg+(*arr);
        arr=arr+1;
    }
    avg=avg/size;
}
int main() {
    int i,size,avg;
    printf("Enter size\n");
    scanf("%d",&size);
    int arr[size];printf("Enter the values\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    avg=average(arr,size);
    printf("The average is given by %d",avg);
    return 0;

}
