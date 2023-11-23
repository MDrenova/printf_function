# Custom Printf Function in C

## Description

This repository contains a simple implementation of a printf-like function in C using function pointers. This code considers only the simplest cases like %c, %s, %d, and %i.

## Function Prototype
The prototype for the custom _printf function is as follows:
```c
int _printf(const char *format, ...);
```

## Return value
The _printf function returns an integer, representing the total number of characters printed (excluding the null byte used to terminate strings). If an error occurs during the execution of _printf, it returns a negative value.

## Supported Conversion Specifiers

 The format string provided to the function contains zero or more directives, each corresponding to a specific conversion specifier. The supported conversion specifiers in this project are:

* **%c:** *Character* - Output a single character.
* **%s:** *String* - Output a null-terminated string.
* **%%:** *Percent sign* - Output a literal '%' character.
* **%d and %i:** *Integer* - Outputs a signed decimal integer.

For each conversion specifier encountered in the format string, the _printf function processes the input arguments accordingly and writes the formatted result to stdout. 

## Requirements
No standard library

## Compilation

To compile the code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```
And then execute:
```bash
./printf
```

## Examples
Here is an example usage:
#### Include the custom main.h header file in your C source files:
```c
#include "main.h"
```
#### To test the code, you can use your own main.c or the example below

```c
int main() {
    _printf("Hello, %s! The answer is %d.\n", "user", 42);
    return 0;
}
```
Output:
```
Hello, user! The answer is 42.
```
## What happens when
When ``` _printf("hello %s\n", "world", 1, 2, 3, 4); ``` 
is called, the function has no way to know that more arguments were passed, so it will just ignore them. The function will not fail. The user is responsible for calling the function the right way.




## Authors

- [@Mateo Drenova](https://www.github.com/MDrenova)
- [@Atilio Sulvari](https://www.github.com/a7il10/)


