#include <iostream>

using namespace std;

int main()
{
    int t,sum=0,i;
    long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=n%10;
        for(;n!=0;n=n/10)
        {
            i=n%10;
            if(n<10)
                sum+=i;
        }
    cout << sum << endl;
    }
    return 0;
}
