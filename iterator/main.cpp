#include <iostream>//*itr kiểu int(bài này)
#include <vector>
using namespace std;
template <typename Container>
void print(const Container & c, ostream &out = cout)
{
    if (c.empty()){out<<"empty";}
    else
    {
        auto itr=begin(c);
        out<<"["<< *itr++;
        while (itr!=end(c))
        {
            out<<", "<<*itr++;
        }
        out<<"]";
    }
}
int main() {
    vector<int> arr{2,2,3,4,5,6,7,8,9};
    vector<int>::iterator itr = arr.begin();
    cout<<*itr<<"\n";
    print(arr);
    return 0;
}