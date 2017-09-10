#include <iostream>
using namespace std;
#include "sorting.h"


int binarySearchx(int x[],int actual_len)
{
    //int x[] = {10,1,4,2,3,5,6,7,8,9,12,13,14,15,16};
    int fnd = 6,counter=0,flag=0;
    int start = 0;
    //int actual_len = sizeof(x)/sizeof(int);
    int len = actual_len-1;
    int middle;
    selectionSort(x,actual_len);
    cout<< endl<<"array is sorted"<<endl;
    do
    {
        counter++;
        if((start+len)%2==0)
            middle = (len+start)/2;
        else
            middle = (len+start+1)/2;

        if(x[middle]==fnd)
        {
            cout << endl << "array contains the number "<<fnd;
            flag=1;
            break;
        }
        if(middle==len)
            break;
        else if(x[middle]<fnd)
        {
            start = middle;
        }
        else if(x[middle]>fnd)
        {
            len = middle;
        }
    }while(1);
    if(flag==0)
        cout <<"array doesn't contains the number"<<endl;
    cout<<endl<<"total no of comparisons "<<counter;
    return 0;

}
