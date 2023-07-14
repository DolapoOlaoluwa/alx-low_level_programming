#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *copychar(char *s1, char c, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void print_array(char *a, int nb);
void *mul_array(char *a1, int len1, char a2, char *a3, int lena);
void *_calloc(unsigned int nmemb, unsigned int size);
int _isNumber(char *argv);
int _atoi_digit(char x);


#endif /*MAIN_H*/
