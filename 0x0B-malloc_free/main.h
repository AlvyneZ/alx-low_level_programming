#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);

#endif /* MAIN_H */
