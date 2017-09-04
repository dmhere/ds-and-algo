#include <iostream>
using namespace std;
#include "sorting.h"
/*
int selectionSort();
int bubbleSort();
int insertionSort();
*/
int main()
{
    //sorting s;
    cout<<"bubble sort"<<endl;
    bubbleSort();
    cout<<endl<<endl<<"insertion sort"<<endl<<endl;
    insertionSort();
    cout<<endl<<endl<<"selection sort"<<endl<<endl;
    selectionSort();
    return 0;
}
