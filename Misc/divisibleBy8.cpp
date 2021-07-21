/* Given a number, the task is to check if a number is divisible by 8 or not. The input number may be large and it may not be possible to store even if we use long long int.*/

// C++ program to find if a number is divisible by
// 8 or not
#include<bits/stdc++.h>
using namespace std;

// Function to find that number divisible by
// 8 or not
bool check(string str)
{
	int n = str.length();

	// Empty string
	if (n == 0)
		return false;

	// If there is single digit
	if (n == 1)
		return ((str[0]-'0')%8 == 0); // str[0]='0'converts a char to an integer by subtracting the ASCII value (48) of 0 from the char. All this is assuming that the character is between chars 0 and 9 inclusive.


	// If there is double digit
	if (n == 2)
		return (((str[n-2]-'0')*10 + (str[n-1]-'0'))%8 == 0);

	// If number formed by last three digits is
	// divisible by 8.
	int last = str[n-1] - '0';
	int second_last = str[n-2] - '0';
	int third_last = str[n-3] - '0';

	return ((third_last*100 + second_last*10 + last) % 8 == 0);
}

// Driver code
int main()
{
	string str = "76952";
	check(str)? cout << "Yes" : cout << "No ";
	return 0;
}
