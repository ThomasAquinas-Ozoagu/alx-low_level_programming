#ifndef _LISTS_H_
#define _LISTS_H_

#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */




/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#ifndef _PRINT_LIST_
#define _PRINT_LIST_
size_t print_list(const list_t *h);
#endif /* _PRINT_LIST_ */


#ifndef _LIST_LEN_
#define _LIST_LEN_
size_t list_len(const list_t *h);
#endif /* _LIST_LEN_ */

#ifndef _ADD_NODE_
#define _ADD_NODE_
list_t *add_node(list_t **head, const char *str);
#endif /* _ADD_NODE_ */









#endif /* _LISTS_H_ */
