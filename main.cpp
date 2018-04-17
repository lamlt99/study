#include <iostream>
class point{ //mặc định private
private:
    int x,y;
public:
    point(void){x=0;y=0;}
    point(int m, int n){x=m;y=n;}
    friend std::ostream&operator<<(std::ostream& stream, point z);

};
std::ostream& operator<<(std::ostream& stream, point z){
    stream<<z.x<<","<<z.y;
    return stream;
}
int main() {
    point a;
    std::cout<<a<<"\n";
    point b=point(1,2);
    std::cout<<b<<"\n";
    point* pointer;
    pointer = new point(2,1);
    std::cout<< &pointer;
    delete(pointer);
    return 0;
}