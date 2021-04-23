# read
Due to the complexity that writing some code that expects a string input from the user, I've made this tiny library which can be used in any case (e.g.: the programmer doesn't need to worry anymore of how many characters/bytes the user must give, neither the boring details of handling NULL or memory allocation).

With these functions, you should only expect some string (any size) or nothing, that simple.

###### obs.: this is a refactored version. You can check my first attempt to code this at:

[input_without_overflow](https://github.com/ciroDourado/input_without_overflow)

###### obs.: if you are interested in another tool for string manipulation, check the following repository. It's about extracting a slice from a given String.

[slice](https://github.com/ciroDourado/slice)

## Sections

1. [Applying into your code](https://github.com/ciroDourado/read#1-applying-into-your-code)
2. [How to use it](https://github.com/ciroDourado/read#2-how-to-use-it)
3. [Contribuing](https://github.com/ciroDourado/read#3-contribuing)

## 1. Applying into your code

Using this library requires nothing more than moving the source-code at src/ into your project diretory that hold your .c files. 

Finally, just the obvious, use GCC to compile all the code inside :

```
gcc *.c -o [executable_name]
```

Execute with (if you are in a Windows OS, use a backslash instead):

```
./[executable_name]
```

**[Back into sections](https://github.com/ciroDourado/read#sections)** 

## 2. How to use it

| Function | Parameter                                                                       | Return                 |
|----------|---------------------------------------------------------------------------------|------------------------| 
| read     | String literal to be printed before your reading process, null to print nothing | String with user input |
| clean    | String reference                                                                | Nothing                |

If you want to take an example, check the code inside test/, at main.c.

"read( )" expects some hardcoded string to be passed, which will serve as some sort of label. For example

```
printf("Say your name: \n");
char* yourName = read(" >>> ");
```

Will be printed as follows:

```
$ Say your name:
$  >>> Kimi no na wa
```

If you don't want any message, just pass as null:

```
printf("Say your name: \n");
char* yourName = read(NULL);
```
```
$ Say your name:
$ Kimi no na wa
```

"clean( )" only expects a dynamically-allocated string to be freed. If null is passed, nothing will happen.

**[Back into sections](https://github.com/ciroDourado/read#sections)**

## 3. Contribuing

If you want to leave a comment, suggest an update (or anything else), mail me: `ciro dot brz at gmail dot com `.
Btw, I'm brazilian; my deepest apologies if I wrote something wrong, or mispelled something.

**[Back into sections](https://github.com/ciroDourado/read#sections)** 
