#include <iostream>
using namespace std;
int main()
{
	int n,sum,r,temp;
	cout<<"Enter a No"<<endl;
	cin>>n;
	temp=n;
	int count;
    while(n>0)
    {
       r=n%10;	
	   sum=sum*10+r;
	   n=n/10;
	 //  count++;
	}
	cout<<sum<<endl;	
//	cout<<count<<endl;
//	if(sum==temp)
//	{
//		//cout<<"Palindrome No"<<endl;
//    }
//    else
//    cout<<"Not Palindrome No"<<endl;
//	
}
