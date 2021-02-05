#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int k;
	k=2*n;
 
 
  
    
    for(int i=1;i<=n;i++)
    {
    
    int val=1;
        for(int j=1;j<=i;j++)
        {
            cout<<val;
            val++;
        }
        cout<<endl;
    
    
    
    }
    
    
    
    
    
    for(int i=n+1;i<=k;i++)
    {   int val=n;
        for(int j=n+1;j<=i;j++)
        {
            cout<<val;
            val--;
        }
        cout<<endl;
    }
    
    
    
	return 0;
}
