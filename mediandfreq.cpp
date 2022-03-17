#include<iostream>
using namespace std;
int main()
{
    int n, i,med;
    float arr[50], sum=0, armean;
    cout<<"Enter Total No. of Elements = ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements: \n ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<"\n Sum of Elements ="<<sum;
    armean = sum/n;
    cout<<"\nArithmetic Mean of "<<n<<" Number of Elements is found to be = "<<armean;
    cout<<endl;

    int j;
    float farr[50], fsum=0;
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
    for(j=0; j<n; j++)
    {
        cin>>farr[j];
        fsum = fsum+farr[j];
    }
    cout<<"\n Sum of Frequency Elements ="<<fsum;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if (arr[i]>=armean)
        {
            med=i;
            break;
        }
    }
    cout<<"\n Median is Found to be = "<<arr[med];
    return 0;
}