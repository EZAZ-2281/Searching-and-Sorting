#include<stdio.h>
void merge(int a[], int left, int mid, int right)
{
    int lSize = mid - left + 1;
    int rSize = right - mid;
    int L[lSize], R[rSize];

    for(int i = 0; i < lSize; i++){
        L[i] = a[i+left];
    }
    for(int i = 0; i < rSize; i++){
        R[i] = a[mid+1+i];
    }

    int i = 0, j = 0, k = left;

    while(i < lSize && j < rSize)
    {
        if(L[i] > R[j]){
            a[k] = R[j];
            j++;
        }
        else{
            a[k] = L[i];
            i++;
        }
        k++;
    }
    while(i < lSize){
        a[k] = L[i];
        i++; k++;
    }
    while(j < rSize){
        a[k] = R[j];
        j++; k++;
    }
}
void mergeSort(int a[], int left, int right)
{
    if(left >= right){
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(a, left, mid);
    mergeSort(a, mid + 1, right);
    merge(a, left, mid, right);
}
int main()
{
    int n, i;
    printf("Enter the size of the array? ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int left = 0;
    int right = n - 1;

    mergeSort(a, left, right);

    printf("\nPrinting array in Ascending order: \n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\nPrinting array in Descending order: \n");
    for(i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}

/*
Enter the size of the array? 5
Enter element 1: 5
Enter element 2: 8
Enter element 3: 1
Enter element 4: 3
Enter element 5: 9
Printing array in Ascending order: 
1 3 5 8 9 
Printing array in Descending order: 
9 8 5 3 1 

Time complexity-
Average and Worse case both: O(nlogn)
Space complexity: O(n)
*/
