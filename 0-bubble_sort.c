#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    int temp;
    int swapped;
    size_t i = 0;
    size_t j = 0;

    if (array == NULL || size < 2)
        return;

    for (; i < size - 1; i++)
    {
        swapped = 0;
        for (; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                /*Swap the elements*/
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                /*Print the array after each swap*/
                print_array(array, size);
                swapped = 1;
            }
        }
        /*If no two elements were swapped by the inner loop, then the array is sorted*/
        if (swapped == 0)
            break;
    }
}