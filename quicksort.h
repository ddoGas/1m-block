#pragma once

#define HOSTCOUNT 756561
#define HOSTLEN 122

void swap(char* a, char* b);
int partition(char arr[HOSTCOUNT][HOSTLEN], int low, int high);
void quickSort(char arr[HOSTCOUNT][HOSTLEN], int low, int high) ;