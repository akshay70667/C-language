#include<stdio.h>
//Enter address (house no, block, city, state) of 5 people.
struct address
{
    int house_no;
    char block[25];
    char city[100];
    char state[50];
};
void inputInfo(struct address *s1);
void printInfo(struct address s1);
int main()
{
    struct address s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details for person %d:\n", i + 1);
        inputInfo(&s[i]);
    }
    printf("\n----- Addresses -----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nPerson %d:\n", i + 1);
        printInfo(s[i]);
    }
    return 0;
}
void inputInfo(struct address *s1)
{
    printf("Enter house number: ");
    scanf("%d", &s1->house_no);
    printf("Enter block: ");
    scanf(" %s", &s1->block);
    printf("Enter city: ");
    scanf("%s", s1->city);
    printf("Enter state: ");
    scanf("%s", s1->state);
}
void printInfo(struct address s1)
{
    printf("House = %d\n", s1.house_no);
    printf("Block = %s\n", s1.block);
    printf("City = %s\n", s1.city);
    printf("State = %s\n", s1.state);
}