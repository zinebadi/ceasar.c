#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
if (argc == 2)
    {
   int key = atoi(argv[1]);
   printf("what s your message?");
   string plaintext = get_string();
    
   for (i=0; i < strlen(plaintext); i++)
   {
       if (isalpha (plaintext(i)))
       {
           if (isupper
           printf
       }
       else
       {
           printf("%d", plaintext(i));
       }
   }
     }
   else 
   {    
    printf("Error!! try again!!")
   }
}
