#ifndef MAIN_H_
#define MAIN_H_
#include <stddef.h>

int _putchar(char a);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
