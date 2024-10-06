#include <stdio.h>

int main() {
    int i,n,sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *first=arr; sum=0;
     for (i = 0; i<n; i++,first++) {
         sum=sum+(*first);
     }
     printf("Sum of elements= %d",sum);
    return 0;
}
