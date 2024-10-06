
#include <stdio.h>

int main() {
    int i,n,temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *first=arr;
    int *last=arr+(n-1);
    for (int i = 0; i <(n+1)/2; i++,first++,last--) {
        temp= *first;
        *first=*last;
        *last=temp;

    }
    printf("Reversed elements:");
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
}
