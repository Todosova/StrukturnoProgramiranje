/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

Input
5
Result
Brojot ne e validen

*/
#include<stdio.h>
int main()
{
    int i,n,cifra,brojach=0,prevrten,broj;
    scanf("%d",&n);

    if(n<9)
    {
        printf("Brojot ne e validen");

    }

    else
    {
      for(i=n;i>=9;--i)
    {
        broj=i;
        prevrten=0;
        brojach=0;
        while(broj>0)
        {
            cifra=broj%10;
            prevrten=prevrten*10+cifra;
            broj/=10;
            brojach++;
        }

        if(prevrten%brojach==0 && i!=n  )
        {
            printf("%d",i);
            break;
        }
    }

    }
    return 0;
}
