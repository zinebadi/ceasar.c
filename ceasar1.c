#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// **
 * Caesar.c
 * A program that encrypts messages using Caesar’s cipher. Your program must
 * accept a single command-line argument: a non-negative integer. Let’s call it
 * k for the sake of discussion. If your program is executed without any
 * command-line arguments or with more than one command-line argument, your
 * program should yell at the user and return a value of 1.
 * 
 * */
 
int main(int argc, string argv[])
{
if (argc == 2)
{
   int key = atoi(argv[1]);
    
   if ( key < 0 )
   {
       printf("negative number!"); 
       return 2;
   }
   else 
   {
      printf("what s your message?");
       
   string pt = get_string();

   for (i=0; i < strlen(pt); i++)
   {
       if (isalpha (pt[i]))
       {
           if (isupper (pt[i]))
           {
               printf("%c", (((pt[i] + key) - 65) % 26) + 65));
           }
           else 
           {
               printf("%c",((pt[i] + key) - 97 )% 26) + 97));
           }
       }
       else
       {
           printf("%c", plaintext[i]);
       }
   }
     }
   else 
   {    
    printf("error more or less than 2");
        return 1;
   }
   }
    return 0;
}
