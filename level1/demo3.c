/*	Write a C program using array of structures and functions to:
i.	Accept the number of rectangles.
ii.	For each rectangle, accept its length and width.
iii.	Calculate and display the area of each rectangle.
iv.	Determine and display the rectangle with the largest area. (array of structures, for loop, if statement)
typedef struct {
    	float length;
    	float width;
    	float area;
} Rectangle;
Function prototype:
void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int largestIndex, Rectangle rects[]);*/


#include<stdio.h>

typedef struct{
    float length;
    float width;
    float area;
} Rectangle;

void input(int n, Rectangle rects[n])
{
    
    for(int i = 0;i < n; i++){
        printf("enter the length");
        scanf("%f",&rects[i].length);
        printf("enter the width");
        scanf("%f",&rects[i].width);
    }
}

void calculate_area(int n, Rectangle rects[n])
{
    for(int i = 0; i < n; i++){
        rects[i].area = rects[i].length*rects[i].width;
    }
}

int find_largestarea(int n,Rectangle rects[n])
{
    int maxindex =0;
    for(int i =0; i < n; i++){
        if(rects[i].area > rects[maxindex].area ){
            maxindex = i;
        }
    }
    return maxindex;
}

void output(int n, int largestindex, Rectangle rects[n])
{
    printf("rectangle areas ");
    for(int i = 0; i < n; i++){
        printf(" the rectangle %d of area = %.2f", i+1,rects[i].area);
    }
    printf("largest area is of rectangle %d with area = %.2f",largestindex + 1,rects[largestindex].area);

}

int main()
{
    int n;

    printf("enter the valus of n");
    scanf("%d",&n);
    Rectangle rects[n];

    input( n, rects);
    calculate_area( n, rects);
    int largestindex = find_largestarea(n,rects);
    output(n, largestindex , rects);
}