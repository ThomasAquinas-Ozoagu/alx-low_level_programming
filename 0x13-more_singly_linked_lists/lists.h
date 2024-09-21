#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */




#ifndef _PRINT_LISTINT_
#define _PRINT_LISTINT_
size_t print_listint(const listint_t *h);
#endif /* _PRINT_LISTINT_ */










#endif /* _LISTS_H_ */