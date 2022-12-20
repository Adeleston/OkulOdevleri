#include <stdio.h>
int vize,final;
float ortalama()
{
     printf("sırasıyla vize ve final notlarını giriniz.");
        scanf("%d",&vize);
        scanf("%d",&final);
    float ort;
    ort = (vize * 0.6) + (final * 0.4);
    return ort;
}
int main()
{
    int t;
    while (t != 20)
    {
        float a;
        int k,N;
        a = ortalama();
       
        if (a > 90)
        {
            printf("AA");
        }
        if (a > 80 && a < 90)
        {
            printf("BA");
        }
        if (a > 70 && a < 80)
        {
            printf("BB");
        }
        if (a < 70)
        {
            printf("FF");
        }
        printf("Ortalama hesabını durdurmak için 111 yazınız.");
        scanf("%d",&k);
        if (k == 111)
        {
        t = 20;
        }
        
    }
       
    return 0;
}
