#include <iostream>

class IntCell {
public:
    explicit IntCell(int initialValue = 0) { storedValue = new int {initialValue}; }

    ~IntCell(){delete storedValue};

    int read() const { return *storedValue; }

    void write(int x) { *storedValue = x; }
private:
    int *storedValue;
};
IntCell & operator= ( const IntCell & rhs ){//Copy assigment
    IntCell copy = rhs;
    std::swap( *this, copy );
    return *this;
}

int main(){
    return 0;
}
