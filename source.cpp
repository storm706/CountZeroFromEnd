//#include "pch.h"
//This program calculates the number of zeros in the value obtained as a result of calculating factorial

#include <iostream>
#include<string>
using namespace std;
int main()
{
	int64_t factorial=-1;
	for (int i=0;factorial < 0 or factorial>20;i++) 
	{
		if(i>0)cout << "Error! your value : " << factorial << endl;
		cout << "Please, enter a number[0-20] to calculate the factorial  " << endl;
		cin >> factorial;
	}
		int i = factorial;
		if (i == 0 || i==1)
		{
			factorial = 1;
			cout << "The result of your calculation  of factorial : " << factorial;
			cout << "\nno zeros in this result!"<<endl;
		}
		else
		{
			for (i; i != 1; i--)
			{
				factorial *= (i - 1);
			}
			
			int count = 0; //variable to store the number of zeros
			cout << "The result of your calculation  of factorial : " << factorial;
			
			//Imagine the result of the calculation in the form of a string, for the possibility of counting characters
			string str = to_string(factorial);
			for (int i = str.size() - 1;; i--)
			{
				if (str[i] != '0')
					break;
				count++;
			}
			cout << "\nThe number of zeros from the end of the line : " << count << endl;
			cout << endl;
		}
 return 0;
}

