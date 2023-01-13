#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_memset(char *s, char b, unsigned int n);

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
