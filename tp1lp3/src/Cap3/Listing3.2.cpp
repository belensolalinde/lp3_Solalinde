/*

Listing 3.2 

Universidad Nacional de Asuncion - Facultad Politecnica
Ingenieria en Informatica - Lenguaje de Programacion III
Autor: Belen E. Solalinde A.

Utilizando el System Call

*/

#include <stdlib.h>
int main () {
	int return_value;
	return_value = system("ls -l /");
	return return_value;
}
