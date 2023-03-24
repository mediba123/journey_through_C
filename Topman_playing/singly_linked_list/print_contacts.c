#include "lists.h"

void printc(contact *head)
{
	contact *p = head;

	if(!head)
	{
		printf("Can not print: not a contact list!!\n");
		return;
	}
	else if (head == NULL)
	{
		printf("Contact list empty!\n");
		return;
	}
	printf("\nMY CONTACTS\n- - - - - -\n");
	while (p != NULL)
	{
		printf("%s\n%s %d\n\n", p->name, p->code, p->no);
		p = p->next;
	}
}
