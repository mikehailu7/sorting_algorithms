#include "sort.h"
#include <stdio.h>
/**
 *merge - function used to implement merge sorrt
 *@arr: usee to store the array
 *@tmp: used to store the tmp
 *@start: used to store the start
 *@mid: used to store the mid
 *@end: used to sore the end
 **/
void merge(int *arr, int *tmp, int start, int mid, int end)
{
        int size_left = mid - start + 1, size_right = end - mid;
        int *array_left, *array_right;
        int left, right, i = 0;

        array_left = &tmp[0];
        array_right = &tmp[size_right];
        for (left = 0; left < size_left; left++)
                array_left[left] = arr[start + left];
        for (right = 0; right < size_right; right++)
                array_right[right] = arr[mid + 1 + right];
        left = 0, right = 0, i = start;

        while (left < size_left && right < size_right)
        {
                if (array_left[left] <= array_right[right])
                        arr[i] = array_left[left], left++;
                else
                        arr[i] = array_right[right], right++;
                i++;
        }

        while (left < size_left)
                arr[i] = array_left[left], left++, i++;
        while (right < size_right)
                arr[i] = array_right[right], right++, i++;
        printf("Merging...\n");
        printf("[left]: ");
        print_array(array_left, left);
        printf("[right]: ");
        print_array(array_right, right);
        printf("[Done]: ");
        print_array(&arr[start], left + right);
}
/**
 *mergesort - used to sort using merge type of sort
 *@array: used to store the aray
 *@tmp: used to store the temp
 *@start: used to store the firtst 
 *@end: used to store the end
 */
void mergesort(int *array, int *tmp, int start, int end)
{
        int mid;

        mid = (start + end) / 2;
        if ((start + end) % 2 == 0)
                mid--;
        if (mid >= start)
        {
                mergesort(array, tmp, start, mid);
                mergesort(array, tmp, mid + 1, end);
                merge(array, tmp, start, mid, end);
        }
}
/**
 *_calloc - used to call the function
 *@nmemb: used to stre the number
 *@size: used to store the size
 *Return: success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == NULL)
		return ('\0');
	for (i = 0; i < (nmemb * size); i++)
		p[i] = '\0';
	return (p);
}
/**
 *merge_sort - used to operate merge sort
 *@size: used to store the size
 *@array: used tos tore the aray
 *Return: null
 */
void merge_sort(int *array, size_t size)
{
        int *tmp;

        if (!array || size < 2)
                return;
        tmp = _calloc(size, sizeof(int));
        mergesort(array, tmp, 0, size - 1);
        free(tmp);
}
