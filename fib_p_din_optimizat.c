/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Sirul lui Fibonacci utilizand metoda optimizarii spatiului de memorie//
#include<stdio.h> 
int fib(int n) 
{ 
  int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b;
}
 
   int n;
int main () 
{ 
  printf("Introceti nr de luni  \n");
  scanf("%d",&n); 
  printf("Sunt %d", fib(n)); printf(" perechi de iepuri"); 
  return 0; 
} 

