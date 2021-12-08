/*
 * aufgabe_5_4.c
 *
 *  Created on: 07.12.2021
 *      Author: Marlon
 */

#include <stdio.h>
#include <stdlib.h>

void einlesen_start_ende(int*, int*);
void dreieckstausch(int*, int*);
int pot3(int*);

int main(void) {
	setbuf(stdout, NULL);
	int start, ende;
	char redo;

	do {
		einlesen_start_ende(&start, &ende);

		if(start > ende)
			dreieckstausch(&start, &ende);

		for(int i = start; i <= ende; i++)
			printf("(%i)³ = %i \n", i, pot3(&i));

		fflush(stdin);
		printf("\nWollen Sie erneut etwas berechnen? \n");
		printf("(j/J): Ja \n(n/N): Nein \n\n");
		scanf("%c", &redo);

	} while(redo == 'j' || redo == 'J');

	return(0);
}

void einlesen_start_ende(int *einlesen_start, int *einlesen_ende) {
	printf("Geben Sie einen ganzzahligen Startwert ein: ");
	scanf("%i", einlesen_start);

	printf("Geben Sie nun einen ganzzahligen Endwert ein: ");
	scanf("%i", einlesen_ende);
}

void dreieckstausch(int *ptr_start, int *ptr_ende) {
	int buffer;

	buffer = *ptr_start;
	*ptr_start = *ptr_ende;
	*ptr_ende = buffer;
}

int pot3(int *ptr_i) {
	int rueckgabe;

	rueckgabe = (*ptr_i) * (*ptr_i) * (*ptr_i);

	return rueckgabe;
}
