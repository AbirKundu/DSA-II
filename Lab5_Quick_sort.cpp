#include<iostream>
using namespace std;


int main()
{
    int a[] = {69,12,6,13,19,45,2};
    int n = sizeof(a)/sizeof(int);

    cout<<"Printing Sorted Array : ";
    for(auto i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
