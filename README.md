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

/***** DATA TYPES *****/
- Data type tells the computer how to interpret data
- Numeric data types = int, double and float
- Primitive data types =  smallest data type, building blocks that can't be broken up
- complex data types = structs uses primitive data types to make complex data structures
- linked lists = is a chain of things
- primitive data types and structs are built into C. Linked lists are things you create.

ARRAYS DATA TYPE
- Allows you to store more than one thing inside a group of things
- eg: int grades[10]
- arrays are signified by square brackets[].With some number inside

STRING DATA TYPE
- double quoted sequence of characters
- strings are stored inside a character array.
- eg: "I love C", this must include a NULL character '\0' to terminate the string

CONSTANT
- make a variable that can't ever change (1 definition)
- constant just a vaue, something you can write down
    : '3' = char cause of single quote
    : 3 = int cause no quotes
    : "3" = string cause of double quote

NUMERIC DATA TYPES:
int = integers are whole numbers (2; 1; 0; -1; -2)
double = floating point numbers, anything with a fracional point (1.4; 1.8)
float = floating point numbers as well.

NUMBERS ARE STORED IN BASE 2 = BInary
in binary numbers cant be stored as they are.

SCIENTIFIC NOTATION
-floating points are stored in scientific notation
    : 2 4000 = 2.4 * 10^4
    : .000045 = 4.5 * 10^-5

/***** FORMAT CHARACTERS *****/

CONVERSION CHARACTERS
---------------------
%f - Decimal notations
%e - scientific notation
%g - Computer decides
%lf - can be used for both Decimal and scientific notation.

For scanf a double, use %lf but to printf a double use %f

/***** CHAR DATA TYPE *****/
- char is short for character

CHAR DATA TYPES
---------------
- Used to store individual characters (anything on the keyboard)
    - some cant be seen like '\n' '\t' '\0'
- ALWAYS USE SINGLE QUOTE TO DISTINGUISH ''

* CHARACTERSET - allowed characters
    - ASCII

* Binary = "Two states"
    - 0 or 1
    - True or False
    - Yes or No
    - Hot or Cold

* 1 individual character = a bit (0) or (1)

* MULTIPLE BITS
    - a group of 8 bits is called a byte

ASCII has a group of 8bits:
- uses the last 7 bits
- the first bit is called an extended character set
- ASCII has 128 different characters
- same bytes can be interpeted as a character or an integer.
- every character has a numeric value
/* https://www.youtube.com/watch?v=Bz4MxDeEM6k&t=6761s */

/***** BOOLEAN DATA *****/
- anything that's either true or false. eg true = 0 and false = 1

/***** VARIABLES *****/
* Variables are used to store some kind of value
* Declaring is stating a variable exist. (int x;)
* Initialising is assigning a value to a variable. (x = 5;)
* '=' is known as the assignment operator.
* Declare and initialise at once if possible: (int x = 5;)

NAMING VARIABLES
----------------
* Allowed all letters, numbers and under scrolls.
* Variable names are case sensetive.
* short variable but descriptive

/***** INTRO TO OPERATORS *****/
* Used in Arithmetic Expressions
    "5 + 5" : '+' is the operator
            : '5' and '5' are the operands

* CLASSIFICATIONS OF OPERATORS (THROUGH NUMBER OF OPERANDS)
    - Unary = 1 operand
    - Binary = 2 operands
    - ternary = 3 operands

* CLASSIFICATIONS OF OPERATORS (THRROUGH USES AND FUNCTIONS OF THE OPERATORS)
    - Arithmetic Operators
    - Logical Operators
    - Assignment Operators
    - Relational Operators

/***** ARITHMETIC OPERATORS *****/

* +; -; *, /;

* modulus operator - remainder and only works with integers

/***** UNARY PLUS AND MINUS OPERATORS *****/

