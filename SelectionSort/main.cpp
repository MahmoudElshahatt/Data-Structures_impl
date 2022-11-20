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
    int minIdx;
    for(int outer=0; outer<n-1; outer++)
    {
        minIdx=outer;
        for(int inner=outer+1; inner<n; inner++)
        {
            if(a[inner]<a[minIdx])
            {
                minIdx=inner;
            }
        }
        swap(a[outer],a[minIdx]);
    }
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<"  ";
    }
    return 0;
}
