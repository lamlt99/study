#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> daymonth{31,28,31,30,31,30,31,31,30,31,30,31};
    int sum=0;
    for( auto x:daymonth )
        sum+=x;
    cout<<sum;
    return 0;
}