#include<iostream>
using namespace std;

void Swap(char &a,char &b)
{
	char t;
	t=a;
	a=b;
	b=t;
}

void Permutation(char S[],int i,int n)
{
	int j;
	if(i==n)
	cout<<S<<" ";
	else
	{
		for(j=i;j<=n;j++)
		{
			Swap(S[i],S[j]);
			Permutation(S,i+1,n);
			Swap(S[i],S[j]);
		}
	}
}


int main()
{
	int n;
	cout<<"Enter the no. of characters: "<<endl;
	cin>>n;
	char S[n];
	for(int i=0;i<n;i++)
	{
		S[i]=char(i+97);
    }
	cout<<"The Permutations of the entered string are::  "<<endl;
	Permutation(S,0,n-1);
	cout<<endl;
	return 0;  
	
}
