/*

Listing 3.1 

Universidad Nacional de Asuncion - Facultad Politecnica
Ingenieria en Informatica - Lenguaje de Programacion III
Autor: Belen E. Solalinde A.

Obtener identificadores de Procesos:

-  getpid  devuelve  el identificador de proceso del proceso actual.
-  getppid  devuelve  el identificador de proceso del padre del proceso actual.
*/

#include <stdio.h>
#include <unistd.h>

int main (){

	printf(" The process ID is %d \n", (int) getpid());
	printf(" The parent process ID is %d \n", (int) getppid());
	return 0;

}




