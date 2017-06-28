#include <stdio.h>

int partition( int *numbers, int low, int high );
int quick_sort( int *numbers, int low, int high)
{   
    int pivot;
    if( high - low > 0){
        pivot = partition( numbers, low, high );
        quick_sort( numbers, low,    pivot-1);
        quick_sort( numbers, pivot+1, high);
    }
    return 1;
}

int partition( int *numbers, int low, int high )
{
    int i, j;
    int key, temp;
    
    key = numbers[high];
    for( i = low-1, j = low; j < high; j++){
        if( numbers[j] < key ){
            temp = numbers[j];
            numbers[j] = numbers[++i];
            numbers[i] = temp;
        }
    }

    numbers[high] = numbers[++i];
    numbers[i]    = key;
    return i;
}

int main()
{
    int i;
    int num[10] = {3, 4, 99, 32, 3, 4, 19, 3, 45, 3};
    quick_sort(num, 0, 9);
    for( i = 0; i < 10; i++)
        printf("%d\t", num[i]);
    printf("\n");
    return 0;
}
