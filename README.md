*This project has been created as part of the 42 curriculum by elsalama.*
 
# Libft 
 
## Description
 
**Libft** is the first project of the 42 curriculum. The goal is to build a custom static C library (`libft.a`) from scratch by reimplementing essential standard C library (`libc`) functions, plus additional utility functions and linked-list helpers. Along the way, the project builds a solid understanding of memory allocation, pointer arithmetic, data structures, and edge-case handling in C.
 
The resulting `libft.a` archive is a personal toolkit that will be reused and expanded in future 42 C projects.
 
---
 
## Library Overview
 
The library contains **43 functions** written in C according to the 42 Norm, compiled with `-Wall -Wextra -Werror` using `cc`, with no global variables and `static` helpers where needed. The archive is created with `ar` at the root of the repository. The functions are organized in three parts.
 
### Part 1 — Libc functions
 
Reimplementations of standard functions with the same prototypes and behavior as their man pages, prefixed with `ft_`.
 
| Category | Function | Description |
| :--- | :--- | :--- |
| Character checks | `ft_isalpha` | Returns 1 if the character is alphabetic, 0 otherwise. |
| | `ft_isdigit` | Returns 1 if the character is a digit (`0`–`9`), 0 otherwise. |
| | `ft_isalnum` | Returns 1 if the character is alphanumeric, 0 otherwise. |
| | `ft_isascii` | Returns 1 if the value fits in the 7-bit ASCII set, 0 otherwise. |
| | `ft_isprint` | Returns 1 if the character is printable (including space), 0 otherwise. |
| Case conversion | `ft_toupper` | Converts a lowercase letter to uppercase. |
| | `ft_tolower` | Converts an uppercase letter to lowercase. |
| Memory | `ft_memset` | Fills the first `n` bytes of a memory area with a constant byte. |
| | `ft_bzero` | Sets the first `n` bytes of a memory area to zero. |
| | `ft_memcpy` | Copies `n` bytes from `src` to `dest` (non-overlapping areas). |
| | `ft_memmove` | Copies `n` bytes from `src` to `dest`, handling overlapping areas safely. |
| | `ft_memchr` | Scans the first `n` bytes of memory for the first occurrence of a byte. |
| | `ft_memcmp` | Compares the first `n` bytes of two memory areas. |
| Strings | `ft_strlen` | Returns the length of a string. |
| | `ft_strlcpy` | Size-bounded string copy; NUL-terminates when `size > 0`. |
| | `ft_strlcat` | Size-bounded string concatenation. |
| | `ft_strchr` | Locates the first occurrence of a character in a string. |
| | `ft_strrchr` | Locates the last occurrence of a character in a string. |
| | `ft_strncmp` | Compares up to `n` characters of two strings. |
| | `ft_strnstr` | Locates a substring within the first `len` characters of a string. |
| Conversion & heap | `ft_atoi` | Converts the initial portion of a string to an `int`. |
| | `ft_calloc` | Allocates zero-initialized memory for an array, with overflow protection. |
| | `ft_strdup` | Allocates and returns a duplicate of a string. |
 
### Part 2 — Additional functions
 
Functions that are not in `libc` or that exist in a different form.
 
| Function | Prototype | Description |
| :--- | :--- | :--- |
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a newly allocated substring of `s` starting at `start`, of at most `len` characters. |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2);` | Returns a newly allocated string that is the concatenation of `s1` and `s2`. |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set);` | Returns a copy of `s1` with characters from `set` removed from the beginning and end. |
| `ft_split` | `char **ft_split(char const *s, char c);` | Splits `s` using delimiter `c` into a NULL-terminated array of newly allocated strings. |
| `ft_itoa` | `char *ft_itoa(int n);` | Returns a newly allocated string representing `n` (negatives and `INT_MIN` included). |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies `f` to each character (with its index) and returns the results as a new string. |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *));` | Applies `f` to each character of `s` in place, passing its index and address. |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Writes a character to the given file descriptor. |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd);` | Writes a string to the given file descriptor. |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Writes a string followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd);` | Writes an integer to the given file descriptor. |
 
### Part 3 — Linked list functions
 
Functions to create, traverse, modify, and free singly linked lists using the `t_list` structure defined in `libft.h`:
 
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```
 
| Function | Prototype | Description |
| :--- | :--- | :--- |
| `ft_lstnew` | `t_list *ft_lstnew(void *content);` | Allocates a new node with the given content and `next` set to `NULL`. |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds `new` at the beginning of the list. |
| `ft_lstsize` | `unsigned int ft_lstsize(t_list *lst);` | Returns the number of nodes in the list. |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of the list. |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds `new` at the end of the list. |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Deletes a node's content with `del` and frees the node, without touching `next`. |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees the given node and all its successors, then sets `*lst` to `NULL`. |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Applies `f` to the content of each node. |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Builds a new list from the results of `f` on each node's content; cleans up with `del` if an allocation fails. |
 
---
 
## Instructions
 
### Prerequisites
 
- A C compiler (`cc`)
- GNU `make`
- The `ar` archiver
### Compilation
 
Clone the repository and run `make` at its root to compile every source file into object files and archive them into `libft.a`:
 
```bash
cd Libft
make
```
 
### Makefile rules
 
| Rule | Effect |
| :--- | :--- |
| `make` / `make all` | Builds `libft.a` (no unnecessary relinking). |
| `make clean` | Removes the object files (`*.o`). |
| `make fclean` | Removes the object files and `libft.a`. |
| `make re` | Full rebuild (`fclean` then `all`). |
 
### Usage in your own projects
 
Include the header in your source code:
 
```c
#include "libft.h"
```
 
Then compile your program and link it against the library:
 
```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o my_program
./my_program
```
 
Example (`main.c`):
 
```c
#include "libft.h"
#include <stdlib.h>
 
int	main(void)
{
	char	**words;
	int		i;
 
	words = ft_split("Welcome to 42 Libft!", ' ');
	if (!words)
		return (1);
	i = 0;
	while (words[i])
	{
		ft_putendl_fd(words[i], 1);
		free(words[i]);
		i++;
	}
	free(words);
	return (0);
}
```
 
---
 
## Resources
 
### Classic references
 
- Linux man pages (`man 3 <function>`): the specification for the reimplemented libc functions.
- *The C Programming Language*, Kernighan & Ritchie: pointers, memory, and data structures.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/): pattern rules, automatic variables, and avoiding relinking.
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester) and Valgrind: used to test behavior and check for leaks and invalid memory accesses.
### Use of AI
 
AI was used as a learning and review aid, not as a code generator:
 
- **Edge-case review:** all functions were written by me first; AI was then used for conceptual hints about edge cases (for example NULL handling, empty or single-node lists in `ft_lstclear`, cleanup on allocation failure in `ft_lstmap`, and allocation sizes in `ft_strtrim`).
- **Build system and header review:** checking `libft.h` and the `Makefile` for missing prototypes and relinking issues.
- **Documentation:** structuring and formatting this README.
No AI-generated code was copied into the project.
 
