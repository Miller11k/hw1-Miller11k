/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	int i;
	int j;
	int temp = 0;
	
	for(i = 0, i < size, i++)
	{
		for(j = i + 1, j < size, j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	/*   For step 4, add conditional compilation flags to perform an ascending selection sort instead */
}
