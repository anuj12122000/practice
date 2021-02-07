#include <iostream>
#include<climits>
using namespace std;

int main() {
	
	int max_so_far=INT_MIN;
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{  if(n%i==0 && i>max_so_far && i<10)
	   {  
	      max_so_far=i;
	   }
	       
	   }
	 cout<<max_so_far;  
	return 0;
}
