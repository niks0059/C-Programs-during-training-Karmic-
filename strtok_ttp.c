#include <string.h>
#include <stdio.h>

int main () {
   char str[80] = "This is - www.tutorialspoint.com - website";
   char str1[80] = "what - why - how";
   const char s[2] = "-";
   char *token;
   
   /* get the first token */
   token = strtok(str, s);
   
   /* walk through other tokens */
   //while( token != NULL ) {
      printf( " %s\n", token );    
      
	  token = strtok(NULL, s);
      printf( " %s\n", token );
      
       token = strtok(str1, s);
       printf( " %s\n", token );
       
       token = strtok(NULL, s);
      printf( " %s\n", token );
 //  }
   
   return(0);
}
