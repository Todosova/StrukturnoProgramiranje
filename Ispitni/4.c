/*Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи.
Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k
се заменуваат со минималната вредност од матрицата А.

Новодобиената матрица да се запише во датотека "matrica.txt".*/

#include <stdio.h>
void printFile() {
    FILE *f=fopen("matrica.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    int i,j,n,m,r,k,mat[100][100],min=999999;
    scanf("%d %d",&m,&n);
    scanf("%d %d",&r,&k);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(min>mat[i][j])
            {
                min=mat[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<k;j++)
        {
            mat[i][j]=min;
        }
    }

    FILE *f=fopen("matrica.txt","w");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            fprintf(f,"%d ",mat[i][j]);
        }
        fprintf(f,"\n");
    }
    fclose(f);
    printFile();
    return 0;
}
