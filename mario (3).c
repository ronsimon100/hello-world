#include <cs50.h>
#include <stdio.h>

int main(void)
{
int n;
do
{
    n=get_int("Pyramid height between 1 to 8: ");     // gets height entered by user
}
while(n<1||n>8);

for(int i=1; i<=n; i++)     // defines which row we are on 
{
    for(int j=1; j<=n; j++)      // handles the number of hashtags in the row
    {
        if(j<=n-i)
        {
        printf(" ");
        }
        else
        {
        printf("#");
        }
    }
    printf("\n");
}
printf("\n");
}
