#include <stdio.h>
#define maxsize 50

int BinarySearch(int A[], int n, int key);

int BinarySearch(int A[], int n, int key)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (A[mid] == key)
            return mid;
        else if (A[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int A[maxsize], n, key;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the sorted array:\n");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &A[j]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = BinarySearch(A, n, key);

    if (index != -1)
        printf("Element is present at index %d\n", index);
    else
        printf("Element is not found\n");

    return 0;
}
