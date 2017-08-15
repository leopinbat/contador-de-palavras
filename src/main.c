/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>

int main() {

  char c[2000];/* No caso de uma frase muito grande */
  int counter = 0, aux = 0, i; /* Ja considerando a ultima palavra */

  fgets(c, 2000, stdin); /*Lendo o parametro passado*/
  //printf("%s", c);


  for(i=0;c[i]!= '\0'; i++ ) {
        if((c[i] ==' ')&&((c[i +1] !=' ')&&(c[i+1] != '\n'))) {
        counter++;
        }
        if(c[i] == '\n'){
	counter++;
        }
	if(((c[i] == '.')||(c[i] == ',')||(c[i] == '-')) &&((c[i +1] !=' ')&&(c[i+1] != '\n')&&(c[i+1] != '.'))){
	aux = counter +1;
        }
	if(aux>counter){
        counter = aux;
        }
  }


  printf("%d\n", counter);
  return 0;
}
