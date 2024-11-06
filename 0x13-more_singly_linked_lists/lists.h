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

#ifndef _LISTINT_LEN_
#define _LISTINT_LEN__
size_t listint_len(const listint_t *h);
#endif /* _LISTINT_LEN_ */

#ifndef _ADD_NODEINT_
#define _ADD_NODEINT_
listint_t *add_nodeint(listint_t **head, const int n);
#endif /* _ADD_NODEINT_ */


#ifndef _ADD_NODEINT_END_
#define _ADD_NODEINT_END_
listint_t *add_nodeint_end(listint_t **head, const int n);
#endif /* _ADD_NODEINT_END_ */


#ifndef _FREE_LISTINT_
#define _FREE_LISTINT_
void free_listint(listint_t *head);
#endif /* _FREE_LISTINT_ */

#ifndef _FREE_LISTINT2_
#define _FREE_LISTINT2_
void free_listint2(listint_t **head);
#endif /* _FREE_LISTINT2_ */

#ifndef _POP_LISTINT_
#define _POP_LISTINT_
int pop_listint(listint_t **head);
#endif /* _POP_LISTINT_ */

#ifndef _GET_NODEINT_AT_INDEX_
#define _GET_NODEINT_AT_INDEX_
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif /* _GET_NODEINT_AT_INDEX_ */



#endif /* _LISTS_H_ */
