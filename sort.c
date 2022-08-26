/* MODIFY this file */

#include "sort.h"

#ifdef DASCENDING
void ssort(int * arr, int size) {
	int i;
	int j;
	int temp = 0;
	
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return;
}
	#endif


#ifdef ASCENDING
void ssort(int * arr, int size) {
	int i;
	int j;
	int temp = 0;
	
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		return;
	}
	#endif

#ifndef
void ssort(int * arr, int size) 
{
	printf("\n Invalid Option.\n");
	return;
}
}
