#include <stdio.h>
int main(){
    int m,n,i,j,k;
    int a1[m], a2[n],r[m+n];
    printf("Enter the number of elements of array 1 and array 2 respectively:");
    scanf("%d%d", &m,&n);
    printf("Enter the elements of sorted array1:");
    for (i=0; i<=m-1; i++){
        scanf("%d", a1[i]);
    }
    printf("Enter the elements of sorted array2:");
    for (j=0; j<=n-1; j++){
        scanf("%d", a2[j]);
    }
    for (k=0; k<=(m+n-1); k++){
        for(i=0; i<=m-1;i++)
        {
            for(j=0; j<=n-1; j++){
                if (a1[i]<a2[j]){
                    r[k]=a1[i];
                    r[k+1]=a2[j];
                    i++;
                }
                else{
                    r[k]=a2[j];
                    j++;
                }
            }
        }
    }
}