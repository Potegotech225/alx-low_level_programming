#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked to lists
 * @str: string - (malloc'ed strings)
 * @len: length of the strings
 * @next: pointed to next node
 *
 * Description: singly linked to lists node structures
 * for the Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
