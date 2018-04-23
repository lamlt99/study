#include <iostream>
#include <algorithm>
//#include <vector>

template<typename Object>
class vector {
public:
    void resize (int newSize)
    {
        if( newSize > theCapacity )
            reserve( newSize * 2);
        theSize = newSize;
    }

    void reserve(int newCapacity)
    {
        if( newCapacity < theSize )
            return;
        Object *newArray = new Object[ newCapacity ];
        for (int k = 0; k < theSize; ++k)
            newArray[ k ] = std::move( objects[ k ]);

        theCapacity = newCapacity;
        std::swap( objects, newArray );
        delete [] newArray;
    }
    explicit vector(int InitSize=0) : theSize{InitSize},
                                      theCapacity{InitSize + SPARE_CAPACITY}
    { objects = new Object[theCapacity]; }

    Object &operator[]( int index ){ return  objects[index]; }

    const Object &operator[]( int index ) const { return  objects[index]; }

    bool empty() const { return  size() == 0; }

    int size() const { return  theSize; }

    int capacity() const { return theCapacity; }

    void push_back(const Object & x)
    {
        if( theSize == theCapacity )
            reserve( 2 * theCapacity + 1);
        objects[ theSize++] = std::move( x );
    }

    void pop_back()
    {
        --theSize;
    }

    const Object & back ( ) const
    {
        return objects[ theSize -1 ];
    }

    typedef Object * iterator;
    typedef  const Object * const_iterator;

    iterator begin( ) { return &objects[ 0 ];}
    const_iterator begin( ) const { return &objects[ 0 ]; }

    vector( const vector & rhs) : theSize{ rhs.theSize },
                                  theCapacity{ rhs.theCapacity },
                                  objects{nullptr}
    {
        objects = new Object[ theCapacity];
        for( int k=0; k < theSize; k++)
            objects[ k ]= rhs.objects[ k];
    }

    iterator end( ) { return &objects[ size( ) ]; }
    const_iterator end( ) const { return &objects[ size( ) ]; }

    static const int SPARE_CAPACITY=16;

    vector &operator= ( const vector & rhs)
    {
        vector copy= rhs;
        std::swap(copy,*this);
        return *this;
    }
    ~vector(){ delete [] objects;}

    vector(vector && rhs) : theSize { rhs.theSize },
                            theCapacity{ rhs.theCapacity }, objects{ rhs.objects }
    {
        rhs.objects = nullptr;
        rhs.theSize = 0;
        rhs.theCapacity = 0;
    }

    vector &operator= ( vector && rhs )
    {
        std::swap( theSize, rhs.theSize );
        std::swap( theCapacity, rhs.theCapacity );
        std::swap( objects, rhs.objects );

        return  *this;
    }

private:
    int theSize;
    int theCapacity;
    Object * objects;

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}