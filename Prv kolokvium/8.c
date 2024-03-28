/*Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.
Input
88 7
Result
86

*/
#include<stdio.h>
int main()
{
    int n,x,i,brojn,brojx,cifrax,cifran,flag;
    scanf("%d %d",&n,&x);
    for(i=n-1;i>=0;i--)
    {
        flag=1;
        brojn=i;
        while(brojn>0)
        {
            cifran=brojn%10;
            brojx=x;
            while(brojx>0)
            {
                cifrax=brojx%10;
                if(cifran==cifrax)
                {
                    flag=0;
                    break;
                }
                brojx/=10;
            }
            brojn/=10;
        }
        if(flag==1)
        {
            printf("%d",i);
            break;
        }
    }
}
