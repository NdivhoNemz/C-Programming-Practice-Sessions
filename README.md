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

/***** INTRO TO SWITCH STATEMENTS *****/

* Very similar to IF STATEMENTS
* SWITCH statement is different in structure from IF statement but serves the same purpose.
    - Purpose is to branch based on cerain values.
    - When to use either is dependent on what you trying to archieve.
* SWITCH STATEMENTS are good for comparing a simple number value
* IF STATEMENTS allow for more coplex comparison in their () condition segment.

*NB!: SWITCH STATEMENTS CANNOT HAVE COMPARISON OR LOGICAL OPERATORS

* SWITCH is easier to read when branching out into more clear variables

* IMPORTANT SYNTAX:
    - [switch()] to start the switch statement,
    - [case 0: case 1: etc] works as different branches just like "elseif".
    - [break;] used to end a case in order to evaluate the next.
    - [default;] works like the else, if none of the cases conditions are met.
    - the CODE goes between case and break or default and break.

________________________________________________________________________________

/***** WHEN TO USE SWITCH OVER IF *****/

* Switch statement is good for integral variables. Integer type, Cannot use for a double.
* Switch NOT suitable for ranges.
* Suitable for limited number of options.
* Switch can use char data types as well due to ASCII conversion. As each char has a int value. 'A' = 65.

* NOTHING THAT A SWITCH STATEMENT OFFERS THAT IS NOT DONE BY IF OR ELSE OF STATEMENT.

* Switch statement are however clearer in certain situations like menus.
* They are very common so it's important to know how it works.
* SWITCH STATEMENT has a FINITE number of possibilities and usually best represent by switch statement.
_______________________________________________________________________________________

/***** CHARACTERS IN SWITCH STATEMENTS *****/

* You can use any data type that is directly convertable to an integer: 'A' = 65
* DATA TYPES THAT ARE DIRECTLY CONVERTABLE:
    * characters
    * integers
    * enumerations (data type that allows you to choose from various options)

* You can have multiple cases for one section of code!
_________________________________________________________

/***** INPUT STREAM (BUFFER) EXPLAINED *****/

* When you type into the console, it is stored in a temporary location.
* Whatever is stored in the input stream (Buffer) is assigned to the declared variable.
* Input stream can be thought of as a sequence of characters.
* scanf is the simpliest input function but not the best.

* IF YOU ARE USING scanf multiple times in your program, you need to flush(empty) the input true.
* This is done by using the [getchar()] function.
* Use getchar() between scanfs if you think they might be an issue from switch scanf %d to scanf %c.

NB: READ MORE ON getchar() function and research on more input function other than scanf!!!!!
______________________________________________________________________________________________

/***** TERNARY (CONDITIONAL) OPERATOR *****/

* Another way to do if statements
* Very suitable for small size if statements.  

_______________________________________________________

/***** INTRO TO LOOPS *****/

* Loops allow us to do some section of code as many times as we would like.
* Dangers of loops is that you can create an infinite loop.
* THREE (ICU) things you need to consider when making a loop:
    - Initialisation: i = 0; Where we starting. START
    - Comparison: i <= 10; How we know we are continuing. ENDING
    - Update: i++; After each loop, INCREMENT BY 1. EACH LOOP.

* When you create a loop, you need to figure out when to start and end a loop

* THREE TYPES OF LOOPS:
    1. FOR 
    2. WHILE
    3. DO WHILE

FOR LOOPS: 
------------
* Allows us to see the (ICU) in practice.
* Variable int i is thought of as an iterator.
* Everytime you go through the loop is known as an iteration. You can keep track of which iteration we are on using i.
        ** for(int i = 0; i <= 9; i++) "This for loop will run 10 times, from 0 till 9
        {
            //code
        }
    * int i = 0; is the initialisation
        - This only happens once, to show where the loop must start, sets the value.

    * i <= 9; the comparison
        - for each time this is true, the code is executed.

    * i++; this happens after the comparison, and increment i each time for as long as i <= 9 is true.

NESTED FOR LOOP:
----------------
* Nested for loop is a for loop inside another for loop
* A for loop for each iteration of each loop.
* Useful for multi dimensional arrays

COUNTING PRIME NUMBERS:
-----------------------
* A prime number can only be divisable by 1 and itself with no remainder or decimal.
* Be cautious of edge cases (Highest and lowest number being worked with and a bit over).

    PRIME FACTORS:
    --------------
    * Check the number up to the square root instead of till the the number 2 3 4 ... sqaure root.
    * Best to use Prime factor for a code through getting square root of tested number.
    * Once square root is obtain, test each number from square root down to 2.
    * If tested number is divisable without a remainder than it's NOT A PRIME.

WHILE LOOPS:
------------
* While loop can be used to achieve everything the 'FOR LOOP' can achieve.
* Not a lot of difference other than structure.
* While loop offers more flexebility

DO WHILE LOOPS:
---------------
* Do something atleast once if true
* Do while loop is great for scenarios where you need something to execute atleast once and potentially more times.
* eg: Input validation

BREAK:
-----
* Can be used to exit out of loops.
* Used for both For Loops and While Loops
* Efficent for while loop as they risk running infinitely if conditions are'nt met.

CONTINUE:
---------
* Continue works similar to break:
* Continue will not exit out of a loop but exit from the iteration(i++) and continue the loop after.

