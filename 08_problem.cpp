/*   print pattern like this
     n=4   
           *
         *  *
        *  *  *
      *  *  *  *
     *  *  *  *  *             */
#include<iostream>
using namespace std; 

int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
for(int i=1;i<=n;i++)
{
     for(int j=1;j<=n+1-i;j++){
      cout<<" ";
    }
    for(int j=2*i-i;j>0;j--)
    {
        cout<<"* ";
    }
   
    cout<<endl;
}
return 0;
}