_printf

Description

This project is a simple version of the C printf function.

The function is called: _printf

It prints text and supports:

* %c for characters
* %s for strings
* %% for the percent sign
Prototype :
int _printf(const char *format, ...);

Example :

_printf("Hello %s\n", "Rakan");
_printf("Letter: %c\n", 'A');
_printf("Percent: %%\n");

Output:
Hello Rakan
Letter: A
Percent: %

Files

* main.h - function prototypes
* _printf.c - main printf function
* print_helpers.c - helper functions
* README.md - project information

Files:

* main.h - function prototypes
* _printf.c - main printf function
* print_helpers.c - helper functions
* README.md - project information

Authors:
Rakan jazzar & Abdullah  Almuqbali
