#include <stdio.h>

int main()
{
    float length = 10;
    float width = 5;
    
    float area = length * width;
    float perimeter = 2 * (length + width);
    
    printf("Value of length = %f\n", length);
    printf("Value of width = %f\n", width);
    printf("area of rectangle = %f\n", area);
    printf("perimeter of rectangle = %f\n", perimeter);
    
    return 0;
}