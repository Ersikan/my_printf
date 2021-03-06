/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** Duplicates a string
*/

#include <stdlib.h>
#include "header.h"

char *my_strdup(char *src, flags_t *flags)
{
    int length;
    char *duplicate;

    for (length = 0; src[length] != '\0'; length++);
    duplicate = malloc(sizeof(char) * length);
    for (int i = 0; i <= length; i++) {
        duplicate[i] = src[i];
    }
    if (flags->precision != -1 && flags->precision < length)
        duplicate[flags->precision] = '\0';
    return duplicate;
}
