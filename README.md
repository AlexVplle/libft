# Libft - 42 School Project

A custom C library that recreates essential functions from the standard C library, plus additional utility functions. This project is part of the 42 School curriculum and serves as a foundation for future C projects.

## 📋 Table of Contents

- [About](#about)
- [Functions](#functions)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Project Structure](#project-structure)

## 🎯 About

Libft is a project that requires implementing your own version of some of the Standard C Library functions, as well as some additional functions that can be used later to build a library of useful functions for the rest of the program.

The project is divided into three parts:
1. **Part 1**: Re-code a set of the libc functions, as defined in their man pages
2. **Part 2**: Code a set of functions that are either not included in the libc, or included in a different form
3. **Bonus Part**: Implement functions to manipulate linked lists

## 📚 Functions

### Part 1 - Libc Functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_strlen` | Calculate string length |
| `ft_memset` | Fill memory with constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (handles overlap) |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Convert to uppercase |
| `ft_tolower` | Convert to lowercase |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character in string (reverse) |
| `ft_strncmp` | Compare strings up to n characters |
| `ft_memchr` | Locate byte in memory |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate substring in string |
| `ft_atoi` | Convert string to integer |
| `ft_calloc` | Allocate and zero memory |
| `ft_strdup` | Duplicate string |

### Part 2 - Additional Functions

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from string |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply function to each character |
| `ft_striteri` | Apply function to each character with index |
| `ft_putchar_fd` | Output character to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |
| `ft_putendl_fd` | Output string + newline to file descriptor |
| `ft_putnbr_fd` | Output number to file descriptor |

### Bonus Part - Linked List Functions

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list element |
| `ft_lstadd_front` | Add element at beginning of list |
| `ft_lstsize` | Count elements in list |
| `ft_lstlast` | Find last element of list |
| `ft_lstadd_back` | Add element at end of list |
| `ft_lstdelone` | Delete one element |
| `ft_lstclear` | Delete and free list |
| `ft_lstiter` | Apply function to each element |
| `ft_lstmap` | Create new list with function applied |

## 🚀 Installation

1. Clone the repository:
```bash
git clone https://github.com/yourusername/libft.git
cd libft
```

2. Compile the library:
```bash
make
```

3. To compile with bonus functions:
```bash
make bonus
```

## 💻 Usage

Include the header file in your C program:
```c
#include "libft.h"
```

Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c -L. -lft
```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, World!";
    char *upper_str;
    
    printf("Original: %s\n", str);
    printf("Length: %zu\n", ft_strlen(str));
    
    upper_str = ft_strmapi(str, (char (*)(unsigned int, char))ft_toupper);
    printf("Uppercase: %s\n", upper_str);
    
    free(upper_str);
    return (0);
}
```

## 🧪 Testing

The library has been tested with various test suites. You can test individual functions or use external testers:

```bash
# Compile and test
make
gcc test_file.c -L. -lft -o test
./test
```

Popular testing frameworks for libft:
- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester)

## 📁 Project Structure

```
libft/
├── Makefile           # Build configuration
├── libft.h           # Header file with function prototypes
├── ft_*.c            # Implementation files for each function
├── *_bonus.c         # Bonus functions (linked list operations)
└── README.md         # This file
```

## 🔧 Makefile Rules

- `make` or `make all`: Compile the library
- `make bonus`: Compile with bonus functions
- `make clean`: Remove object files
- `make fclean`: Remove object files and library
- `make re`: Clean and recompile

## 📝 Notes

- All functions are prefixed with `ft_` to avoid conflicts with standard library functions
- The library follows the 42 School coding standards (Norminette)
- Memory management is handled carefully to avoid leaks
- Functions are designed to handle edge cases and null pointers appropriately

---

*This project was completed as part of the 42 School curriculum.*