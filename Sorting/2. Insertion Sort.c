#include <stdio.h>
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

    for(i = 1; i<n; i++) {
        int x = i - 1;
        int key = a[i];
        while(a[x] > key && x >= 0) {
            a[x+1] = a[x];
            x--;
        }
        a[x+1] = key;
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

Time complexity: 
Best: O(n)
Avearge & Worst: O(n^2)
Space: O(1)
