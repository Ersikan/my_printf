/*
** EPITECH PROJECT, 2018
** my_printf header
** File description:
** Main header for the my_printf project
*/

#include <stdarg.h>

int my_printf(const char *format, ...);
int my_putstr(char const *str, int *i);
void my_putchar(char c);
char *my_nbr_to_str(long long int nb);
char *my_nbr_base(unsigned long long int nbr, char const *base);
char *my_showstr(char const *str);
char *my_putptr(void *ptr);
char *my_charstr(char c);
char *my_strcpy(char const *dest, char *str);

char *conversion_specifier(va_list ap, char **str, int *i);
void modifier(va_list ap, char **str, int *i);
char *get_length_modifier(char **str);

char *get_boux(va_list ap, char *modifier, char **str);
char *get_id(va_list ap, char *modifier);
void print_n(va_list ap, char *modifier, int *i);
void print_n2(va_list ap, char *modifier, int *i);
