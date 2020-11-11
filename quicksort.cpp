#include <string.h>
#include "quicksort.h"

#define HOSTCOUNT 756561
#define HOSTLEN 122

void swap(char* a, char* b) 
{ 
    char temp[HOSTLEN]; 
    strcpy(temp, a);
    strcpy(a, b);
	strcpy(b, temp);
} 

int partition(char arr[HOSTCOUNT][HOSTLEN], int low, int high) 
{ 
    char* pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high- 1; j++) 
    {  
		if(strcmp(arr[j], pivot)<0) 
        { 
            i++;
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[high]); 
    return (i + 1); 
} 

void quickSort(char arr[HOSTCOUNT][HOSTLEN], int low, int high) 
{ 
    if (low < high){ 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}