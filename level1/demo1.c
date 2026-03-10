#include <stdio.h>

void input(int n, float arr[]);
int find_max_index(int n, float arr[]);
void output(float arr[], int max_index);

int main()
{
    int n, max_index;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];

    input(n, arr);
    max_index = find_max_index(n, arr);
    output(arr, max_index);

    return 0;
}

void input(int n, float arr[])
{
    int i;
    printf("Enter %d float values:\n", n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }
}

int find_max_index(int n, float arr[])
{
    int i, max_index = 0;

    for(i = 1; i < n; i++)
    {
        if(arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }

    return max_index;
}

void output(float arr[], int max_index)
{
    printf("Maximum value = %.2f\n", arr[max_index]);
    printf("Index of maximum value = %d\n", max_index);
}