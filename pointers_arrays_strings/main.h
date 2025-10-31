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
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
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