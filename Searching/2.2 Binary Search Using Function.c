#include<stdio.h>
void binarySearch(int a[], int n, int lowIndex, int highIndex, int value)
{
    int midIndex;
    while(lowIndex <= highIndex)
    {
        midIndex = (lowIndex + highIndex) / 2;
        if(value == a[midIndex])
            break;
        else if(value > a[midIndex])
            lowIndex = midIndex + 1;
        else
            highIndex = midIndex - 1;
    }
    if(lowIndex > highIndex)
        printf("Value is not fount in the array\n");
    else
        printf("Value is found at index: %d\n", midIndex);
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
    int value;
    printf("Enter the value you want to search? ");
    scanf("%d", &value);

    int lowIndex = 0;
    int highIndex = n - 1;

    binarySearch(a, n, lowIndex, highIndex, value);

    return 0;
}

/*
Output:
Enter the size of the array? 5
Enter element 1: 8
Enter element 2: 5
Enter element 3: 2
Enter element 4: 9
Enter element 5: 4
Enter the value you want to search? 9
Value is fount at index: 3
*/
