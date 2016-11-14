//Talgat Yegizbayev
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int num, day,i,j;
	string s;
	int count=0,count2=0,count3=0;
	cin>>num>>day;
	for ( i=0; i<day; i++ )
	{
		cin>>s;
			for ( j=0; j<num; j++ )
			{
				if ( s[j]=='1' )
					count++;
			}
			if ( count == num )
					{
						count2=0;
					}
					else
						count2++;
			if ( count != num && count2>count3  )
			{
				count3=count2;
			}
			count=0;
	}
	cout<<count3;
}
