#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
if (argc == 2)
    {
   int key = atoi(argv[1]);
   printf("what s your message?");
   string plaintext = get_string();
   string ciphertext;
   
   for (i=0; i < strlen(plaintext); i++)
   {
       if (isalpha (plaintext(i)))
       {
           if (isupper (plaintext(i)))
           {
               ciphertext = ((plaintext(i) + key)% 26 )+ 65
               printf("%c", plaintext(i));
           }
           else 
           {
               ciphertext = ((plaintext(i) + key)% 26) + 97
               printf("%c", plaintext(i));
           }
       }
       else
       {
           printf("%c", plaintext(i));
       }
   }
     }
   else 
   {    
    printf("Error!! try again!!")
        return 1;
   }
    return 0;
}
