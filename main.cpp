//
// Created by acer on 11/24/2022.
//
#include "stdio.h"
#include "stdlib.h"

int main()
{
    FILE *fptr;
    int digit = 0;
    int arr[100];
    // step 1
    printf("\n\t\tAssignment 3\n\n");
    fptr = fopen("number.txt", "a");
    if(fptr == NULL)
    {
        printf("No Data to show up!\n");
    }else
    {
        for(int i=1; i<=100; i++)
        {
            fprintf(fptr, "%d%c", i, '\n');
        }
        fclose(fptr);
    }

    // step 2
    fptr = fopen("number.txt", "r");
    if(fptr == NULL)
    {
        printf("No data to show up!\n");
    }else
    {
        for(int i=0; i<100; i++)
        {
            fscanf(fptr, "%d", &digit);
            arr[i] = digit;
        }
        fclose(fptr);
    }

    // step 3
    for(int i=0; i<100; i++)
    {
        printf("number : %d\n", arr[i]);
    }
    return 0;
}