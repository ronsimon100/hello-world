#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

                //get the key value from the user.
                //Verify key value is valid (i.e. numeric number)
                            // Test for alphabet chars
                            // Test for spaces within string
                // if either test fails inform user and ask for new key value
                // Apply algorithm on the string to create the cypherd string
                    //each char in the string will be changed into its cyphered value, ( Ci = (Pi + K) %26)
                                                                // Convert ASCII to alphabetical index.
                    // the algorithm runs on char Ascii values cyclically (meaning the char after 'z' is 'a')
                    // the algorithm is case sensative,(use function isupper, islower).
                // print out cypher result.
int main(int argc , string argv[])
{
    int n = strlen(argv[1])-1;
    int Key;
    bool HasNoneDigit = false;
    char KeyArray[20];
    strcpy(KeyArray, argv[1]);
    do
    {
    for(int i=0 ; i<n ; i++ )
        {
        if(isdigit(KeyArray[i]) == 0 && KeyArray[i] != 0) HasNoneDigit = true;
        if(HasNoneDigit == true || argv[2] != NULL)
            {
            printf("Enter a numeric number: ");
            fgets(KeyArray, 20, stdin);
            printf("Enter new Key : \n");
            n = strlen(KeyArray)-1;
            }
        }
    }
    while(HasNoneDigit == true && argv[2] == NULL ); // Exit while if all chars are digits
    printf("key value is %s\n", KeyArray);
    string UserText = get_string("UserText: ");
    char CipherText[strlen(UserText)];
    Key = atoi(KeyArray);
    for(int i=0; i<strlen(UserText); i++)
    {
        if(UserText[i] >= 'A' && UserText[i] <= 'Z')
        {
            int alphaindex = UserText[i] - 65;
            CipherText[i] = ((alphaindex + atoi(KeyArray)) % 26) + 65;
        }
        else if(UserText[i] >= 'a' && UserText[i] <= 'z')
                {
                int alphaindex = UserText[i] - 96;
                CipherText[i] = ((alphaindex + atoi(KeyArray)) % 26) + 96;
                }
              else
                {
                CipherText[i] = UserText[i];
                }
    }
    printf("Ciphertext: %s\n", CipherText );

    return 0;
}