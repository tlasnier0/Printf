*This activity has been created as part of the 42 curriculum by tlasnier.*

# ft_printf

## Description
**ft_printf** is a project of the 42 curriculum. The goal is to recreate the behavior of the standard C `printf` function, handling formatted output conversion and variable arguments.

Supported conversions:
- `%c` : Single character
- `%s` : String of characters
- `%p` : Pointer address in hexadecimal format
- `%d` / `%i` : Signed integer
- `%u` : Unsigned decimal integer
- `%x` / `%X` : Unsigned hexadecimal integer (lowercase / uppercase)
- `%%` : Literal percent sign

---

## Instructions

### Compilation
The project includes a `Makefile` with the standard targets:
- `make` : Compiles the source files with `-Wall -Wextra -Werror` and creates the static library `libftprintf.a`.
- `make clean` : Removes the intermediate object files (`.o`).
- `make fclean` : Removes the object files as well as `libftprintf.a`.
- `make re` : Performs a complete rebuild (`fclean` followed by `make`).

---

## Algorithm and Data Structure

- **Variadic Arguments (`va_list`)**: The standard variadic macros (`va_start`, `va_arg`, `va_end`) are used to access and extract the arguments passed after the format string.
- **Dispatcher**: When a `%` is encountered, a selector function checks the conversion specifier and dispatches the corresponding argument to its dedicated display function.
- **Display Functions**: Specific routines print each data type directly using `write` and return the exact number of characters displayed to maintain the total count.

---

## Resources & AI Disclosure

### References
- Linux Programmer's Manual (`man 3 printf`, `man 3 stdarg`) for libc behavior and variadic argument mechanics.
- [DeepL](https://www.deepl.com) - Translation tool used to assist with writing the README file.

### AI Usage
Artificial Intelligence was used strictly as a conceptual tutor and language assistant:
  
- Conceptual Learning: Explaining low-level C mechanisms and complex programming logic (such as pointer arithmetic, heap allocation behavior, and data structures) for theoretical understanding, without writing or generating any project code.
- Documentation Review: Reviewing and refining the French-to-English translation of this README, correcting phrasing errors, and improving overall language fluency.