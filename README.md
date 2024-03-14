THEORY WRITTEN:

Programmng language was invented to help human communicate with the computer instead of using binary as it is error prone.
Source code is typed and compiled in order to create a program and is interpreted by the computer.
________________________________________________________________________

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
__________________________________________________________

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
_______________________________________________________________

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
______________________________________________________________________________

/***** USING FUNCTIONS IN C *****/
* A function can be used to call or execute multiple statements at one time (although done step by step)
* Arguments are passed through the function inside the paranthesis
* Another benefit of ussing functions, Instead of chnaging a code in a various locations, changing the function will change it in all different locations.
* The action of inputing arguements is called parsing.
* Arguements allow us to customise our functions.
__________________________________________________________________

/***** VIM/VI Basics *****/
:syntax on = Sets syntax
:set number = Adds numbers

The above needs to set each time

TO MAKE PERMENENT:
- cd to home directory
- vi to .vimrc tp create or enter
- add setup
_________________________________________________________________

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
________________________________________________________

/***** FORMAT CHARACTERS *****/

CONVERSION CHARACTERS
---------------------
%f - Decimal notations
%e - scientific notation
%g - Computer decides
%lf - can be used for both Decimal and scientific notation.

For scanf a double, use %lf but to printf a double use %f
____________________________________________________________

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
________________________________________________________

/***** BOOLEAN DATA *****/
- anything that's either true or false. eg true = 0 and false = 1
_____________________________________________________

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
_____________________________________________________

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
______________________________________________________

/***** ARITHMETIC OPERATORS *****/

* +; -; *, /;

* modulus operator - remainder and only works with integers

/***** UNARY PLUS AND MINUS OPERATORS *****/
* Operators do not always change the value of the variable.
* Operators change the expression and not the cvariable.
_____________________________________________________________

/***** INCREMENT AND DECREMENT OPERATORS *****/
* Increment and decrement operators changes the value of variable
    : Increment - to increase the value of variable by 1.
    : Decrement - to decrease the value of a variable by 1.
* If you need to add or remove 1 to a variable, use increment: variable++; or variable--;
* If more than 1 then use expresion: variable = variable + 5; or variable = vairable - 5;
* Positin of the increment is important:
    * variable++; = increment will happen after the value has been outputed.
    * ++variable; = increment will happen before the value has been outputed.
______________________________________________________________

/***** ASSIGNMENT OPERATORS *****/
* This allows for increment and decrement at a a bigger scale (variable + 30; or variable - 30;)
* This only uses the variable once to erase any possibility of errors:
    : += (variable = variable + 100; same as: variable += 100;)
    : -= (variable = variable - 100; same as:variable -= 100;)
    : *= (variabele = variable * 2; same as: variable *= 2;)
    : /= (variable = variable /2; same as: variable /= 2;)
    : %= (variable = variable %5; same as: variable %= 5;)
_____________________________________________________________

/***** OPERATOR PRECEDENCE *****/
* Other operators have precedence over others (BODMAS)
    https://en.cppreference.com/w/c/language/operator_precedence
___________________________________________________________________

/***** STRONGLY TYPED vs LOOSELY TYPED LANGUAGES *****/
* C is a strongly(strict) typed language
    - evrery piece of data has a specific type
    - when you declare a variable you need to say what type it is, variable stays that type.
    - NB!: concatenation means ("5" + "5" = "55")
    - in C (1/3 = 0 because both 1 and 3 are int, unless data type is specified to be float)

* JavasScript is a loosely typed language
    - Uses duck typing

* Beacause in c data types need to be specified, we use type casting to change data type.
_______________________________________

/***** TYPE CASTING *****/
* e.g You can type cast a double into an integer
* C language is very specific when it comes to data types
* TWO TYPES OF TYPE CASTING
    - IMPLICIT: can happen automatically (lossless) (1 intepreted as 1.00)
    - EXPLICIT: tell the computer (lossy) ((double) 3.5 = 3)
___________________________________

/***** IMPLICIT TYPE PROMOTION *****/
* implicit type conversion (promotion): data types that can be converted to other data types without loss of infomatio
* printf talkes doubles and not floats, so floats are promoted to double in storage.
* double and floats take %f.
* float fits into a double, float is a smaller data type than double.

