/*Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред,
знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Редовите во датотеката не се подолги од 100 знаци.

*/
#include <stdio.h>
#include <ctype.h>
void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wtf();
    FILE *f;
	char c;
	char a[100], t;
	int i, j, brojach=0, k=0;

    if( (f = fopen("input.txt", "r")) == NULL){
        printf("Datotekata %s ne moze da se otvori.", "dat.txt");
        return -1;
    }

    while( (c=fgetc(f)) != EOF){
        if(c=='\n'){

            for(i=0; i<brojach-1; i++){
                for(j=i+1; j<brojach; j++){
                    if(a[j]<a[i]){
                        t=a[i];
                        a[i]=a[j];
                        a[j]=t;
                    }
                }
            }

            printf("%d:", brojach);

            for(i=0; i<brojach; i++)
                printf("%c", a[i]);
            brojach=0;
            k=0;
            printf("\n");
        }

        else{
            if(c>='0'&&c<='9'){
                brojach++;
                a[k]=c;
                k++;
            }
        }
    }

    fclose(f);
    return 0;
}
