#include<iostream>

using namespace std;
int main()
{
	int num,n=10; 
	
	cout << "enter the no of candie for sell" << endl;
	cin >> num;
	
	if(num>=1 && num<=5)
	{
		cout << "the no of candie which is sold : " << num << endl;
		cout << "the no of remaining candies : " << n-num;
	}
	else 
	{
		cout << " the no of candie which you want is invalid" << endl;
		cout << "the remaining candie is : " << n;
	}
	
	return 0;
}
