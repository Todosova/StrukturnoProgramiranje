/*
Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри.
На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра
(заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот.
Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.
Пример.
Влез:
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a
Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    char red[100],posledenred[100];
    int i,brojach=0,flag,pocetok,kraj,brojachvkupno=0,max=0,prva,posledna;
	FILE *f = fopen("dat.txt", "r");
	if(f==NULL)
	{
	    printf("Ne moze da se otvori datotekata.");
	    return 0;
	}
	while(fgets(red,100,f)!=NULL)
	{
	      flag=1;
	    for(i=0;i<strlen(red);i++)
	    {

	    if(isdigit(red[i]))
	    {
	    if(flag)
	    {
	        brojach++;
	        pocetok=i;
	        flag=0;
	    }
	    else
	    {
	        brojach++;
	        kraj=i;
	    }
	    }

      brojachvkupno++;
	}

    if(brojach>1 && brojachvkupno>=max)
    {
        max=brojachvkupno;
        strcpy(posledenred,red);
        prva=pocetok;
        posledna=kraj;
    }
    brojachvkupno=0;
    brojach=0;
	}
    for(i=prva;i<=posledna;i++)
    {
        printf("%c",posledenred[i]);
    }
    fclose(f);
}
