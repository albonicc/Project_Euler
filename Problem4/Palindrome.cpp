#include <iostream>

using namespace std;

bool isPalindrome(int num)
{
	int n, digit, rev = 0;    
	n = num;
	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
    }
	while (num != 0);
  
	if (n == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void palindromeResult()
{
	int result = 0;
	int maxResult = 0;
	
	for(int a = 999; a > 99; a--)
	{
		for(int b = 999; b > 99; b--)
		{
			result = a * b;

			if(isPalindrome(result))
			{
				if(result > maxResult)
				{
					maxResult = result;
				}
			}		
		}
	}

	cout <<	maxResult << endl;
	
}

int main()
{
	palindromeResult();

	return 0;
}