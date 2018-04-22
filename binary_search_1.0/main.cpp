#include <iostream> //Mảng đã sắp xếp tăng dần.1 3 5 7 9;
#include <vector>
#define not_found -1
using namespace std;
template <typename comparable>
int binarys(const vector<comparable> & a, const comparable &x, int l,int r)
{
    int mid=(l+r)/2;
    if (a[mid]<x){ return binarys(a,x,mid,r);}
        else if(a[mid]>x){ return binarys(a,x,l,mid);}
             else return mid;
}
int main() {
    vector<int> arr;
    int x,a;
    cout<<"Nhap x";
    cin>>x;
    while(a!=-1)
    {
        cout<<"\nNhap cac phan tu(Nhập -1 đe ket thuc)";
        cin>>a;
        arr.push_back(a);
    }
    cout<<binarys(arr,x,0,arr.size()-1);
    return 0;
}