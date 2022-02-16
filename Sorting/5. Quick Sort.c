#include<stdio.h>
int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i, j, temp;
    for(i = low - 1, j = low; j < high; j++)
    {
        if(a[j] < pivot){
            i = i + 1;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    temp = a[high];
    a[high] = a[i+1];
    a[i+1] = temp;
    return i+1;
}
void quickSort(int a[], int low, int high)
{
    if(low >= high){
        return;
    }
    int p = partition(a, low, high);
    quickSort(a, low, p - 1);
    quickSort(a, p + 1, high);
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

    int low = 0;
    int high = n - 1;

    quickSort(a, low, high);

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
Average = O(nlogn) and 
Worse case = O(n^2)
Space complexity: O(logn)
*/


![Photo](https://user-images.githubusercontent.com/81481142/154228443-75f56d67-bf1c-4837-a331-6d50052a7edb.PNG)

