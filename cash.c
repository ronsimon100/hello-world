#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

//1.	We receive change amount to be returned.
//2.	Using the 4 different coins, calculate the minimum number of coins needed by:
    //a.   	Calculate max number of 25c coins
    //b.	Using remainder from a, calculate max number of 10c coins.
    //c.	Using remainder from b, calculate max number of 5c coins.
    //d.	Using remainder from c, calculate max number of 1c coins.
    //e.	Sum up number of coins from a, b, c and d.
//3.	Print the sum of coins from e
int mincoins = 0;
float Change ;
do
{
  Change = get_float("Enter amount of change: " )  ;
} 
while ( Change <= 0 );

int changeInCents = Change* 100;
int Temp;
for( Temp = 25; Temp < changeInCents; Temp = Temp + 25 )
{
    mincoins++;
}
changeInCents = changeInCents + 25 - Temp;
int Tens;
for( Tens = 10; Tens < changeInCents; Tens = Tens + 10)
{
    mincoins++;
}
changeInCents = changeInCents + 10 - Tens;
int Fives;
for( Fives = 5; Fives < changeInCents; Fives = Fives + 5)
{
    mincoins++;
}
changeInCents = changeInCents + 5 - Fives;
mincoins = mincoins + changeInCents;
printf("The minimum number of coins is %d/n", mincoins);

}
