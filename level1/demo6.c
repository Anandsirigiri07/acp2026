/*6	Develop a modular C program to manage an integer array using dynamic memory allocation. You must implement specific functions to allocate, initialize, display, and safely deallocate memory. This task ensures proficiency in preventing memory leaks and managing dangling pointers.
Function prototype:
int* create_array(int n); 
void initialize_array(int *arr, int n); 
void print_array(int *arr, int n); 
void delete_array(int **arr);	3
*/


#include<stdio.h>
#include<stdlib.h>

int* create_array(int n){

    int* arr;

    arr = (int*)malloc(n*sizeof(int));

    return arr;

}

void initialize_array(int *arr, int n){
    int i;
    printf("enter the values");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
}

void print_array(int *arr, int n){
    int i;
    printf("the array is : ");
    for(i=0;i<n;i++){
        printf("the %d element in the array is  : %d\n",i+1,arr[i]);
    }
}

void delete_array(int **arr){
    if(*arr != NULL){
        free(*arr);
        *arr=NULL;
    }
}


int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);

    if(n<=0){
        printf("invalid number");
        return 0;
    }

    int* arr= create_array(n);

    if(arr==NULL){
        printf("error");
        return 0;
    }

    initialize_array(arr,n);

    print_array(arr,n);

    delete_array(&arr);

    if(arr == NULL){
        printf("memory dealocated successfully\n");
    }

    return 0;


}