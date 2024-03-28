/*Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
што означува колку броеви следуваат по него во тој ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот
со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита 0.

*/
#include <stdio.h>
#include <string.h>
#define MAX 100

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int main()
{

    wtf();
    FILE *folder=fopen("broevi.txt","r");
    int n,najznacajnacifra=0,najgolembroj;
     for(;1;)
     {
         fscanf(folder,"%d",&n);
       if(n==0)
       {
           break;
       }
        najznacajnacifra=0;
        for(int i=0;i<n;i++){
            int m,cifra;
            fscanf(folder,"%d",&m);
           int j=m;
            while(j>0)
            {
                cifra=j%10;
                j/=10;
            }
            //for(int j=m;j>0;j/=10){
           //     cifra=j%10;
           // }
            if(cifra>najznacajnacifra){
                najznacajnacifra=cifra;
                najgolembroj=m;
            }
        }

       printf("%d\n",najgolembroj);
     }


}
