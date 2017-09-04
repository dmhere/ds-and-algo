#include <iostream>
using namespace std;

int bubbleSortx()
{
    int x[] = {10,1,4,2,3};
    for(int i=0; i<(sizeof(x)/sizeof(int)) ; i++)
    {
        cout<<x[i]<<"  ";
    }
    cout << endl;
    int count =0;
    for(int i=0;i<(sizeof(x)/sizeof(int));i++)
    {
        int flag=0;
        for(int j=i; j<(sizeof(x)/sizeof(int));j++)
        {
            if(x[j]>x[j+1])
            {
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
                flag=1;
            }
            for(int n=0; n<(sizeof(x)/sizeof(int)) ; n++)
            {
                cout<<x[n]<<"  ";
            }
            cout << endl;
            count++;
        }
        if(flag==0)
            break;
    }
    cout<<endl<<count;
    /*
    for(int i=0; i<(sizeof(x)/sizeof(int)) ; i++)
    {
        cout<<x[i]<<"  ";
    }*/
}
