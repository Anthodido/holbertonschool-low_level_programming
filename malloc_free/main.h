#ifndef MAIN_H
#define MAIN_H

int _putchar(char c); /**je déclare la fonction _putchar*/
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
int add(int, int);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int **alloc_grid(int width, int height);
unsigned int _strspn(char *s, char *accept);
char *str_concat(char *s1, char *s2);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
void print_chessboard(char (*a)[8]);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int factorial(int n);
int _strlen_recursion(char *s);
void print_diagsums(int *a, int size);
void reverse_array(int *a, int n);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
void print_alphabet(void);
void print_alphabet_x10(void);
void jack_bauer(void);
void times_table(void);
void print_to_98(int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);

#endif