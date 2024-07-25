![images (1)](https://github.com/user-attachments/assets/8406017c-c847-43fd-b88c-d5bc6c3c115f)

# Printf 

### Introduction


The goal of this project is to create a simplified version of the printf function in C. The printf function is commonly used to display formatted messages on the console. Our objective is to understand how this function works internally by implementing our own version called my_printf.

### How the printf Function

How the printf Function Works
The printf function is a variadic function, meaning it can accept a variable number of arguments. The first argument is always a format string that specifies how the subsequent arguments should be displayed. The format string can contain regular characters that are printed as they are, as well as format specifiers that start with %. These specifiers indicate how the arguments should be converted into strings.
### compilation

The code must be compiled this way:

*$ gcc -Wall -Werror -Wextra -pedantic .c
### Requirements

Operating System: Ubuntu 20.04 or similar

Compiler: GCC

Tools: github 

Print Character
```
#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Character: %c \n", 'A');
    return(0);
}
```
Output 
``` 
Character A 
```
Print string

```
#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("String: %s\n", "Hello, world!");
    return(0);
}
```
Output
```
String: Hello, world!
```

Print Percent
```
#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Percent: %%\n");
    return(0);
}
```
Output
```
Percent: %
```
Print Décimal/interger
  ```
#include "main.h"
#include <stdio.h>
int main(void)
{
int b;

     b = _printf("Holberton School\n");
    _printf("note: [%d/%i]\n", b, b);

    return (0);
}
```
Output
```
Holberton School 
note: [20/20]
```

### Man Page
Check the [Man Page](https://github.com/scotty800/holbertonschool-printf/blob/main/man_3_printf)
### Flowchart
![Diagramme sans nom drawio](https://github.com/user-attachments/assets/11929c4a-2bfa-4813-a344-a9db72a46658)
### Author 

[Yannis Ranguin](https://github.com/Yannis95200)

[Scotty Ndanga](https://github.com/scotty800)

[Fabio Dejieux](https://github.com/Pizzapanda92)
