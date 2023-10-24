#include "lists.h"

/**
* find_listint_loop - Finds the loop contained in
*                     a listint_t linked list.
* @head: A pointer to the head of the listint_t list.
*
* Return: If there is no loop - NULL.
*         Otherwise - the address of the node where the loop starts.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *cheetah, *monkey;

if (head == NULL || head->next == NULL)
return (NULL);

cheetah = head->next;
monkey = (head->next)->next;

while (monkey)
{
if (cheetah == monkey)
{
cheetah = head;

while (cheetah != monkey)
{
cheetah = cheetah->next;
monkey = monkey->next;
}

return (cheetah);
}

cheetah = cheetah->next;
monkey = (monkey->next)->next;
}

return (NULL);
}
