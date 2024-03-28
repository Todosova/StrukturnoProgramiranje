/*Од тастатура се чита природен број N (N < 400).
Да се напише програма којашто формира квадратна матрица што ги содржи броевите од 1 до N по растечки редослед
на следниот начин: во првата колона во правец од горе надолу, па продолжува во втората колона од долу нагоре,
па продолжува во третата колона од горе надолу итн. Да се избере најмалата димензија на матрицата во која ќе ги
собере сите броеви до N. Доколку има преостанати празни места, тие да се пополнат со нули.
Формираната матрица да се запише во датотека "shema.txt".
Пример.
Влез
22
Излез во датотеката "shema.txt"
*/
#include <stdio.h>
#include<math.h>
void printFile() {
    FILE *f=fopen("shema.txt","r");
    char line[1000];
    while(!feof(f)){
        fgets(line,1000,f);
        if (feof(f))
            break;
        printf("%s",line);
    }
    fclose(f);
}

int main() {
    int n,i,j,a[100][100],broj,brojac=1;
    scanf("%d",&n);
    broj=ceil(sqrt(n));
    for(j=0;j<broj;j++){
		if(j%2==0){
	for(i=0;i<broj;i++){
		if(brojac<=n){
		a[i][j]=brojac;
		brojac++;
	}
	else{
			a[i][j]=0;
			brojac++;
	}
}
}
if(j%2!=0){
for(i=broj-1;i>=0;i--){

	if(brojac<=n){
		a[i][j]=brojac;
		brojac++;
	}
	else{
			a[i][j]=0;
			brojac++;
	}
}
}
}
FILE *pok = fopen("shema.txt", "w");
for(i=0;i<broj;i++){
	for(j=0;j<broj;j++){
		fprintf(pok,"%d ",a[i][j]);
	}
	fprintf(pok,"\n");
}

fclose(pok);
    printFile();
    return 0;
}
