#include <iostream>
using namespace std;

int selectionSort()
{
    int x[] = {10,1,4,2,3};
    for(int i=0; i<(sizeof(x)/sizeof(int)) ; i++)
    {
        cout<<x[i]<<"  ";
    }
    cout << endl;
    int count =0;
    for(int i=0; i<(sizeof(x)/sizeof(int)); i++)
    {
        int min=i;
        int j=i+1;
        while(j<(sizeof(x)/sizeof(int)))
        {
            if(x[j]<x[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = x[min];
            x[i] = x[min];
            x[min] = temp;
        }
        for(int i=0; i<(sizeof(x)/sizeof(int)) ; i++)
        {
            cout<<x[i]<<"  ";
        }
    }
    return 0;
}
