#include <iostream>
#include <vector>
using namespace std;
template <typename tp>
const tp &findmax(const vector<tp> &arr){
    tp max=arr[0];
    for(tp x:arr){if (x>max) max=x;}
}
int main() {
    return 0;
}