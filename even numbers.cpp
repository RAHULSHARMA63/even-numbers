#include<iostream>
using namespace std;
int main()
{
	int i,num;
    cout<<"print all even numbers until \n";
    cin>>num;
    cout<<"even numbers from 1 to "<< num << " are \n";
    
    for(i=1; i<=num; i++)
{
	    if(i%2==0)
    {
        cout<< i <<"\n";
    }
 }        
            return 0;       
}
