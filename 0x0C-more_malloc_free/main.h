#ifndef _MAIN_H_
#define _MAIN_H_

#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */

#ifndef _MALLOC_CHECKED_
#ifndef _MALLOC_CHECKED_
void *malloc_checked(unsigned int b);
#endif /* _MALLOC_CHECKED_*/

#ifndef _STRING_NCONCAT_
#define _STRING_NCONCAT_
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /* _STRING_NCONCAT_ */

#ifndef _CALLOC_
#define _CALLOC_
void *_calloc(unsigned int nmemb, unsigned int size);
#endif /* _CALLOC_ */

#ifndef _ARRAY_RANGE_
#define _ARRAY_RANGE_
int *array_range(int min, int max);
#endif /* _ARRAY_RANGE_ */

#ifndef _REALLOC_
#define _REALLOC_
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif /* _REALLOC_ */

#endif /* _MAIN_H_ */
