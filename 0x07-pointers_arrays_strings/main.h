#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <math.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *strchr(char *s, char c);
unsigned int_spn(char *s, char *accept);
char *_strbrk(car *s, char *accept);
char *_strstr(charf *haystack, char *needle);
char print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
