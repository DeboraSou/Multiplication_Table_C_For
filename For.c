#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]){
    setlocale (LC_ALL, "Portuguese");
	
	int x, n; /*n= número fixo; x= número escolhido.*/
	
	system ("color 0C");
	printf ("\n\t\t\t\tInsira o número que deseja saber a tabuada: \n");
	scanf ("%d", &x);
	system ("cls");
	
	system ("color 0A");
	printf ("\nTabuada do %d\n", x);
	
	for (n=0; n <=10; n++){	
	printf ("\n%d x %d = %d", x, n, x*n);
	}
	
	getch ();
	
	system ("cls");
	system ("color 0E");
    
	getch ();	
	return 0;
}
