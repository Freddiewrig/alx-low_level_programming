#ifndef LISTS_H
#define LISTS_H
/**
 * struct listint_s - Structure for a singly linked list node
 * @n: Integer value stored in the node
 * @next: Pointer to the next node in the list
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h);
#endif /* LISTS_H */
