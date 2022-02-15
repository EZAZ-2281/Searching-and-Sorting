#include<stdio.h>
int linearSearch(int a[], int n, int value)
{
    int i, position = -1;
    for(i = 0; i < n; i++){
        if(a[i] == value){
            position = i;
        }
    }
    return position;
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

    int position = linearSearch(a, n, value);

    if(position == -1)
        printf("Value is not found in this array\n");
    else
        printf("Value is fount at index: %d\n", position);

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
