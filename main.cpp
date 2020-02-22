#include <iostream>

using namespace std;
void MaxMin(int a[],int low,int high, int max1, int min1)
    {
        int mid,max2,min2;
            if(high-low == 1)
        { if(a[low] > a[high])
            {
            max1 = a[low];
            min1 = a[high];
            }
    else
            {
                max1 = a[high];
                min1 = a[low];
            }
            }
    else if(low == high)
    {
    min1 = max2 = a[low];
    }
    else if(low<high)
        { mid=(low+high)/2;
        MaxMin(a,low,mid,max1,min1);
        MaxMin(a,mid+1,high,max2,min2); if(max1 > max2)
        max1 = max1;
    else
        max1 = max2;
        if(min1 < min2)
        min1 = min1;
    else
        min2 = min2;
    }
    }

int main()
{
    int Array[500000],iNum,i;
    int MaxNum=0,MinNum=0;
    cout << "Enter the size of the array" << endl;
     cin >> iNum;
    cout << "\nEnter the elements of the array:\n" <<endl;
    for(i=0;i<iNum;i++)
        cin >> Array[i] ;
    MaxMin(Array,0, iNum-1, MaxNum, MinNum);
    cout << "\nMaximum number = \n"<< MaxNum << endl;
    cout << "\nMinimum number = \n"<<MinNum << endl;
    return 0;

}
