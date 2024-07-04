#include<iostream>
using namespace std;
int main()
{
   int r=5;
    for(int i=r;i>0;i--)
	{
		for(int j=0;j<=r;j++)
		{
	     if(j>=i)
		cout<<"*"<<endl;
	    else
	    cout<<" ";
    	}
    	   }

cout<<"\n";

}
	

