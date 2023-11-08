#include <stddef.h>

#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */

#ifndef _PRINT_NAME_
#define _PRINT_NAME_
void print_name(char *name, void (*f)(char *));
#endif /* _PRINT_NAME_ */

#ifndef _ARRAY_ITERATOR_
void array_iterator(int *array, size_t size, void (*action)(int));
#define _ARRAY_ITERATOR_
#endif /* _ARRAY_ITERATOR_ */

#ifndef _INT_INDEX_
#define _INT_INDEX_
int int_index(int *array, int size, int (*cmp)(int));
#endif /* _INT_INDEX_ */



#endif /* _FUNCTION_POINTERS_H */
