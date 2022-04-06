#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[100][100];
    float s1=0,s2=0,k1=0,k2=0;
    cin>>n;
    for(i=1 ; i<=n ; i++)
        for(j=1 ; j<=n ; j++)
            cin>>a[i][j];
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(i>j && a[i][j]>0)
            {
                s1=s1+a[i][j];
                k1++;
            }
            else if(i<j && a[i][j]>0)
            {
                s2=s2+a[i][j];
                k2++;
            }
        }
    }
    cout<<(s2/k2)-(s1/k1);
    return 0;
}
