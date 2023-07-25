#include "sort.h"
#include <stdio.h>
/**
 *_calloc - used to call a function
 *@nb: number storage
 *@s: used to set a size of the array
 *Return: success
 *done by mike hailu and yared teesfaye
 */
void *_calloc(unsigned int nb, unsigned int s)
{
	unsigned int i = 0;
	char *p;

	if (nb == 0 || s == 0)
		return ('\0');
	p = malloc(nb * s);
	if (p == NULL)
		return ('\0');
	for (i = 0; i < (nb * s); i++)
		p[i] = '\0';
	return (p);
}
/**
 * counting_sort - used to sort using counting
 * @array: used to sort
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int index, maximun = 0, *counter = '\0', *tmp = '\0';
	size_t i;

	if (array == NULL || size < 2)
		return;
	
	for (i = 0; i < size; i++)
		if (array[i] > maximun)
			maximun = array[i];
	counter = _calloc(maximun + 1, sizeof(int));
	tmp = _calloc(size + 1, sizeof(int));

	for (i = 0; i < size; i++)
		counter[array[i]]++;

	for (index = 1; index <= maximun; index++)
		counter[index] += counter[index - 1];
	print_array(counter, maximun + 1);
	
	for (i = 0; i < size; ++i)
	{
		tmp[counter[array[i]] - 1] = array[i];
		counter[array[i]]--;
	}
	
	for (i = 0; i < size; i++)
		array[i] = tmp[i];
	free(tmp);
	free(counter);

}
