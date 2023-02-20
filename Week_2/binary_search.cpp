#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    int key;
    int i;
    int size;

    cout<<"Enter array size"<<endl;
    cin>>size;

    cout<<"Enter array in ascending order: "<<endl;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter key to be searched :"<<endl;
    cin>>key;

    int start=0;
    int end = size-1;

    while(start<=end)
    {
        if(key == (start+end)/2)
        {
            cout<<key<<" present at index "<<(start+end)/2 -1;
            break;
            return 0;
        }
        else if(key<(start+end)/2)
        {
            end=(start+end)/2 - 1;
        }

        else 
        {
            start=(start+end)/2 + 1;
        }
    }
     
}
