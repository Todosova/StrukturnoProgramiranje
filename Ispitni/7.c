/*Од стандарден влез се чита природен број N (N <= 100), како и низа a[ ] од N цели броеви.
Да се напише функција void premesti(а, n) која го преместува секој пронајден негативен број на крајот на низата.
По преместувањето редоследот на позитивните броеви треба да остане ист како и во оригиналната низа, а истото важи и за редоследот на негативните.
Нaпишете програма која ќе ја повика функцијата premesti за внесената низа a[ ] и потоа ќе ја испечати новодобиената низа.

*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
void promeni(int niza[],int n)
{
    int i,j=0,k=0,pozitivni[100],negativni[100],poz=0,neg=0;
    for(i=0;i<n;i++)
    {
        if(niza[i]>=0)
        {
            pozitivni[j++]=niza[i];
            poz++;
        }
        else
        {
            negativni[k++]=niza[i];
            neg++;
        }
    }
    for(i=0;i<poz;i++)
    {
        printf("%d ",pozitivni[i]);
    }
    for(i=0;i<neg;i++)
    {
        printf("%d ",negativni[i]);
    }
}
int main()
{
    int n,niza[100];
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&niza[i]);
    }
    promeni(niza,n);
}
