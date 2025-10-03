/* 
 * CS:APP Data Lab 
 * 
 * <Please put your name and userid here>
 * 
 * bits.c - Source file with your solutions to the Lab.
 *          This is the file you will hand in to your instructor.
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 */

You will provide your solution to the Data Lab by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
 
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

/*
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2022 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
//1
/* 
 * bitAnd - x&y using only ~ and | 
 *   Example: bitAnd(6, 5) = 4
 *   Legal ops: ~ |
 *   Max ops: 8
 *   Rating: 1
 */
int bitAnd(int x, int y) {
  return 2;
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
  return 2;
}
/* 
 * bitMatch - Create mask indicating which bits in x match those in y
 *            using only ~ and & 
 *   Example: bitMatch(0x7, 0xE) = 0x6
 *   Legal ops: ~ & |
 *   Max ops: 14
 *   Rating: 1
 */
int bitMatch(int x, int y) {
//=============================================================================
// bitMatch 
// This function returns a mask with 1's where x and y have the same bits
// which is equivalent to ~(x XOR y).
// Parameters: x,y
// Returns: the mask to indicating matches in x and y
//=============================================================================

  // (x or y) and not (x and y) so when bit x is different from bit y, the result is 1 = xor
  // by inverting the above, result = 1 when the bits are the same.
  return ~((x|y) & ~(x&y));
}
/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 *   SOLUTION
 * The operation of x ^ y can be written in the function table as follows
 *  A B | F
 * ----------
 *  0 0 | 0
 *  0 1 | 1
 *  1 0 | 1
 *  1 1 | 0
 *  The resulting SOP expression from the function table is: F = (~A & B) + (A & ~B)
 *  Since we cannot use the + operator we use DeMorgan's Law which states that
 *  A + B = ~(~A & ~B)
 *  We can then apply that to our x and y resulting in the espression
 *  x ^ y = ~(~(x & ~y) & ~(~x & y))
 */
int bitXor(int x, int y) {
  int result = ~(~(x & ~y) & ~(~x & y)); // demorgans law
  return result;
}
//2
/* 
 * implication - return x -> y in propositional logic - 0 for false, 1
 * for true
 *   Example: implication(1,1) = 1
 *            implication(1,0) = 0
 *   Legal ops: ! ~ ^ |
 *   Max ops: 5
 *   Rating: 2
 */
int implication(int x, int y) {
//=============================================================================
// implication 
//  F is only false if x is 1 and y is 0, so if y is not zero, or x is zero, 
//  then return 1.
//  Parameters: x, y
//  Return values: the value of !x or y, representing x implies y.
//=============================================================================
    return (!x)|(!!y);
}
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return 2;
}
/* 
 * isPositive - return 1 if x > 0, return 0 otherwise 
 *   Example: isPositive(-1) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 8
 *   Rating: 2
 */
int isPositive(int x) {
  return 2;
}
/*
 * isPallindrome - Return 1 if bit pattern in x is equal to its mirror image
 *   Example: isPallindrome(0x01234567E6AC2480) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 45
 *   Rating: 4
 */
int isPallindrome(int x) {
//=============================================================================
// isPallindrome
// This function checks if the 32-bit integer x is a bit-level palindrome. 
// This function splits x into lower and upper halves then reverses the lower 
// 16 bits using bit swaps. Finally, it compares the reversed lower half with 
// the upper half.
// Parameters: x 
// Returns: 1 if the upper 16 bits equal the reversed lower 16 bits 
// (palindrome), 0 otherwise.
//=============================================================================
  
  // split x into lower and upper parts
  int lower = x & (0xFF | (0xFF << 8));
  int upper = (x >> 16) & (0xFF | (0xFF << 8)); 

  // swapping adjacent numbers 
  int m1 = 0x55 | (0x55 << 8);  
  int r = ((lower >> 1) & m1) | ((lower & m1) << 1);
	
  // swapping 2 bits group
  int m2 = 0x33 | (0x33 << 8);  
  r = ((r >> 2) & m2) | ((r & m2) << 2);

  // swapping 4 bits group
  int m3 = 0x0F | (0x0F << 8);  
  r = ((r >> 4) & m3) | ((r & m3) << 4);
  
  // swapping 8 bits group 
  r = ((r >> 8) & 0xFF) | ((r & 0xFF) << 8);

  
  return !(upper ^ r);
}
//3
//4
/* 
 * bang - Compute !x without using !
 *   Examples: bang(3) = 0, bang(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int bang(int x) {
  return 2;
}
/* 
 * absVal - absolute value of x
 *   Example: absVal(-1) = 1.
 *   You may assume -TMax <= x <= TMax
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 10
 *   Rating: 4
 * 
 *   Ex. absVal(-1)
 *   We first need to create a mask that fills with -1s or 0s depending on if 
 *   it is positive or negative. We see that with -1 that that since its leading
 *   is 1 the mask and -1 will look like:
 *   -1: 1111 1111 1111 1111
 *   mask: 1111 1111 1111 1111
 *   We then use XOR to convert it to a positive number resulting in 
 *   0000 0000 0000 0000
 *   We then want to subtract the mask but since that's not a legal operator we 
 *   can take the NOT operator to convert mask to all 0s and add 1 which will work
 *   the same as subtraction. We then add it to our x ^ mask result and get the absolute
 *   value of -1 which is 1.
 *   ~mask + 1: 0000 0000 0000 0001
 *    x ^ mask: 0000 0000 0000 0000
 *    (~mask + 1) + (~mask + 1): 0000 0000 0000 0001
 * 
 *   Ex. absVal(1)
 *   We first need to create a mask that fills with -1s or 0s depending on if 
 *   it is positive or negative. We see that with 1 that that since its leading
 *   is 0 the mask and 1 will look like:
 *      1: 0000 0000 0000 0001
 *   mask: 0000 0000 0000 0000 
 *   Using XOR will not change anything in the number since its already positive leading to: 
 *   0000 0000 0000 0001
 *   We then want to subtract the mask but since that's not a legal operator we 
 *   can take the NOT operator to convert mask to all 1s and add 1 which will work
 *   the same as subtraction. We then add it to our x ^ mask result and get the absolute
 *   value of 1 which is 1.
 *   ~mask + 1: 0000 0000 0000 0000
 *    x ^ mask: 0000 0000 0000 0001
 *    (~mask + 1) + (~mask + 1): 0000 0000 0000 0001
 */
int absVal(int x) {
  int mask  = x >> 31; // fills with -1 or 0 depending on if its pos or neg
  return (x ^ mask) + (~mask + 1); // convert to postive number and then subtract mask
  
}
