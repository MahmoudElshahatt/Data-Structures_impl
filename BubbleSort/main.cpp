#include <iostream>

using namespace std;

int main()
{
    int a[5];

    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int n=a.size();
    for(int outer=0; outer<n-1; outer++)
    {
        for(int inner=0; inner<n-outer-1; inner++)
        {
            if(a[inner]>a[inner+1])
            {
                swap(a[inner],a[inner+1]);
            }
        }
    }
     for(int i=0; i<5; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}
