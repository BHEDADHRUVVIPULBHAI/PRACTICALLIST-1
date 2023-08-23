#include<iostream>
using namespace std;
int sum(int );
int main()
{
	int n;
	cout<<"I am dhruv bheda "<<endl;
	cout<<"En_no    220130318012 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the numebr : ";
	cin>>n;
	
	sum(n);
	return 0;
}
int sum(int n)
{
	int i,s=0;
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	cout<<s;
}
