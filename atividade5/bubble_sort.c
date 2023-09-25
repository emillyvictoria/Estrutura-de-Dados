#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"


void bubble_sort(char arr[], int n)
{
    int x, y, r;
    char aux[100];
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n - 1; j++)
        {
            r = strcmp(arr[i], arr[j]);
            if (r>0)
            {
                strcpy(aux, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], aux);
            }
        }
    }
};