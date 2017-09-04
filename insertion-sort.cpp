#include <iostream>
using namespace std;

int insertionSortx()
{

    int x[] = {10,9,4,2,3,8,5,6,7,1};
    for(int i=0; i<(sizeof(x)/sizeof(int)) ; i++)
    {
        cout<<x[i]<<"  ";
    }
    int j,count=0;
    cout << endl;
    for(int i=1; i<(sizeof(x)/sizeof(int)); i++)
    {
        j=i;
        while(j>0 && x[j-1]>x[j])
            {
                int temp = x[j-1];
                x[j-1] = x[j];
                x[j] = temp;
                j=j-1;
                for(int n=0; n<(sizeof(x)/sizeof(int)) ; n++)
                {
                    cout<<x[n]<<"  ";
                }
                cout<<endl;
                count++;
            }
    }
    cout<<endl<<count;
    return 0;
}
