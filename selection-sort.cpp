#include <iostream>
using namespace std;

int selectionSortx()
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
        //cout << "hello1"<<endl;
        while(j<(sizeof(x)/sizeof(int)))
        {
            if(x[j]<x[min])
            {
                min = j;
                //cout << "hello2"<<endl;
            }
            j=j+1;
            //cout << "hellox"<<endl;
        }
        //cout << "hello3"<<endl;
        if(min!=i)
        {
            int temp = x[i];
            x[i] = x[min];
            x[min] = temp;
            //cout << "hello4"<<endl;
        }
        //cout << "hello5"<<endl;
        for(int n=0; n<(sizeof(x)/sizeof(int)) ; n++)
        {
            cout<<x[n]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
