#include<iostream>
using namespace std;
void printarr(int A[],int n)
{
   for(int i=0;i<n;i++)
   {
       cout<<A[i]<<"  ";
   } 
}
int main()
{
   int n,start,A[50];
   cout<<"Enter n:";
   cin>>n;
   int val = 1;
   if(n%2==0)
   start=0;
   else
   start=1;
   for(int i = 0;i<=(n-1)/2;i++)
   {
    A[i]=val;
    val=val+2;   
   }
   val=n-start;
   for(int i = (n+1)/2;i<n;i++)
   {
     A[i]=val;
     val=val-2;
   }
   printarr(A,n);
   return 0;
}
