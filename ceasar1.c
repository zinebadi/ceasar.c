#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// A program that encrypts messages using Caesar’s cipher. Your program must//

int main(int argc, string argv[])
{
    if (argc != 2)
    {
    printf("error more or less than 2\n");
    return 1;
    }
    else
    {

       int key = atoi(argv[1]);

        if ( key < 0 )
        {
            printf("negative number!\n");
            return 2;
         }
         else
        {
            printf("what s your message?\n");
            string pt = get_string();

        for (int i = 0; i < strlen(pt); i++)
         {
            if (isalpha (pt[i]))
            {
                if (isupper (pt[i]))
                {
                  printf("%c", ((((pt[i] + key) - 65) % 26) + 65));
                }
                else
                {
                  printf("%c",((((pt[i] + key) - 97 )% 26) + 97));
                }
             }
            else
            {
               printf("%c", pt[i]);
            }
          }
        printf("\n");
        return 0;
        }
    }
}
