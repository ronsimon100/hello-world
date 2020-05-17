#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
                //get string from the user
                //run a loop on the string
                    // sum up the amount of words in the string up to 100.
                    // sum up the avarage of letters in every word in the string up to 100.
                    // sum up the amount of sentences in the string up to 100.
                // if less than 100 words in the string compare them to 100.
                // print out algorithem
//int main(int argc, string argv[])
int main(void)
{
    float L = 0;              // the average number of letters per 100 words in the text
    float S = 0;              // the average number of sentences per 100 words in the text
    int Sumwords = 0;
    int Sumletters = 0;
    int SumSentences = 0;
    char Text [800];
    printf("Enter your text: " );
    fgets(Text, 800, stdin);
    for(int i=0; i<strlen(Text)-1; i++)
    {
        if( Text[i] == ' ' && Text[i+1] != ' ')
        {
             Sumwords ++;
        }
        else if(Text[i] == '.' || Text[i] == '!' || Text[i] == '?')
        {
            SumSentences++;
        }
            //else if(Text [i] == XXXXXXXXXXX);
                else Sumletters ++;
    }
    if( Text[strlen(Text)-1] != ' ')
    {
        Sumwords ++;
    }
    int LastCell = strlen(Text)-2;
    int length = strlen(Text);
    if(Text[LastCell] != '.' && Text[LastCell] != '!' && Text[LastCell] != '?')
    {
        SumSentences++;
    }
    printf("Last cell %d, %d\n", LastCell, length);
    if( SumSentences == 0 )
    {
         SumSentences = 1;
    }
    printf("%d %d %d \n", SumSentences, Sumwords, Sumletters);
    L = Sumletters/Sumwords*100;
    S = SumSentences/Sumwords*100;
     printf("%f %f\n", L, S);
    int index = round( 0.0588 * L - 0.296 * S - 15.8);
    printf(" your writing grade is: %d \n", index);

    return 0;
}
