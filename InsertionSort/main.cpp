#include <iostream>

using namespace std;

int main()
{
    int a[5];

    for(int i=0; i<5; i++)
    {
        cin>>a[i];
    }
    int n=5;
    int key,inner=0;
    for(int outer=1; outer<n; outer++)
    {
        key=a[outer];
        inner=outer-1;
        while(inner>=0&&a[inner]>key)
        {
            a[inner+1]=a[inner];
            inner=inner-1;
        }
        a[inner+1]=key;
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}
