# read_variadic

This project is based on another I've written <br>
Check out the [read](https://github.com/ciroDourado/read) repository <br>
You may need to take a close look on its README.md, so the understanding about were I have achieved here will become clearer.


###### obs.: if you are interested in another tool for string manipulation, check the following repository. It's about extracting a slice from a given String.
[slice](https://github.com/ciroDourado/slice)


So far, so good. If you have noticed, much of the code in the original "read" library was reused, and also some of its parts were cutted (in order to allow me to rename some new functions, and get rid of some dead code that would be compiled).


But, the most important thing is: what in heavens is a variadic function?


## Prelude: Variadic Functions
***[jump to Sections, and more technical info](https://github.com/ciroDourado/read_variadic#sections)***



Some of us, who had started programming with some low-level language, like C, are used with writing functions, aways having in mind 4 things:
- we need to specify what the function returns;
- we must give a unique name for the function, something that describes precisely what it does;
- we must determine what that function takes as arguments/parameters;
- and obviously, write some instructions that use the passed variables, and return somethig according to the return type.



But there's a detail we only get when we go deeper and deeper on C: declare a fixed number of parameters to a function isn't the only possibility; you are indeed allowed to write functions that can expect a undetermined number of arguments of the same type.



###### Just like you've already seen in JS, when you declare an Array with: 
``` 
var nums1 = new Array(0, 1, 2, 4, 11, 106)
var nums2 = new Array(1, 3, 4)
```
Both lines are valid. And that's a clear example that you have already used this concept before.



That's what a variadic function is: functions that can take zero or more arguments of the same type, without the need of redeclaring or making some overloading.<br>
In the common way, you *must* obbey the number of acceptable args that your function receive: neither more nor less.



But doing this in C is tricky, since you need to get very used with Macros, which itself can mess a lot of your code if you don't do it right. Also it becomes very unreadable, as C macros aren't that intuitive. Only try to code these things with some mastering on coding in C lang.



But, in the end (after some hard work and headache), you can provide very flexible functions, which reminds some of the methods we encounter on higher level and recent languages. 



I'm leaving this code ready for use for anyone who wants to include in your C programs. The pro's of using it is to have some level of abstraction, as: don't need to worry about how many params your function receive (pass none or many shouldn't throw any error, this function will do what it was designed to do); or don't need to worry about memory allocation, or freeing pointers (your input is automatically allocated in heap).



## Sections
***[back to prelude](https://github.com/ciroDourado/read_variadic#prelude-variadic-functions)***

1. [Applying into your code](https://github.com/ciroDourado/read_variadic#1-applying-into-your-code)
2. [How to use it](https://github.com/ciroDourado/read_variadic#2-how-to-use-it)
3. [Contribuing](https://github.com/ciroDourado/read_variadic#3-contribuing)

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

**[Back into sections](https://github.com/ciroDourado/read_variadic#sections)** 

## 2. How to use it

| Function | Parameter                                                           | Return                 |
|----------|---------------------------------------------------------------------|------------------------| 
| read     | None or how many string literals you want to be printed on terminal | String with user input |
| clean    | String reference                                                    | Nothing                |

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

If you don't want any message, do as follows:

```
printf("Say your name: \n");
char* yourName = read();
```
```
$ Say your name:
$ Kimi no na wa
```

"clean( )" only expects a dynamically-allocated string to be freed. If null is passed, nothing will happen.

**[Back into sections](https://github.com/ciroDourado/read_variadic#sections)**

## 3. Contribuing

If you want to leave a comment, suggest an update (or anything else), mail me: `ciro dot brz at gmail dot com `.
Btw, I'm brazilian; my deepest apologies if I wrote something wrong, or mispelled something.

**[Back into sections](https://github.com/ciroDourado/read_variadic#sections)** 
