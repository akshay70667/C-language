#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct student s1;
    s1.roll = 5;
    s1.cgpa = 7.8;
    strcpy(s1.name, "akshay");

    printf("name= %s\n", s1.name);
    printf("roll= %d\n", s1.roll);
    printf("cgpa= %f\n", s1.cgpa);

    struct student s2;
    s2.roll = 2;
    s2.cgpa = 3.3;
    strcpy(s2.name, "abhishek");

    printf("name= %s\n", s2.name);
    printf("roll= %d\n", s2.roll);
    printf("cgpa= %f\n", s2.cgpa);

    struct student s3;
    s3.roll = 64;
    s3.cgpa = 5.5;
    strcpy(s3.name, "rajat");

    printf("name= %s\n", s3.name);
    printf("roll= %d\n", s3.roll);
    printf("cgpa= %f\n", s3.cgpa);

    struct student s4 = {72, 5.0, "sujeet"};
    printf("name = %s roll = %d cgpa = %f\n", s4.name, s4.roll, s4.cgpa);

    return 0;
}