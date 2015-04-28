#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,n,a,b,k=0;
    cin >> t;
    while(t--)
    {
        int flag=0;
        int total[10000]={0};
        k=0;
        cin >> n >> a >> b;
        for(int i=0;i<n;i++)
        {
            int temp = a*i + b*(n-i-1);
            for(int j=0;j<n;j++)
            {
                if(temp==total[j])
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {
                total[k]=temp;
                k++;
            }
        }
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<k-i-1;j++)
            {
                if(total[j]>total[j+1])
                {
                    int temp1=total[j];
                    total[j]=total[j+1];
                    total[j+1]=temp1;
                }
            }
        }
        for(int i=0;i<k;i++)
        {
            cout << total[i];
            if(i!=k-1)
                cout << " ";
        }
        if(t!=0)
            cout << endl;
    }
}
