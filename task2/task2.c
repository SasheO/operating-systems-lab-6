#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program (int a, int b);
int (*def_functions[]) (int x, int y) = {add, subtract, multiply, divide, exit_program};


int main (void)
{
  int var;
  int a = 6;
  int b = 3;
	/* IMPLEMENT ME: Insert your algorithm here */
  while(1){
    printf("Operand ‘a’ : 6 | Operand ‘b’ : 3\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): \n");
    scanf("%d", &var);
    printf("x = %d\n", (*def_functions[var])(a,b));
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a/b; }
int exit_program (int a, int b) { printf ("Exiting the program\n"); exit(1); }

