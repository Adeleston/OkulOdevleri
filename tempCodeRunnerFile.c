#include <stdio.h>
int main()
{
char Tip;
int gun;
float mesafe,tutar;
printf("araç tipini giriniz.(Arazi için A,Binek için B,Station için S ve Spor araba için P tuşuna basınız\n");
scanf("%c",&Tip);
printf("kaç km mesafe kat ettiniz:\n");
scanf("%f",&mesafe);
printf("kaç gün kullandınız : \n");
scanf("%d",&gun);
switch (Tip)
{
case 'A':
case 'a': tutar = (gun * 20) + (mesafe * 18); break; 
case 'B':
case 'b': tutar = (gun * 32) + (mesafe * 22); break;
case 'S':
case 's': tutar = (gun * 45) + (mesafe * 28); break;
case 'P':
case 'p': tutar = (gun * 51) + (mesafe * 36); break;
default: 
 printf("Yanlış araç tipi");
}
printf("Borcunuz = %f $",tutar);
return 0;
}