/* MODIFY this file */

#include "sort.h"

void ssort(int * arr, int size) {
	
	int i;
	int j;
	int temp = 0;
	#ifdef ASCENDING //Determines whether to ascend one way given a specific flag identifier in main
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j]) // If the next term is smaller, switch the terms
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	#else // Sorts the other way if the flag's condition is not met
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] < arr[j]) // If the next term is larger, switch the terms
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	#endif
}