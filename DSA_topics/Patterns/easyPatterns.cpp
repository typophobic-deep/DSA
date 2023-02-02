#include <iostream>
using namespace std;
int main() {
  cout << "Hello friends this is deep i am going to print a pyramid \n";
  int i,j,k,n;
 
  cin>>n;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n-i;j++)
        {
          cout<<" ";
        }
      int counter=1;
      for(k=0;k<i+1;k++)
        {
          cout<<counter++<<" "   ;
          
        }
          cout<<"\n";
           
      }
  
}
