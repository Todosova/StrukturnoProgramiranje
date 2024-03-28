/*Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви,
цифри и специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
(се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак.
Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
Влез:
9
a!bcdedcb!a
Kfd?vsvv98_89vvsv?dfK
Ccsvsdvdfv
342425vbbcb
352!2353696969625
gdg??dfg!!
5336346644747
8338736767867
12344321
Излез:
Kfd?vsvv98_89vvsv?dfK

*/
#include<stdio.h>
#include<string.h>
int znak(char *niza)
{
    int i,n=strlen(niza),brojach=0;
    for(i=0;i<n;i++)
    {
        if(ispunct(*(niza+i)))
        {
            return 1;
        }
    }
    return 0;

}
int palindrom(char *niza)
{
    int i,n=strlen(niza);
        if(znak(niza))
        {
           for(i=0;i<n;i++)
            {
                if(*(niza+i)!=*(niza+n-i-1))
                {
                    return 0;
                }
            }
return 1;
        }

}
int main()
{
    char i,niza[100],niza2[100];
    int n,brojach=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&niza);
       if(palindrom(niza))
        {
            brojach=1;
            if(max<strlen(niza))
            {
                max=strlen(niza);
                strcpy(niza2,niza);
            }
        }
    }
        if(brojach)
        {
            printf("%s",niza2);
        }
        else
        {
            printf("Nema!");
        }
    return 0;
}

