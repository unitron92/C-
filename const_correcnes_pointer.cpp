/*

Constant reference:

A reference to a variable (here int), which is constant. We pass the variable as a reference mainly, because references are smaller in size than the actual value, but there is a side effect and that is because it is like an alias to the actual variable. We may accidentally change the main variable through our full access to the alias, so we make it constant to prevent this side effect.

int var0 = 0;
const int &ptr1 = var0;
ptr1 = 8; // Error
var0 = 6; // OK
Constant pointers

Once a constant pointer points to a variable then it cannot point to any other variable.

int var1 = 1;
int var2 = 0;

int *const ptr2 = &var1;
ptr2 = &var2; // Error
Pointer to constant

A pointer through which one cannot change the value of a variable it points is known as a pointer to constant.

int const * ptr3 = &var2;
*ptr3 = 4; // Error
Constant pointer to a constant

A constant pointer to a constant is a pointer that can neither change the address it's pointing to and nor can it change the value kept at that address.

int var3 = 0;
int var4 = 0;
const int * const ptr4 = &var3;
*ptr4 = 1;     // Error
 ptr4 = &var4; // Error

 */