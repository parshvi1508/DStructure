#include <stdio.h>
int main(){
    int num, n, i;
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
    printf("\n Enter the number to be inserted");
    scanf("%d", &num);
    for(i=n-1; num<arr[i] && i>=0; i--){
        arr[i+1]=arr[i];
    }
    arr[i+1]=num;
    printf("\n Updated array is:");
    for(i=0; i<=n;i++){
        printf("%d\t", arr[i]);
    }
    return 0;

}