___________________________________

/***** INTRO TO LOGIC *****/

* Branching - when a programme splits based on an expression:
* Boolean Logic - True or False
    - If true, go down one branch
    _ If false, go down the other branch

* Compound Expression - Combine two expressions to ultimately come down to True or False
    - age > 12;
    - sex == female
    - age > 12 && sex == female (&& known as logical operator)
* Truth Table can be used to decipher all possible outcomes.

* CONTROL FLOW STATEMENT: Computer science term for branching:
  Loops and conditional
    - if statements
    - for statements
    - while statements
* logic gates determine direction of branch
______________________________________

/***** IF STATETEMENTS *****/

if(expression)
    {
        //CODE
    }
- If TRUE (Conditional) then code is executed.
- If false then the code is skipped and moves to be evaluated in the next code.
___________________________________________________

/***** RELATIONAL(COMPARISON) OPERATORS *****/

* > : greater than to
* < : less than to
* >= : greater than or equal to
* >= : less than or equal to
* == : equal to
* ! : negation operator, flips the true or false value of anything
* != : Not equal to
* || : or operator (Either of the options grant access)

* Due to operator precedenc:
    pizzaRating > 3 + 3; is evaluated as pizzaRating > 6;

____________________________________________________________

/***** IF-ELSE STATEMENTS *****/

* Logical operators are used to build complex conditionals.
* Easiest way to understand this conditionals is to write them within an IF statement.
* if(email is verified || phone verified) || = or operator.
* takes 1 of two directions.

NB: THE 3 LOGICAL OPERATORS YOU NEED TO KNOW ARE:
        * || : OR (Both can be true)
        * && : AND
        * ! : NOT
 * Short curcitting happens when a second operrand does not need to be assessed with binary conditionals.

* XOR - Exclusive or: they both can't be true nor both false.
      - In C we don't use XOR.
      - To mimic XOR we use the != (Not equal to) operator. (A != B)

______________________________________________________________________

/***** COMPLEX CODITIONALS *****/

* Try simplify the conditionals as much as possible.
* Make use of NESTED If statements (If statements within if statements)

_______________________________________________________________________

/***** SHORT CIRCUIT EVALUATION *****/

* When a large expression is evaluated early i order to shorten code.
* BENEFITS: Saves computing time(speeds up program)
* Rules that allows us to know if expressions are true or false early.

    OR logic operator:
        * True || x = TRUE (Short Circuit).
        * False || x = Needs further evaluation. 
    
    && logic operator:
        * True && x = Needs further evaluation.
        * False && x = FALSE (Short Circuit).
________________________________________________________________________

/***** LOGICAL OPERATOR PRECEDENCE *****/

In Logical Operator Precedence:
    * ! (NOT) is first.
    * && (AND) is second.
    * || (OR) is third.

In order to avoid complexity, make use of parenthesis.

__________________________________________________________________

/***** ELSE-IF STATEMENTS *****/

* if-else statement: branches into 2 directions. (Starts with 'if' and ends with 'else')
* else-if statement: branches into 3 or more directions. (Starts with 'if', joins with 'else if' and ends with 'else')
* NB!: YOU CAN HAVE AN 'else if' statement without ending with an else.

_________________________________________________________________________

/***** MULTIPLE-IF STATEMENTS vs ELSE-IF STATEMENTS *****/

* DIFFERENCE between 2 IF statements versus having an IF-ELSE statement
    * With 2 IF STATEMENTS, both will be evaluated and a chance of both being executed if true to the condition.
    * With an ELSE-IF STATEMENT, only 1 or the other will be executed.
NB: If you want one or the other than ELSE-IF Statements, if you want a possibility for both included then multiple IF STATEMENTS.

__________________________________________________________________________

/***** SINGLE LINE IF *****/

* Include the stdbool.h

PRO: Easy to read, shortens line count
CONS: Because no curly braces, only evaluates the line after.

* NOT RECOMMENDED, leaves opportunity for errors especially when wanting to add more.

_____________________________________________________________________________

