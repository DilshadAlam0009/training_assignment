/*   print pattern like this
     n=4
     A  
     A  B     
     A  B  C
     A  B  C  D                    */
#include<iostream>
using namespace std; 

int main(){
int n;
cout<<"Enter the value of n : ";
cin>>n;
for(int i=1;i<=n;i++)
{    
    
    for(int j=1;j<=i;j++){
      char c = 'A'+j-1;
      cout<<c<<" ";
    }
    cout<<endl;
}
return 0;
}