#include <stdio.h>
int main(){
    int n, i;
    int arr[20];
    printf("Enter the number of elements of array");
    scanf("%d", &n);
    printf("Enter the elements of array in sorted manner");
    for(i=0; i<=n-1;i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered array is:");
    for(i=0; i<=n-1;i++){
        printf("%d\t", arr[i]);
    }
    for (i=0; i<=n-1; i++){
        if (arr[i]==arr[i+1]){
            printf("\n %d is repeated", arr[i]);
        }
    }   
}