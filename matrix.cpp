#include<iostream>

using namespace std;

int main()
{
	int i,j,a[80][80],m,n;
	
	cout << "enter the size of the matrix : " << endl;
	cin >> m >> n;
	
	cout << "enter the elements of the matrix : " << endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << "The matrix you entered : " << endl;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
return 0;
}
