#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int num,i;
	string s;
	int count=0,count2=0;
	cin>>num;
		cin>>s;
	for ( i=0; i<num; i++ )
			{
			if ( s[i]=='A' )
			{
					count++;
			}
			else
				if ( s[i]=='D' )

				count2++;
	}
	if ( count>count2 )
		cout<<"Anton";
	else
		if ( count2>count )
			cout<<"Danik";
		else
			cout<<"Friendship";
}
