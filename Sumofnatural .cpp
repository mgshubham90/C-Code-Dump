#include<iostream>
using namespace std;
int main(){
    int i,n,sum,count;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
     sum=sum+i;
     if(n%i==0)
      cout<<i<<"  ";
      count++;
    }
    cout<<endl;
     cout<<"Sum of "<<n<<" Natural number is "<<sum<<endl;
    if(count==2)
    {
    	cout<<"It is a prime number";
	}
	else{
		cout<<"It is not a prime number";
	}
     return 0;
}
