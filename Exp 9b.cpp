//Access elements of array using pointer

#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = {3,7,2,1,8};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}

