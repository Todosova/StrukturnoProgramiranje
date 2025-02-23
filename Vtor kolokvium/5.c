/*Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.
На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2)
додека третиот број е коефициентот (реален број).
Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето.
Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

*/

#include <stdio.h>
#include<string.h>
#include<ctype.h>
// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
	FILE *f = fopen("livce.txt", "r");
	if(f==NULL)
	{
	    printf("Ne moze da se otvori datotekata.");
	    return 0;
	}
    int tip,maxt=0;
    float uplata,koeficient,maxk=-999999;
    char shifra[10],maxshifra[10];
    fscanf(f,"%f",&uplata);
    while(fscanf(f,"%s %d %f",shifra,&tip,&koeficient)!=EOF)
    {
        uplata*=koeficient;
        if(koeficient>maxk)
        {
            maxk=koeficient;
            strcpy(maxshifra,shifra);
            maxt=tip;
        }
    }
    printf("%s %d %.2f\n",maxshifra,maxt,maxk);
    printf("%.2f",uplata);
    fclose(f);
	return 0;

}
