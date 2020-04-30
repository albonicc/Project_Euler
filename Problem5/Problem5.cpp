//Problem 5 - Smallest multiple
/* 2520 is the smallest number that can be divided by each of the 
numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by
 all of the numbers from 1 to 20?
*/

#include <iostream>
using namespace std;


void integerDivision()
{
    int remainder = 0;
    int dividend = 1;
    int result = 0;
    bool allNumbers = false;
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
                    13, 14, 15, 16, 17, 18, 19, 20};
    while(allNumbers == false)
    {
        for(int i = 0; i < sizeof(numbers); i++)
        {
            remainder = dividend % numbers[i];
            if(remainder == 0)
            {
                if(i == 19)
                {
                    allNumbers = true;
                    break;
                }
                result = dividend;   
            }
            else
            {
                break;
            }
        }
        if (allNumbers == false)
        {
            dividend++;
        }
       else
       {
           break;
       }
    }
    
    cout << result << endl;
}

int main(void)
{
    integerDivision();
    return 0;
}
