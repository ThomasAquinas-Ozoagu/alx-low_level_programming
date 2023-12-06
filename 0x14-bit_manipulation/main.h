#ifndef _MAIN_H_
#define _MAIN_H_

#ifndef _PUTCHAR_
#define _PUTCHAR_
int _putchar(char c);
#endif /* _PUTCHAR_ */

#ifndef _BINARY_TO_UNIT_
#define _BINARY_TO_UNIT_
unsigned int binary_to_uint(const char *b);
#endif /* _BINARY_TO_UNIT_ */

#ifndef _PRINT_BINARY_
#define _PRINT_BINARY_
void print_binary(unsigned long int n);
#endif /* _PRINT_BINARY_ */

#ifndef _GET_BIT_
#define _GET_BIT_
int get_bit(unsigned long int n, unsigned int index);
#endif /* _GET_BIT_ */

#ifndef _SET_BIT_
#define _SET_BIT_
int set_bit(unsigned long int *n, unsigned int index);
#endif /* _SET_BIT_ */

#ifndef _CLEAR_BIT_
#define _CLEAR_BIT_
int clear_bit(unsigned long int *n, unsigned int index);
#endif /* _CLEAR_BIT_ */




#endif /* _MAIN_H_ */
