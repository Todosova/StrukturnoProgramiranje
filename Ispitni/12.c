/*Во рамките на текстуална датотека matrica.txt се сместени елементите од една матрица (A), составена од природни броеви. Во првиот ред од датотеката се запишани бројот на редици N и бројот на колони M на матрицата (N, M < 100). Потоа, во секој ред од датотеката се запишани елементите од соодветната редица на матрицата.
За секоја редица, да се испечати индексот на редицата и бројот на штосни броеви во таа редица во формат indeks_na_redica: broj_na_stosni_broevi_vo_taa_redica (види тест пример).
Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.
Помош:

Штосен елемент: парноста на елементот Aij е иста со парноста на i + j

- ако i=11, j=21, а елементот Aij има вредност 14, тогаш тој е штосен број бидејќи 11 + 21 = 32 што е парен број, а и 14 е исто така парен број*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>

void wtf() {
    FILE *f = fopen("matrica.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f = fopen("matrica.txt", "r");
    if(f==NULL)
    {
        printf("Ne moze da se otvori datotekata");
        return -1;
    }
    int i,j,n,m,mat[100][100],brojredica,stosni=0;
    fscanf(f,"%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            fscanf(f,"%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        stosni=0;
        for(j=0;j<m;j++)
        {
            if(mat[i][j]%2==0 && (i+j)%2==0)
            {
                stosni++;
            }
            if(mat[i][j]%2!=0 && (i+j)%2!=0)
            {
                stosni++;
            }
        }
        printf("%d: %d\n",i,stosni);
    }
    fclose(f);
    return 0;
}



