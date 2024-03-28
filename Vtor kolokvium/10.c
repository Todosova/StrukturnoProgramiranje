/*Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).
Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез
ќе се испечатат поднизите од секој ред од датотеката составени
од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1
секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main()
{
    wtf();
    getchar();
    char niza[80],podniza[80];
    char z1,z2;
    int i,brojach=0,pocetok,kraj;
     FILE *f = fopen("podatoci.txt", "r");
     if(f==NULL)
     {
         printf ("Datotekata ne moze da se otvori.");
         return 0;
     }
    scanf("%c %c",&z1,&z2);
    while(fgets(niza,80,f)!=NULL)
    {
        for(i=0;i<strlen(niza);i++)
        {
            if(niza[i]==z1)
            {
                pocetok=i;
                break;
            }
        }
        for(i=strlen(niza);i>0;i--)
            if(niza[i]==z2)
            {
                kraj=i;
                break;
            }

        for(i=pocetok+1;i<kraj;i++)
        {

           printf("%c",niza[i]);

        }
        printf("\n");
}
    fclose(f);
}
