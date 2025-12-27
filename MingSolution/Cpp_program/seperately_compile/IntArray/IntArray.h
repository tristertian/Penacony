#ifndef ___Class_IntArray
#define ___Class_IntArray

class IntArray{
    int nelem;
    int* vec;
public:
    // Constructor
    explicit IntArray(int size) :nelem(size){
        vec = new int[nelem];
    }                               // after explicit declaration, 'implicit cast' can' t happen when initialization

    // Copy Constructor
    IntArray(const IntArray& x);

    // Destructor
    ~IntArray(){delete [] vec;}

    // Getter
    int size() const {return nelem;}

    // Operator overloading
    IntArray& operator=(const IntArray& x); // assignment operator must be member function
    int& operator[](int i){return vec[i];}
    const int& operator[](int i) const {return vec[i];}
};

#endif