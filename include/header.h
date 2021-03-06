/*
** EPITECH PROJECT, 2018
** my_printf header
** File description:
** Main header for the my_printf project
*/

#include <stdarg.h>

typedef struct flags {
char alternate;
char zero_padding;
char left_adjusting;
char space;
char force_sign;
int field_width;
int precision;
} flags_t;

int my_printf(const char *format, ...);
int my_putstr(char const *str, int *i);
void my_putchar(char c);
char *my_nbr_to_str(long long int nb, flags_t *flags);
char *my_nbr_base(unsigned long long int nbr, char const *base, flags_t *flags);
char *my_showstr(char const *str, flags_t *flags);
char *my_putptr(void *ptr);
char *my_charstr(char c);
char *my_strdup(char *str, flags_t *flags);

char *my_strcpy(char const *dest, char *str);
long int my_strtol(const char *nptr, char **endptr);
int my_strlen(char *str);
int is_in_str(char *str, char c);

flags_t *get_flags(char **str, va_list ap);
char *conversion_specifier(va_list ap, char **str, int *i, flags_t *flags);
char *conversion_specifier2(va_list ap, char **str, int *i, flags_t *flags);
int print_format(va_list ap, char **str, int *i);
char *get_length_modifier(char **str);

char *get_boux(va_list ap, char *modifier, char **str, flags_t *flags);
char *get_id(va_list ap, char *modifier, flags_t *flags);
char *print_n(va_list ap, char *modifier, int *i);
void print_n2(va_list ap, char *modifier, int *i);

void alternate_form(char **str, char **result);
void field_width(char **result, flags_t *flags);
void zero_padding(char *str, char **result, flags_t *flags);
