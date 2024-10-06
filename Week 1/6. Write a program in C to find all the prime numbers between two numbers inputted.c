#include <stdio.h>

int main() {
    int i,j,n,k;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i=0;i<(n);i++){
        k=0; //assuming its prime
        for(j=2;j<((arr[i]/2)+1);j++){
            if (arr[i]%j==0){
                k=1;
                break;
            }
            else{
                continue;
            }
        }
        if (arr[i]==1){
            continue;}

        if (k==0){
            printf("%d is a prime number\n",arr[i]);
        }


        }


    return 0;
}
