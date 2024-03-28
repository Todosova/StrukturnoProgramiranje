/*
Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.

Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
За секој од нив да се испечати максималната цифра во посебен ред.
Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
Забелешка: ЗАБРАНЕТО е користење на глобални променливи.
*/
#include<stdio.h>
int rfunkcija(int broj,int max)
{
    int cifra;
    if(broj<10)
    {
        if(broj>max)
        {
            max=broj;
        }
        return max;
    }
    else
    {
        cifra=broj%10;
        if(cifra>max)
        {
            max=cifra;
        }
        return rfunkcija(broj/10,max);
    }
}
int main()
{
    int broj;
    while(scanf("%d",&broj))
    {
        printf("%d\n",rfunkcija(broj,0));
    }
    return 0;
}
