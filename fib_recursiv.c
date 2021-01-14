/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Calcularea numerelor Fibonacci utilizind recursia 
#include<stdio.h> 
int fib(int n) 
{ 
   if (n == 0) 
      return n; 
      else if (n == 1) 
            return n; 
   return fib(n-1) + fib(n-2); 
} 
   int n;
int main () 
{ 
  printf("Introceti nr de luni  \n");
  scanf("%d",&n); 
  printf("Sunt %d", fib(n)); printf(" perechi de iepuri"); 
  getchar(); 
  return 0; 
} 



