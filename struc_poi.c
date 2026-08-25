#include<stdio.h>

//Program to showcase how pointer work in structure 
struct student
{
    int roll;
    float cgpa;
    char name[100];
};
int main()
{
    struct student s1 = {72, 5.0, "sujeet"};
    printf("name = %s roll = %d cgpa = %f\n", s1.name, s1.roll, s1.cgpa);

    struct student *ptr =&s1;
    //Arrow Operator
    printf("student name = %s\n",ptr->name);
    printf("student cgpa = %f\n", (*ptr).cgpa);

    return 0;
}