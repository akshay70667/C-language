#include<stdio.h>
/*Program to understand how pass structure to function
NOTE: This utilise call by value
typedef can be used to shorted the struct name to just na*/
typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} st ;
void printInfo(struct student s1);
int main()
{
    st s1 = {05, 8.05, "akshay"};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1)
{
    printf("name= %s\n", s1.name);
    printf("roll= %d\n", s1.roll);
    printf("cgpa= %f\n", s1.cgpa);
}
