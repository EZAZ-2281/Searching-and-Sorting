#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("Enter the size of the array? ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

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
Best: O(n)
Average & Worst: O(n^2)
Space complexity: O(1)
*/

/*
Using Function: (Optional)
#include <stdio.h>
void selectionSort(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main()
{
    int n, i, j, temp;
    printf("Enter the size of the array? ");
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    selectionSort(a, n);

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
*/
