/*Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.

Input
99 500
Result
200
*/
#include<stdio.h>
int main()
{
    int m,n,i,cifra,broj,flag=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        broj=i;
        while(broj>0)
        {
            cifra=broj%10;
            if(cifra%2==0)
            {
                flag=1;
            }
        else
        {
            flag=0;
        }
            broj/=10;
        }
        if(flag==1)
        {
            printf("%d",i);
            break;
        }

    }
   if(flag==0)
    {
        printf("NE");

    }

    return 0;
}
