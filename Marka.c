#include <stdio.h>
/*1 = Renault
  2 = Mazda
  3 = Honda
  4 = Ford
  Bitirme 111 Benzin Satış tutarı
*/
int main()
{
int benzin,marka,mazda,Renault,Honda,Ford,mazdabenzintutar,Renaultbenzintutar,Hondabenzintutar,Fordbenzintutar,t;
float mesafe,tutar;
printf("araç markasını giriniz.\n");
scanf("%c",&marka);
while (t != 10)
{
switch (marka)
{
case 1:Renault++; Renaultbenzintutar += benzin; break;
case 2:mazda++; mazdabenzintutar += benzin; break;
case 3:Honda++; Hondabenzintutar += benzin; break;
case 4:Ford++; Fordbenzintutar += benzin ; break;
case 111: t = 10; break;

default: printf("Yanlış markası tipi");
}
}
printf("Renault araç sayısı:%d ve Renault araçların benzin bedeli:%d $",Renault,Renaultbenzintutar);
printf("Mazda araç sayısı:%d ve Mazda araçların benzin bedeli:%d $",mazda,mazdabenzintutar);
printf("Honda araç sayısı:%d ve Honda araçların benzin bedeli:%d $",Honda,Hondabenzintutar);
printf("Ford araç sayısı:%d ve Ford araçların benzin bedeli:%d $",Ford,Fordbenzintutar);
if (Renault > Honda && Renault > mazda && Renault > Ford )
{
  printf("Renault en fazla geldi.");
}
if (Renault < Honda && Honda > mazda && Honda > Ford )
{
  printf("Honda en fazla geldi.");
}
if (mazda > Honda && Renault < mazda && mazda > Ford )
{
  printf("Mazda en fazla geldi.");
}
if (Ford > Honda && Ford > Renault && Ford > mazda )
{
  printf("Ford en fazla geldi.");
}
if (Renaultbenzintutar > Hondabenzintutar && Renaultbenzintutar > mazdabenzintutar && Renaultbenzintutar > Fordbenzintutar )
{
  printf("Renault en fazla benzin aldı.");
}
if (Renaultbenzintutar < Hondabenzintutar && Hondabenzintutar > mazdabenzintutar && Hondabenzintutar > Fordbenzintutar )
{
  printf("Honda en fazla benzin aldı.");
}
if (mazdabenzintutar > Hondabenzintutar && Renaultbenzintutar < mazdabenzintutar && mazdabenzintutar > Fordbenzintutar )
{
  printf("Mazda en fazla benzin aldı.");
}
if (Fordbenzintutar > Hondabenzintutar && Fordbenzintutar > Renaultbenzintutar && Fordbenzintutar > mazdabenzintutar )
{
  printf("Ford en fazla benzin aldı.");
}
return 0;
}
