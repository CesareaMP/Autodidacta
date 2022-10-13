#include "Pila.h"}
#include <stdlib.h>

void PILA::Add(int item)
{
	Nodepi* aux = new Nodepi();
	aux->data = item;
	aux->next = header;
	header = aux;
}

int PILA::Pop()
{
	Nodepi* aux = header;
	int value = aux->data;
	header = header->next;
	return value;
}
