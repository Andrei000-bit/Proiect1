#include<iostream>
using namespace std;
int main ()
{
    int n,i,c,p;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
        a[i]=i+1;

    while(n)
        {
            p=0;
            for(i=0; i<n; i++)
                if(i%2==0)
                    {

                        b[p++]=a[i];
                    }
            if(p==1)
                break;
            for(i=0; i<p; i++)
                {
                    a[i]=b[i];
                   // cout<<a[i]<<" ";
                }
            n=p;
            c=p;

        }
    for(i=1; i<=p; i++)
       cout<<b[i]<<" ";

}