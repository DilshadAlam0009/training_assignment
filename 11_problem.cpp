/*  
*       * * * * * 
*       * 
*       * 
*       * 
* * * * * * * * * 
        *       * 
        *       * 
        *       * 
* * * * *       *  
*/

#include<iostream>
using namespace std; 

int main(){
    int n;
    cout<<"Enter the value in odd form: ";
    cin>>n;
    
for(int i=1;i<=n/2;i++)
{
    
    if(i==1)
    {
       cout<<"* ";
       for(int j=1;j<=n/2-1;j++)
       {
        cout<<"  ";
       }
       for(int j=1;j<=n/2+1;j++)
       {
        cout<<"* ";
       }
    }
   
    else
    {
        cout<<endl;
        cout<<"* ";
        for(int j=1;j<=n/2-1;j++)
       {
        cout<<"  ";
       }
       cout<<"* ";
        
    }
 

}

cout<<endl;
for (int j=1;j<=n;j++)
{
            cout<<"* ";
}
cout<<endl;
for(int i=1;i<=n/2-1;i++)
{
    for(int j=1;j<=n/2;j++)
    {
        cout<<"  ";
    }
    cout<<"* ";
    for(int j=1;j<=n/2-1;j++)
       {
        cout<<"  ";
    }
    cout<<"* ";
   
    cout<<endl;
}
  
for(int j=1;j<=n/2+1;j++)
      {
        cout<<"* ";

      }
      for(int j=1;j<=n/2-1;j++)
       {
        cout<<"  ";
       }
      cout<<"* ";
    
return 0;
}