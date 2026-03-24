/*5	Write a program to swap two integer arrays.  
Function prototype:
void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);	3
*/


#include<stdio.h>

void read_array(int n, int arr[])
{
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void print_array(int n, int arr[])
{
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    
}

void swap_array(int n, int a[n], int b[n])
{
    for(int i=0; i<n; i++){
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

}


int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);

    if(n<=0){
        printf("invalid no\n");
        return 0;
    }

    int a[n];
    int b[n];

    printf("enter the elements of the 1st array: ");
    read_array(n, a);
    printf("enter the elements of the second array: ");
    read_array(n, b);

    printf("before swapp\n");
    printf("array 1: ");
    print_array(n, a);
    printf("array 2: ");
    print_array(n, b);

swap_array(n, a, b);
    printf("after swapp\n");
    printf("array 1: ");
    print_array(n, a);
    printf("array 2: ");
    print_array(n, b);

    return 0;
}
