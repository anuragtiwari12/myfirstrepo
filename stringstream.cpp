#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<sstream>


using namespace std;

int main()
{
	//stringstream stri;
	string str1,str2;
	int a,b;
	
	cout << " enter the values" << endl;
	
	cin >> a >> b;
	cout << "integers converted to strings" << endl;

	stringstream( str1 , str2);
	cout << str1 << endl;
	cout << str2;

	return 0;
}
	vector<int> stringstream()
	{
	    stringstream stri;
	    stri << a;
	    stri >> str1;
	
	    stri << b;
	    stri >> str2;
}
