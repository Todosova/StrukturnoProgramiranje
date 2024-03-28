/*Дадена е текстуална датотека text.txt.
Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката. Појавата на големи и мали букви да се игнорира.
Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања на
паровите самогласки.
Пример: за датотеката:
IO is short for Input Output
medioio medIo song
излез:

io
ou
io
oi
io
io
6
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int main() {

  writeToFile();
   FILE *f = fopen("text.txt", "r");
   if(f==NULL)
   {
       printf("Datotekata ne moze da se otvori.");
       return -1;
   }
   char c,predhodna, bukva;
   int brojach=0,flag=1;
   while((bukva=fgetc(f))!=EOF)
   {
    if(flag)
    {
        predhodna=bukva;
        flag=0;
    }
    bukva=tolower(bukva);
    if(predhodna=='a' || predhodna=='e' || predhodna=='i' || predhodna=='o' || predhodna=='u' )
    {
        if(bukva=='a' || bukva=='e' || bukva=='i' || bukva=='o' || bukva=='u' )
        {
            printf("%c%c\n",predhodna,bukva);
            brojach++;
        }
    }
    predhodna=bukva;
   }
  printf("%d",brojach);
    fclose(f);


  return 0;
}

