#include <stdio.h>
int main ()
{
    float a;
    float pie;
    float perimeter;
    float area;
    printf("radius is a");
    scanf("%f",&a);
    pie = 3.14;
    area = pie * (a*a);
    perimeter = 2*pie*a;
    printf("area is %f",area);
    printf("perimeter is %f",area);
    printf("perimeter is %f", perimeter);
    return 0;
}
