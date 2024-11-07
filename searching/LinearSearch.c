#include <stdio.h>
#define maxsize 50

int LinearSearch(int A[], int n, int key);

int LinearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            return i; 
        }
    }
    return -1; 
}

int main()
{
    int A[maxsize], n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &A[j]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = LinearSearch(A, n, key); 

    if (index != -1)
        printf("Element is present at index %d\n", index);
    else
        printf("Element is not found\n");

    return 0;
}
