#include <stdio.h>
#include <iostream>
using namespace std;

/* En esta funcion se le da la bienvenida al usuario*/
char saludo(){
	printf("\n Hola, Bienvenido al sistema SISA de Casita Azul \n");
	printf("\n A continuacion digite numero de cedula para poder ingresar al sistema  \n");
	printf("\n (Numeros de cedula registrados: 1234, 5432 y 8901)  \n");
}

float promedio(int prom){
	float notasEstudiantes [3][4] = {
	{4.9,4.3,4.5,4.6},
	{1.2,2.7,3.1,2.2},
	{3.5,3.7,4.1,4.9}};
	float suma = 0; /*Se declara un contador que llevará la suma en cada vuelta del ciclo for */
	if(prom == 1234){		
			for(int j = 0; j < 4;++j){
			suma += notasEstudiantes[0][j]; /* el array va recorriendo cada una de las notas del estudiante
			y las va almacenando en el contador para llevar una cuenta que al final nos ayudará a sacar
			el promedio */
			
		}
				}
			
		/* el parametro prom trae consigo la identificacion que escribió el usuario para que la computadora
		sepa siempre de que estudiante se está hablando y asi nos de los datos correctos*/
			else if(prom == 5432){
			for(int j = 0; j < 4;++j){
			suma += notasEstudiantes[1][j];
			
		}
				}
				
				
			else if(prom == 8901){
				for(int j = 0; j < 4;++j){
			suma += notasEstudiantes[2][j];
			
		}
			}
	return(suma);
	
}


desicion(int a){
	float notasEstudiantes [3][4] /*se declaran las medidas del array, teniendo en cuanto que el 3 hace referencia 
	a los arrays dentro del array y el 4 a los valores que tiene cada array */ = {
	{4.9,4.3,4.5,4.6},
	{1.2,2.7,3.1,2.2},
	{3.5,3.7,4.1,4.9}};/* hacemos un array con las notas de los estudiantes */
	int consult;
	while(true){
		printf(" \n ¿Que deseas consultar? \n");
		printf(" \n	Escribe 1 para consultar tus notas  \n");
		printf(" \n	Escribe 2 para consultar el promedio de tus notas  \n");
		printf(" \n	Escribe 3 para salir  \n");
		scanf("%d",&consult);
		if(consult == 1){
			if(a == 1234){
			printf(" \n	Tus notas son: \n");		
			for(int j = 0; j < 4;++j){
			/*El ciclo for nos ayuda a recorrer las notas de solo UN usuario, ya que el primer
			valor es estatico en posicion 0, por lo tanto
			solo se moverá en el estudiante 0 pero el segundo valor va a recorrer del 0 al 3, lo que hará cambiar
			de posicion y asi obtener las notas de el estudiante pedido por el usuario */
			std::cout<< notasEstudiantes[0][j]<<" " <<std::endl ;}
				}
			
	
			else if(a == 5432){
			printf(" \n	Tus notas son: \n");		
			for(int j = 0; j < 4;++j){
			
			std::cout<< notasEstudiantes[1][j]<<" " <<std::endl ;}
			/* En este caso se observa que la posicion estatica es el 1, lo que hará seleccionar al segundo estudiante.
			Recordemos que en un array, a la hora de encontrar una posicion, se comienza desde la posicion 0*/
				}
			else if(a == 8901){
				printf(" \n	Tus notas son: \n");		
			for(int j = 0; j < 4;++j){
			
			std::cout<< notasEstudiantes[2][j]<<" " <<std::endl ;}
			}
		}
			
		else if(consult == 2){
			float result = promedio(a);
			printf("\n Tu promedio es: %0.2f \n", result/4);
		}
		else if(consult == 3){
			printf("\n Hasta luego :) ");
			break;
		}
		else{
			printf("\n	Opcion NO valida, intenta de nuevo  \n");
			continue;}}}


/* En esta funcion se le pide al usuario su numero de identificacion*/
informacion(){
	int codigo;
	while(true){
		cout<<"Introduce el numero de cedula: \n" <<endl; /*el cout actua como un impresor de texto */
		cin>> codigo; /* el cin actua como un input */
		printf("\n Tu numero de cedula fue: %d \n",codigo);
		if (codigo == 1234){
			cout<<"\n Bienvenid@ Alejandro \n";
			desicion(codigo); /*se le manda como parametro el numero de identificacion para que sea reconocido */
			break;
		}
		else if(codigo == 5432){
			cout<<"\n Bienvenid@ Sara \n";
			desicion(codigo);
			break;
		}
		else if(codigo == 8901){
			cout<<"\n Bienvenid@ Daniela \n";
			desicion(codigo);
			break;
		}
		else{
			cout<<"\n Lo siento, no te reconocemos, intenta de nuevo \n";
			continue;
		}

	}
}


/* En la función principal se empieza a correr el codigo, empezando por saludo*/
int main(){
	saludo();
	informacion();
}


