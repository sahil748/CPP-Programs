#include<iostream>
using namespace std;
int main()
{
    int size,item;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number tou want to search";
    cin>>item;
    int beg=0;
    int k=sizeof(a)/sizeof(a[0]);
    int end=(k-1);
int mid;
mid=(beg+end)/2;
    while(a[mid]!=item && beg<=end)
    {


    if(item>a[mid])
    {
        beg=mid+1;
    }
    else if(item<a[mid])
    {
        end=mid-1;
    }
    mid=(beg+end)/2;
    }
     if(a[mid]==item)
    {

        cout<<"element at"<<mid<<endl;
    }


}
