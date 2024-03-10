THEORY WRITTEN:

Programmng language was invented to help human communicate with the computer instead of using binary as it is error prone.
Source code is typed and compiled in order to create a program and is interpreted by the computer.

/******* HOW A C PROGRAM WORKS ******/
Algorithm - step bty step instructions (SPECIFIC INTRUCTIONS)

Function - a group of algorithm shriked into a single statement

/***
#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    return (0);
}
***/

int main()
    int = data type
    main = funtion
    printf = print something
    return (0) = what to return, relevent to data type

#include <stdio.h>
    stdio.h = library housing the printf function.
\n = new line

/********* UNIX AND LINUX *******/

pwd = print working directory(folder)
ls - list files [-la, -a, -l]
cd = change directory
    absolute path = cd /Users/Ndivho
    relataive path = cd ..
    [cd / = root directory, the begining]
    [cd or cd ~] = home directory
touch = creates file (touch hello.c)
mv = moves file (mv hello.c /newdirectory)
   = renames files (mv hello.c HELLO.c)
rm = removes
mkdir = creates directories (mkdir NewDirectory)
echo = prints out what you typed (echo "Hello")
     = output into a new file (echo "Hello" > output.c)
            > = overwrites
            >> = add onto list
cat = view file contents (cat output.c)
less = view a bit of file contents (less output.c)
control C = exit any program

/***** BASICS OF C *****/

DATA TYPES:
* int [2 or 4 bytes] = stores whole numbers
* float [4 bytes] = stores fractional numbers
* double [8 bytes] = stores fractional numbers
* char [1 byte] = stores a single character/ letter/ number

&address = address of operator, points to where the data is store

FORMAT SPECIFIFIERS/ CONVERSION CHARACTERS
* %i or %d = int
* %f  = float
* %lf = double
* %c = char
* %s = strings (array of characters)

Type casting:
When you change the data type of a value.
(double) will cast any variable into a double

Strings introduction:
A string is an array or sequence of characters (sentence).
Strings are inserted in a double quotes "  ".
Strings can be put in a character array: char name[32]
Strings need an extra character at the end of the string to end the string.
The character is known as a null terminator '\0'

Arrays do not use an address of operator when you scan unlike the other data types.

/***** USING FUNCTIONS IN C *****/
* A function can be used to call or execute multiple statements at one time (although done step by step)
* Arguments are passed through the function inside the paranthesis
* Another benefit of ussing functions, Instead of chnaging a code in a various locations, changing the function will change it in all different locations.
* The action of inputing arguements is called parsing.
* Arguements allow us to customise our functions.

/***** VIM/VI Basics *****/
:syntax on = Sets syntax
:set number = Adds numbers

The above needs to set each time

TO MAKE PERMENENT:
- cd to home directory
- vi to .vimrc tp create or enter
- add setup


