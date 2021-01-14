/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Calcularea numerelor Fibonacci utilizind Programarea dinamica
#include<stdio.h> 
  
long long fib(int n) 
{ 
  // Se declara un tablou pentru a stoca numerele Fibonacci //
 long long f[n+2];   
  // 1 extra pentru cazul particular, n = 0 
 long long i; 
  
  // se face atribuirea pentru elementele de pe pozitia 0 si 1//
  f[0] = 0; 
  f[1] = 1; 
  
  for (i = 2; i <= n; i++) 
  { 
      //2 predecesori se aduna intre ei si se atribuie elementului f[i] //
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
} 

   int n;
int main () 
{ 
  printf("Introceti nr de luni  \n");
  scanf("%d",&n); 
  printf("Sunt %lld", fib(n)); printf(" perechi de iepuri"); 
  return 0; 
} 



