# Tiny Language C/C++ Library

Copyright (c) 2016 Naveen Venkat | All Rights Reserved

The following content is licensed under a Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. No part of the product is in the public domain. If you don't agree to the terms in the License, destroy any copy of the software immediately. Visit serverprocessor.wordpress.com/tiny to learn more.

Best viewed with FixedWidth font.

## CONTENTS

I. Brief

II. Variables
* _P
* TINY_RAMBUFF
* TINY_MODE
* LOOP
* CDV
* DP

III. Functions

IV. Additional Content

V. Contribute to the project


## I. BRIEF


Tiny Language is a library written for C/C++. Inspired by the turing complete language Brainf**k Language (hereafter called BFlang), Tiny aims to bring a BFlang like functionalities to the C/C++ environment. With sophisticated controls and smart memory management, Tiny is perfect to create your own recipe for programming.

Q. Why should you use it?

A. Tiny uses the most basic operations on data like increment and decrement. So you could be totally reliable on your code and write functionalities from basic. Tiny is great for people who like to write code from scratch. No dependencies. Just pure C code.

### IMPORTANT Note:
* Give a space between two functions. For eg. write R U L and not RUL
* Current Data Value is abbreviated as CDV.
* Data Pointer is abbreviated as DP.


## II. VARIABLES

1. char* _P | Data Pointer

2. TINY_RAMBUFF | defines numebr of bytes occupied in memory

3. TINY_MODE | defines whether increment / decrement of CDV is done outside the limits of 1 byte (-128 to 127, both inclusive).
* open: No limits. This means if CDV = 127, an increment would give -128 (8 bit binary addition)
* locked: Arithmetic done within limits. If CDV = -128, further decrement will not occur

4. LOOP | Alias name for while(*_P)

5. CDV | Alias name for *_P

6. DP | Alias name for _P


## III. FUNCTIONS

1. O:
* Def: void _O();
* "Output"
* Prints the ASCII character at the CDV
2. I:
* Def: void _I();
* "Input"
* Input one character from standard input at the CDV

3. U:
* Def: void _U();
* "Up"
* Increments the CDV by 1 (8 bit binary addition)
* If TINY_MODE is locked, increments within range

4. D:
* Def: void _D();
* "Down"
* Decrements the CDV by 1 (8 bit binary subtraction)
* If TINY_MODE is locked, decrements within range

5. L:
* Def: void _L();
* "Left"
* Moves the DP backward by 1 byte (move left)

6. R:
* Def: void _R();
* "Right"
* Moves the DP forward by 1 byte (move right)

7. LOOP:
* It's an alias for while(*_P)
* Loops till CDV is 0
* Can be used to create loop blocks like so:
  LOOP{ U U U }
  This logically increments CDV by 3.


## IV. ADDITIONAL CONTENT

1. Comments can be used normally.
2. C Labels can be used to mark processes.
3. Code written as shown in demo.cpp makes it look intuitive.


## V. CONTRIBUTE

You can contribute to the project by submitting code to improve the language. You will be mentioned in the Contributors list.

Visit serverprocessor.wordpress.com/tiny/contribute or mail your source code to nav.naveenvenkat@gmail.com.

https://github.com/nmakes/tiny
