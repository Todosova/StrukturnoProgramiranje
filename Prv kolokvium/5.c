/*Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број,
во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)


Input
12345678 1357
Result
PAREN
*/

#include<stdio.h>
int main()
{
    int a,b,tmp,cifra,brojb,broja,flag=0;
    scanf("%d %d",&a,&b);
    if(a<=0 || b<=0)
    {
        printf("Invalid input");
    }
    else
    {
        if(a<b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
        broja=a;
        brojb=b;
        while(brojb>0)
        {
            cifra=brojb%10;
            if(cifra==broja/10%10)
            {
                flag=1;
            }
            broja/=100;
            brojb/=10;

        if(flag==1)
        {
            printf("PAREN");
            break;
        }
        else
        {
            printf("NE");
            break;
        }
        }
    }
}
