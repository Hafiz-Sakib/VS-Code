#include <stdio.h>
#include <limits.h>
int FindMax(int arraySize, int array[arraySize]);
int main()
{
    int n, i;
    printf("Enter The array Size :\n");
    scanf("%d", &n);
    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter %d no number :\n", (i + 1));
        scanf("%d", &array[i]);
    }

    printf("Your Array is : ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    int maximum;
    int secondLarge = INT_MIN;

    maximum = FindMax(n, array);

    for (i = 0; i < n; i++)
    {
        if (array[i] < maximum)
        {
            if (secondLarge < array[i])
            {
                secondLarge = array[i];
            }
        }
    }

    printf("%d is the second large", secondLarge);

    return 0;
}

int FindMax(int arraySize, int array[])
{
    int maxValue = array[0], i;

    for (i = 0; i < arraySize; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
        }
    }
    return maxValue;
}