________________________________________________________________________________________

/***** INTRO TO ARRAYS *****/

* An array is a collection of data stored within one variable.
* Can store multiple things in a single array.
* HAS TO BE OF THE SAME DATA TYPE!!!! 
* Collection of integers, characters etc... in one variable.
    - 'int myGrades[5];' would be an integer array storing 5 grades of students: 15 24 60 32 15
    - withing the [] you need to declare a size. [elements]
    - an array is statically sized.
    - statically sized means the size cannot be changed, size is known at compile time.
        ** Size can only be changed by liked lists or in the dynamic memory.
* Arrays are 0 based, means the first element is referred to by '0'. 
    - 'int myGrades[0] = 15;' This will assign 15 to the 1st element.
    - 'int myGrades[] = {15, 24, 60, 32, 15};' will assign all 5 elements to the myGrades variable of array.
** NB!!!: BE CAREFUL NOT REFERENCE OVER THE STATIC SIZE DECLARED.

WORKING WITH ARRAYS:
--------------------
* Same data type
* two ways to assign values: Do each individually by stating size or all at once with no size
        - Size determined by compiler
 
        // index = 0 based number
        // element = the value in the 1st element
        // size

* Only use the [] when declaring the array, otherwise use 'myGrades' without.
* Use [] when referencing a specific element 'myGrades[2]'

PRINTING ARRAY WITH LOOP:
-------------------------
* You need a size variable to keep track of the array.
* make use of the size variable

MULTIDIMENSIONAL ARRAYS:
------------------------
* Single dimenstional arrays would be an array of integers or characters.
* Multidimensional arrays are essentially arrays of arrays.
* Needs 2 [], int studentGrades[5][4];
            - The first [] repersents rows = horizontal lines.
            - THe second [] reperesents columns = vertial lines.

_____________________________________________________________________________________________

/***** INTRO TO STRINGS AND NULL CHARACTER *****/

* Strings are essentially a character array.
* To asssign a string into a variable you need a character array.
* The string "Hello" can be assigned into a variable by 'char word[10] = "Hello"'.
* Strings end with a Null character.
* Null character = '\0'
* Null character is used to represent the end of the string!!!
* MAKE SURE THE SIZING OF THE ARRAY IS ALWAYS CORRECT!!!
* When getting user input, always account for the possible size the user might input.
            - scanf("%s"); = consider the format specifier.
            - Try put a stop by adding size to format specifier.
            - e.g scanf("%9s"); only the first 9characters would be used as the 10th would be reserve for the null character.

* NB!!! Remember the NULL character and never overwrite the NULL character.

TIPS:
----
* Avoiding giving the size [] if hard coding as this will be done during compile time.
* Only add size [] if getting sting from input user (scanf).
* No need to use &addressOfOperators for strings.

______________________________________________________________________________________________

/***** FUNCTION DESIGN *****/

* A function is a tool in your tool box that does something for you.
* You leverage your function to do the work for you to get pre programmed usage.
* eg: printf scanf
* printf() = arguments go into the (). You worry about the argument and not the function.
* You can create your own functions and not just the built in functions like printf & scanf.
* Created functions will be in your library. Use #include "library.h" to use in your code.
* DRY = Dont Repeat Yourself.

FUNCTION DESIGN RULLES:
-----------------------
* DO NOT OUTPUT TO THE CONSOLE INSDIE OF A FUNCTION
        - Unless function is designed to output.
* DESIGN YOUR FUNCTIONS TO BE AS GENERIC AS POSSIBLE TO INCREASE USAGE IN VARUIOUS SCENARIOS.
* MAKE FUNCTION HAVE ONE USE, ONE FUNCTION, SHOULD DO ON THING. eg SORT, instead of sort and print.

FUNCTION ARGUMENTS, PARAMETERS, RETURN STATEMENT:
------------------------------------------------
* Every function created neeed a name eg: factorial.
* In order for the function to work, it needs an input.
* When defining a function, state what data you need.
* The stating of data need is known as PARAMETERS eg: (int n)
    - This is done in paranthesis after the function name.
    - Its named and used as a variable inside the function.
* Defining the type of output expected from the function. Known as RETURN.
* Return type of the factorial will be an integer. eg: int

        'int factorial(int n)'

* Creating a function that takes an integer, executes and gives the "result(int)" back.
* Return type = int
* Return statement = given an actual value (return n;) the actual data outputed by the function.

* Invokong the function: 'int x = 5;' 'factorial(x);'
* intF = factorial(5); intF  would contain the factorial of 5 Result.

* ARGUEMENT = the passing of data like the value 5 into the factorial function.

* NB: You can only return one thing unless. To return multiple, you put in a struct. 

DEFINITIONS:
------------
* PARAMETER = The parameter is the variable inside of the function. Local variable to a funtion
* ARGUEMENT = The data passed to the parameter. Value passed into the function.

* Parameters cannot be changed in the function, can only be copied into a return variable.
* Only way to change a parameter is through a pointer.

CREATING VOID FUNCTIONS:
-----------------------
* Void functions arent used to CALCULATE but to DO SOMETHNG.
* eg. Logging or console outputs.
* Void funtion should not return a value.

REFACTORING:
-----------
* Is a way to change your code without changing the functionality of your program.
* Main reasons: Optomised method.
                Make it better through readability.
* Before refactoring, run tests with each change.

