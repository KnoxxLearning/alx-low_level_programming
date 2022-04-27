#ifndef MAIN_H
#define MAIN_H
/**
 * file: main.h
 *Desc: "The prototypes for all the functions that we'll be using for 0x06-pointers_arrays_strings"
 */
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *str);
#endif
