#include <stdio.h>
float circle(float radius)
{
    return 3.14 * radius * radius;
}
float square(float side)
{
    return side * side;
}
float rectangle(float length, float breadth)
{
    return length * breadth;
}
int main()
{
    // program to calculate area of circle,square and rectangle
    int choice;
    float r, s, l, b;
    float area;
    printf("1 for circle, 2 for square, 3 for rectangle");
    printf("\nenter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nenter the radius:");
        scanf("%f", &r);
        area = circle(r);
        break;
    case 2:
        printf("\nenter the value of side:");
        scanf("%f", &s);
        area = square(s);
        break;
    case 3:
        printf("\nenter the value of len and breath:");
        scanf("%f%f", &l, &b);
        area = rectangle(l, b);
        break;
    default:
        printf("\ninvalid choice");
        break;
    }
    printf("\narea of your choice %d is : %.2f", choice, area);
    return 0;
}