# Libft
First library created at the 42 course, where we are supposed to replicate various functions already present in some C libraries and other that might help in future projects.

## Functions present
- **Characters**
  - ft_isalpha _(check if its a letter)_
  - ft_isdigit _(check if its a number)_
  - ft_isalnum _(check if its a letter or number)_
  - ft_isascii _(check if its a valid ascii character)_
  - ft_isprint _(check if its a printable character)_
  - ft_toupper _(transforms letter in upper case)_ 
  - ft_tolower _(transforms letter in lower case)_

- **String**
  - ft_strlcat _(concatenates strings)_
  - ft_strlen _(get string length)_
  - ft_strlcpy _(copy a string to another no allocation)_
  - ft_strncmp _(compare strings until n)_
  - ft_strchr _(locates char in begining of string and return string from there)_
  - ft_strrchr _(locates char in end of string and return string from there)_
  - ft_strnstr _(locates a string in another and return string from there)_
  - ft_strdup _(copy string to another in new allocated memory)_
  - ft_substr _(copy part of string to another in new allocated memory)_
  - ft_strjoin _(joins two string in new allocated memory)_
  - ft_strtrim _(removes set of characters in string in new allocated memory)_
  - ft_split _(divides a string by the caracter given)_
  - ft_strmapi _(applies function through the string in new allocated memory)_
  - ft_striteri _(applies function through the string)_
  - ft_itoa _(transforms int to string)_
  - ft_atoi _(transforms string to int)_

- **Memory**
  - ft_memset _(sets x bytes in pointed memory to value)_
  - ft_bzero _(sets x bytes in pointed memory to 0)_
  - ft_memcmp _(compares memory in two pointers)_
  - ft_memchr _(searches memory for value)_
  - ft_memcpy _(copies memory from one pointer to another)_
  - ft_memmove _(moves memory from one pointer to another)_
  - ft_calloc _(allocates new memory and initiates it to 0)_

- **File descriptors**
  - ft_putchar_fd _(puts character in file descriptor)_
  - ft_putstr_fd _(puts string in file descriptor)_
  - ft_putendl_fd _(puts string in file descriptor with new line in the end)_
  - ft_putnbr_fd _(converts int to string and puts it into file descriptor)_

- **Linked Lists**
  - ft_lstnew _(creates new list node)_
  - ft_lstmap _(duplicates a list and applies a function over it)_
  - ft_lstlast _(gets last lst node)_
  - ft_lstiter _(iterates through a list and applies a function over it)_
  - ft_lstdelone _(delete a node)_
  - ft_lstadd_back _(adds node to back of the list)_
  - ft_lstadd_front _(adds node to beggining of the list)_
  - ft_lstclear _(free entire list)_
