#include <stdio.h>

int main()
{
    // In boolean returns, true returns 1, false returns 0
    // You can't compare diff datatypes. == and != has lower precedence
    // than the comparison operations
    printf("1 > 3: %d\n", 1 > 3);

    /* Logical operators: &&, ||, !, ^/~ (AND, OR, NOT, XOR)
    AND and OR only for boolean expressions (review stuff)...
    
    AND: both must be true
    OR: At least one must be true
    XOR: Exactly one must be true
    NOT: Switch the truthy value
    */

   printf("1 xor 1: %d\n", 1^1);
   printf("1 xor 0: %d\n", 1^0);
   printf("1 or 1: %d\n", 1||1);
   printf("not 0: %d", !0);
   return(0);

   // You can perform these boolean operations on
   // normal integers, just convert them to binary and
   // do the operations bitwise. You can use the not operator
   // on integers!
}