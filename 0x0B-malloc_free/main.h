#ifndef _MAIN_H_
#define _MAIN_H_


#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */

#ifndef _CREATE_ARRAY_
#define _CREATE_ARRAY_
char *create_array(unsigned int size, char c);
#endif /* _CREATE_ARRAY_ */

#ifndef _STRDUP_
#define _STRDUP_
char *_strdup(char *str);
#endif /* _STRDUP_ */

#ifndef _STR_CONCAT_
#define _STR_CONCAT_
char *str_concat(char *s1, char *s2);
#endif /* _STR_CONCAT_ */

#ifndef _ALLOC_GRID_
#define _ALLOC_GRID_
int **alloc_grid(int width, int height);
#endif /* _ALLOC_GRID_ */

#ifndef _FREE_GRID_
#define _FREE_GRID_
void free_grid(int **grid, int height);
#endif /* _FREE_GRID_ */

#ifndef _ARGSTOSTR_
#define _ARGSTOSTR_
char *argstostr(int ac, char **av);
#endif /* _ARGSTOSTR_ */

#endif /* _MAIN_H_ */
