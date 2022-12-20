#include <stdio.h>
void main()
{
    int vize,final;
    float a;
    printf("Vize notunu giriniz:");
    scanf("%d",&vize);
    printf("Final notunu giriniz:");
    scanf("%d",&final);
    a = vize*0.4 + final*0.6;
    printf("Ağırlıklı ortalama = %f\n",a);
    if (a >= 60)
    {
        printf("GEÇTİ");
    }
    else
    {
        printf("Kaldı");
    }
}