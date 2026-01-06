#include<stdio.h>
int main()
{
    int GST;
    char grade;
    printf("enter the GST type:");
    scanf("%d",&GST);
    switch (GST)
    {
    case 0:printf("exempted:fruits,books,education services,public transports\n");
        break;
    case 5:printf("commonly used:packaged food,medicines,passenger transportation,edible oils\n");
        break;
    case 12:printf("mass consumption:processed foods,mobile phones,fertilizers,hotels\n");
        break;
    case 18:printf("standard:processed foods,banking servises,restaurants,consumer eletronics,soaps\n");
        break;
    case 28:printf("luxury:air conditioners,auotmobiles,tobacco products,5*hotels\n");
        break;
    default:printf("invalid GST type\n");
        break;
    }
    return 0;
}