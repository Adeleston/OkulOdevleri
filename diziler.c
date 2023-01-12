#include <stdio.h>
int maxarraychoser()
{
    printf("En buyuk sayi secilen fonk.");
    int a[6],i,z,j;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    j = 0;
    z = a[0];
    while(j < 6)
    {
    if (a[j] > z)
    {
    z = a[j];
    }
    j++;
    }
    return z;
}
int secondmaxarraychoser()
{
    printf("En buyuk 2. sayi secilen fonk.");
    int a[6],i,z,j,t,m;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    t = 0;
    j = 0;
    m = a[0];
    z = a[0];
    while(j < 6)
    {
    if (a[j] > z)
    {
    z = a[j];
    }
    j++;
    }
    while(t < 6)
    {
    if (a[t] < z && a[t] > m)
    {
    m = a[t];
    }
    t++;
    }
    return m;
}
int minarraychoser()
{
    printf("En kucuk sayi secilen fonk.");
    int a[6],i,z,j;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    j = 0;
    z = a[0];
    while(j < 6)
    {
    if (a[j] < z)
    {
    z = a[j];
    }
    j++;
    }
    return z;
}
int upperavaragevaluenumber()
{
    printf("Ortalamadan buyuk degerlerin sayisini donduren fonksiyon.");
    int a[6],i,k,j,degersayisi;
    float ort;
    j = 0;
    degersayisi = 0;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    ort = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5])/6;
    while (j < 6)
    {
     if (ort < a[j])
     {
        degersayisi++;
     }
     j++;   
    }
    return degersayisi;
}
void underavaragevalues()
{
printf("\nOrtalama alti degerleri alan fonksiyon.");
int a[6],i,j;
float ort;
for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    ort = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5])/6;
for (j = 0; j < 6; j++)
{
    if (a[j] < ort)
    {
        printf("\na[%d] = %d ortalamadan kucuktur.",j,a[j]);
    }
    j++;
}
}
int parametercounter(int number)
{
printf("parametre degeri gecilme sayaci fonk.");
    int a[6],i,z,j,count;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    for (j = 0; j < 6; j++)
    {
        if (number == a[j])
        {
            count++;
        }
    }
    return count;
}
int underparameteradd(int number)
{
printf("parametre degeri gecilme sayaci fonk.");
    int a[6],i,z,j,total;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    for (j = 0; j < 6; j++)
    {
        if (number > a[j])
        {
        total += a[j];
        }
    }
    return total;
}
int underparameteradd(int number)
{
printf("parametre degeri gecilme sayaci fonk.");
    int a[6],i,z,j,total;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    for (j = 0; j < 6; j++)
    {
        if (number > a[j])
        {
        total += a[j];
        }
    }
    return total;
}
float upperparameteravarage(float t)
{
printf("parametre degeri gecilme sayaci fonk.");
    int a[6],i,z,j,total,c,f;
    for (i = 0; i < 6; i++)
    {
        int y,k;
        k = i + 1;
        printf("\n %d number =",k);
        scanf("%d",&y);
        a[i] = y;
    }
    for (j = 0; j < 6; j++)
    {
        if (t < a[j])
        {
        total += a[j];
        c++;
        }
        f = total/c;
    }
    return f;
}
void main()
{
    int a[6],number;
    float y,t;
    printf("parametre degeri yaziniz.");
    scanf("%d",&number);
    printf("parametre degeri yaziniz.bu sefer ondalikli sayi");
    scanf("%f",&t);
    a[0] = parametercounter(number);
    a[1] = maxarraychoser();
    a[2] = minarraychoser();
    a[3] = secondmaxarraychoser();
    a[4] = upperavaragevaluenumber(number);
    a[5] = underparameteradd(number);
    y = upperparameteravarage(t);
    printf("%d parametre kac defa geciyor \n %d max\n%d min\n%d secondmax \n ortalamadan fazla deger sayisi %d\n parametrenin alti degerler toplamı \n parametrenin ustu degerlerin ortalaması %f",a[0],a[1],a[2],a[3],a[4],a[5],y);
    underavaragevalues();
    
}
