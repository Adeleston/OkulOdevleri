#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Kilonuzu giriniz: \n");
    scanf("%f",&a);
    printf("Boyunuzu giriniz: \n");
    scanf("%f",&b);
    c = a / (b * b);
    printf("Beden Kitle İndeksiniz: %f\n", c);
    if (c < 15)
    {
        printf("Extreme Skinny");
    }
    if (c > 15 && c < 25)
    {
        printf("Normal");
    }
    if (c > 25 && c < 30)
    {
        printf("Fat");
    }
    if (c > 30)
    {
        printf("Obesse");
    }
    return 0;
}