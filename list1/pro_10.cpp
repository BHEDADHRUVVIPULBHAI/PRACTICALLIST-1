#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	
	cout<<"I am bheda dhruv "<<endl;
	cout<<"En_no    220130318012 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
	cin>>b;
	cout<<"Enter the value of c : ";
	cin>>c;
	
/*	if(a>=b)
	{
		if(a>=c)
		{
			cout<<"This number is largest  : "<<a;
		}
		else
		{
			cout<<"This number is largest  : "<<c;
		}
	}
	else
	{
			 if(b>=c)
			{
		 		cout<<"This number is largest  : "<<b;
			}
			else
			{
				cout<<"This number is largest :  "<<a;
			}
	}

	 if(b>=c)
	{
		cout<<"This number is largest  : "<<b;
	}
	else
	{
		cout<<"This number is largest :  "<<c;
	}*/
	if(a>=b)
	{
		cout<<"This number is big  "<<a;
	}
	else if(b>=c)
	{
		cout<<"This number is big  "<<b;
	}
	else
	{
		cout<<"This number id big  "<<c;
	}
	
	return 0;
}
