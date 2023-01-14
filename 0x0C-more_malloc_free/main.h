#ifndef _MAIN_H_

#define _MAIN_H_



int _putchar(char c);

void *malloc_checked(unsigned int b);

int _checknum(char *argv[], int n);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

char *_initialize_array(char *ar, int lar);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int is_digit(char *s);

void errors(void);

int _strlen(char *s);



#endif

