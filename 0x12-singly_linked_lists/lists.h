#ifndef _LISTS_H_
#define _LISTS_H_

#ifndef _STDDEF_H_
#define _STDDEF_H_
#include <stddef.h>
#endif _STDDEF_H_

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











#endif /* _LISTS_H_ */
