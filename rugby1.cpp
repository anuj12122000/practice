#include<iostream>
using namespace std;
int main()
{

      int n;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n-i;j++)
          {
              cout<<"-";

          }

           int val=i;
        for(int j=1;j<=i;j++)
        {

            cout<<val;
        val++;
        }

      cout<<endl;
      }


    return 0;
}

