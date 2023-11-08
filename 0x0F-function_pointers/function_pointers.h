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

#endif /* _FUNCTION_POINTERS_H */
