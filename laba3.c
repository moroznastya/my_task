#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>

int main()
{   
    setlocate(LC_ALL, "Ukrainian");
    int length;
    printf("Input length:");
    scanf("%d", &length);
    int* array = (int*)malloc(length * sizeof(int)); //creating a dynamic array
    for (int i = 0; i < length; i++)
    {
        printf("Input array[%d]:", i + 1); //filling the array
        scanf("%d", &array[i]);
    }
    int varNoPair = 1;

    varNoPair = WithoutPair(length, array);

    prinf("Our number without a pair=%d", varNoPair);
    return 0;

}
int  WithoutPair(int length, int* array) //function of finding a number without a pair
{
    for (int i = 0; i < n; i++)
    {
        int  k = -1;  //k is a random variable to prescribe a loop

        for (int j = 0; j < n; j++)
        {
            if (array[i] + array[j]) = 0;
            break;
            if (j = n - 1)
                k = i;
        }
        if (k != -1)  //the cycle ended and no pair was found
            return array[k];
    }

}