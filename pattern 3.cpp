// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int main()
{
   int i,j,n=5;
   
   for(i=1;i<=n;i++)
   {
       for(j=5;j>0;j--)
       {
           if(j>i)
           {
               cout<<" ";
           }
           else
           {
               cout<<"* ";
           }
       }
       cout<<endl;
   }
   return 0;
}