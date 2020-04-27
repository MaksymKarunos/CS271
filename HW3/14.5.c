// CPP program to illustrate 
// User-defined Signal Handler 
#include<stdio.h> 
#include<signal.h> 
#include<stdlib.h>
// Handler for SIGINT, caused by 
// Ctrl-C at keyboard 
void handle_sigint(int sig) 
{ 
    printf("Aborting signal %d\n", sig); 
    exit(0);
} 
  
int main() 
{ 
    signal(SIGINT, handle_sigint); 
    while (1) 
    printf("%s","Hello World"); 
    return 0; 
} 
