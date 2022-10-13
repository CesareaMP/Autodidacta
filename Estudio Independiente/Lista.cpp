#include "Lista.h"

void Lista::Add(int item)
{
	Nodeli* aux = new Nodeli();
	aux->data = item;
	aux->next = header;
	header = aux;
}

int Lista::get_all_items(int index)
{
	Nodeli* aux = header;
	while (index!=0)
	{
		aux = aux->next;
		index--;
	}
	return aux->data;
}
