#include <stdio.h>
int main()
{
char Tip;
int gun;
int mesafe,tutar;
printf("araç tipini giriniz.(Arazi için A,Binek için B,Station için S ve Spor araba için P tuşuna basınız):");
scanf("%c",&Tip);
printf("\nkaç km mesafe kat ettiniz:");
scanf("%d",&mesafe);
printf("\nkaç gün kullandınız :");
scanf("%d",&gun);
switch (Tip)
{
case 'A':
case 'a': tutar = (gun * 20) + (mesafe * 18); break; 
case 'B':
case 'b': tutar = (gun * 32) + (mesafe * 22); break; 
case 's': tutar = (gun * 45) + (mesafe * 28); break;
case 'P':
case 'p': tutar = (gun * 51) + (mesafe * 36); break; 
default: 
 printf("\nYanlış araç tipi");
}
printf("\nBorcunuz = %d $",tutar); 
return 0;
}
