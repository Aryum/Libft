# Libft

Recreation of a range of standard C library functions along with several custom utility functions used throughout later projects.

## About

Libft is a personal implementation of core C standard library functions (`string.h`, `ctype.h`, `stdlib.h`) plus a set of additional helper functions — memory utilities, linked lists, and file descriptor output helpers.

The main goal isn't just making the functions work, but making them behave *exactly* like their originals: same edge cases, same return values, same memory-safety guarantees (no leaks, no invalid reads/writes).

## Compilation

```bash
make        # compiles libft.a
make clean  # removes object files
make fclean # removes object files and the library
make re     # recompiles everything from scratch
```

## Usage

Include the header and link the library when compiling your project:

```bash
gcc your_program.c -I./libft -L./libft -lft -o your_program
```

```c
#include "libft.h"
```

## Functions

### Characters
| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is a letter |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is a letter or a digit |
| `ft_isascii` | Checks if a character is a valid ASCII character |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` | Converts a letter to uppercase |
| `ft_tolower` | Converts a letter to lowercase |

### Strings
| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string |
| `ft_strlcpy` | Copies a string into another buffer (no allocation) |
| `ft_strlcat` | Concatenates two strings into a buffer (no allocation) |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strnstr` | Finds the first occurrence of a substring within a bounded length |
| `ft_strdup` | Duplicates a string into newly allocated memory |
| `ft_substr` | Extracts a substring into newly allocated memory |
| `ft_strjoin` | Joins two strings into newly allocated memory |
| `ft_strtrim` | Trims a set of characters from both ends of a string, into new memory |
| `ft_split` | Splits a string into an array of strings by a delimiter |
| `ft_strmapi` | Applies a function to each character of a string, returning a new string |
| `ft_striteri` | Applies a function to each character of a string in place |
| `ft_itoa` | Converts an integer to a newly allocated string |
| `ft_atoi` | Converts a string to an integer |

### Memory
| Function | Description |
|---|---|
| `ft_memset` | Fills a block of memory with a given value |
| `ft_bzero` | Zeroes out a block of memory |
| `ft_memcmp` | Compares two blocks of memory |
| `ft_memchr` | Searches a block of memory for a value |
| `ft_memcpy` | Copies memory from one location to another |
| `ft_memmove` | Copies memory between possibly overlapping locations |
| `ft_calloc` | Allocates zero-initialized memory |

### File descriptors
| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string to a file descriptor, followed by a newline |
| `ft_putnbr_fd` | Converts an integer to a string and writes it to a file descriptor |

### Linked lists
| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node to the front of the list |
| `ft_lstadd_back` | Adds a node to the back of the list |
| `ft_lstlast` | Returns the last node of the list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node's content |
| `ft_lstdelone` | Deletes a single node |
| `ft_lstclear` | Deletes and frees the entire list |

*This project was done as part of the 42 curriculum.*
