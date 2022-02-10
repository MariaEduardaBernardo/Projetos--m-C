//Saber se o ano digitado é bissexto. Saber o dia do ano.

#include <stdio.h>
#include <conio.h>
int main(){

//Inicio.
int dia,ano,mes,bi,pp,cont;
printf ("Digite o Dia (01 a 31):");
scanf ("%i",&dia);
printf ("Digite o Mes (01 a 12):");
scanf ("%i",&mes);
printf ("Digite o Ano:");
scanf ("%i",&ano);

{

//Dividi para saber se o ano é Bissexto.
  do{
    }while (ano<1900 || ano >2100);
    if (ano%4==0 && (ano%100!=0 || ano%400==0))
    printf("\nO ano eh bissexto.");
    else
    printf("\nO ano nao e bissexto.");
	cont =1;

	switch(mes){

//Meses que vão ate o dia 31.
		case 1:
		case 3: 
		case 5:
		case 7:
		case 8: 
		case 10:
		case 12:
		if (dia<1 && dia>31)
		cont = 1;
		
		break; 
//Meses que vão ate o dia 30
		case 4:
		case 6:
		case 9:
		case 11:
		if (dia<1 && dia>30)
		cont = 1;
		
		break;
//Meses que vão ate o dia 28 ou 29
		case 2:
		if (dia<1 && dia>28 || dia<1 && dia>29)
		cont = 1;
	
	default:
		cont =1;
}
while (cont = 1){
	
//Calcula do dia do ano
	if (mes>1) pp +=31;
	if (mes>2 && bi==1) pp +=29;
	if (mes>2 && bi==0) pp +=28;
	if (mes>3) pp+=31;
	if (mes>4) pp+=30;
	if (mes>5) pp+=31;
	if (mes>6) pp+=30;
	if (mes>7) pp+=31;
	if (mes>8) pp+=31;
	if (mes>9) pp+=30;
	if (mes>10) pp+=31;
	if (mes>11) pp+=30;
	if (mes>12) pp+=31;

	printf ("\nDia do ano de %d/%d/%d : %d",dia,mes,ano,(pp+dia));
	
	getch ();
	return 0;
}
}
}

