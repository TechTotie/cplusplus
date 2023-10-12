
// Structures
struct Vector {
    size_t sz;
    char * elements;
};

void init_vector(Vector &v, size_t size) {
    if(size > 0) {
        v.sz = size;
        v.elements = new char[size]; 
    }
}

// Pass by pointer, ref and value
void f(Vector v, Vector *pv, Vector &rv) {
    v.sz // Access elements using . operator
    pv->sz // Access elements using -> operator
    rv.sz // Access elements using . operator

}

// Class
class Vector {
    public:
    Vector(size_t size):sz{size}, elements{new char[size]} {
    }
    char& operator[](int i) {return elements[i];}
    const int size() {return sz;}
    private:
    size_t sz;
    char *elements;
};