#include<iostream>
using namespace std;
int main()    
{
    int n, i,larr[50],uarr[50],medclass;
    float  armean,cf[50],farr[50], fsum=0,mfsum=0,N2,med,p1,p2;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"Please Enter a class having magnitude 20 only";
    cout<<"\nEnter "<<n<<" Number of Lower Limit Elements: \n";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>larr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Upper Limit Elements: \n";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>uarr[i];  
    }
    
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    N2=fsum/2;
    cout<<"\nValue of N/2 ="<<N2<<"\n";
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cf[0]=farr[0];
        {
         for(i=1;i<n;i++)
         cf[i]=(cf[i-1]+farr[i]);
        }
        cout<<endl;
    }
    cout<<"\nCommulative frequency  for respective X and F \n\nX----F ----CF\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"----"<<farr[i]<<"----"<<cf[i]<<"";
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        if (cf[i]>=N2)
        {
            medclass=i;
            break;
        }
    }
    cout<<"Median class is = "<<larr[medclass]<<"-"<<uarr[medclass];
    cout<<endl;
    for(i=0; i<n; i++)
    {
        p1=20/(farr[medclass]);
        p2=N2-(cf[medclass-1]);
      med=larr[medclass]+p1*p2;  
    }
    cout<<"*******************************************************";
    cout<<"\nMedian is Found to be = "<<med<<"\n";
    cout<<"*******************************************************";
    return 0;
    
}