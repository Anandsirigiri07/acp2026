#include<stdio.h>
struct Rectangle{
    char name[100];
    float length;
    float width;
    float area;
};
typedef struct Rectangle rectangle;


rectangle input_rectangle()
{
    rectangle r;
    printf("Enter rectangle name: ");
    scanf("%s", r.name);
    printf("Enter length: ");
    scanf("%f", &r.length);
    printf("Enter width: ");
    scanf("%f", &r.width);
    r.area = r.length*r.width;
    return r;
}


void compare_areas(rectangle r1, rectangle r2, rectangle r3)
{
    if(r1.area >= r2.area && r1.area >= r3.area)
    {
        printf("%s = %.2f has the largest area.\n", r1.name,r1.area);
    }
    else if(r2.area >= r1.area && r2.area >= r3.area)
    {
        printf("%s = %.2f has the largest area.\n", r2.name,r2.area);
    }
    else
    {
        printf("%s = %.2f has the largest area.\n", r3.name,r3.area);
    }
}


int main()
{
    rectangle r1,r2,r3;
    r1=input_rectangle();
    r2=input_rectangle();
    r3=input_rectangle();
    compare_areas(r1,r2,r3);
    return 0;
}