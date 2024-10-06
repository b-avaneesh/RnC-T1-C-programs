    /* Find the Middle Element of an Array: Implement a function to find the middle
element of an integer array using pointers without using the array indexing operator
([]). (W:3)
Sample Input: Enter the number of elements: 7
Enter the elements: 11 22 33 44 55 66 77
Output: Middle element: 44*/


#include <stdio.h>

int main() {
    int i,mid,n;


    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    //Declaring pointer.;
    int *ptr; ptr=arr;
    mid=(n-1)/2;
    ptr=ptr+mid;
    printf("%d is the mid value",*ptr);
}
