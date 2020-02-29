#include<iostream>
using namespace std;
int main ()
{
    int n,i,c,p;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
        a[i]=i+1;

    do
        {
            if(n%2==0)
                {
                    for(i=0; i<n/2; i+=2)

                        {
                            b[i/2]=a[i];
                        }

                    for(i=0; i<n/2; i++)
                        a[i]=b[i];
                }

            if(n%2==1)
                {
                    for(i=2; i<n; i+=2)
                        {
                            b[(i-1)/2]=a[i];
                        }

                    for(i=0; i<n/2; i++)
                        a[i]=b[i];
                }
            n/=2;
        }
    while(n>1);
    for(i=0; i<n; i++)
        cout<<a[i]<<" ";

}