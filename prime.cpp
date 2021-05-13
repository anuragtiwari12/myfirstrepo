#include<iostream>

using namespace std;

int main()
{
	int n,flag = 0,i;
	
	cout << "enter the number" << endl;
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		flag = flag+1;
	}
	if(flag == 2)
	cout << "Given number is a prime number !";
	else
	cout << "Not Prime !";
	return 0;
}
