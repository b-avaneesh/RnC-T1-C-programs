#include <stdio.h>

int main() {
    int i,j,n,temp,small,pos;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
        small=arr[i];
        for(j=i+1;j<n-1;j++){
            if (small<arr[j]) continue;

            else if(small>arr[j]){
                small=arr[j];
                pos=j;
                arr[pos]=arr[i];
                arr[i]=small;
            }
        }


    }
    printf("Smallest is %d\n",arr[0]);
    printf("Largest is %d",arr[n-1]);

    return 0;
}
