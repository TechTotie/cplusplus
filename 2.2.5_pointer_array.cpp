//Array of char
char arr[6]; // [] means array of

// Pinter to char
char *charptr; // * means pointer to

charptr = &arr[3];

char *ptr2 = &arr[0]; // ptr2 poits to 0th element of char array
char x = *ptr2;       // *ptr2 is object that ptr2 points to

// copy elements from array

void copy_array()
{
    int intArr[5] = {1,2,3,4,5};
    int arr2[5];
    int arr3[5];
    int arr4[3];
    for(int i = 0; i < 5; i++) {
        arr2[i] = intArr[i];
    }
    int c = 0;
    for(int x: intArr) {
        arr3 [c++] = x;
    }
    int k = 0;
    for(int x : {1,2,3}) {
        arr4[k++] = x;
    }
}

// increment using reference

void increment() {
    int arr[] = {1,2,3,4,5};
    for (auto &x : arr) {
        x++;
    }
    for(auto x: arr) {
        cout << x << " ";
    }
}

// T x[n]  ==> means x is a array of n T's
// T *x    ==> means x is pointing to value of type T
// T &x    ==> means x is refering to value of type T
// T f(A)  ==> means fn f is taking argument of type A and returning value of type T

// nullptr is "the null pointer"
// one nullptr is shared by all pointer types
double *pd = nullptr;
Link<Record> *lst = nullptr; // pointer to a Link to a Record
int x = nullptr; // error ==> nullptr is not integer.

// Check if pointer is null before accessing memory
// Checks the number of occurences of character in string
int count_x(char *s, char c)
{
    int count = 0;
    while(s != nullptr) {
        if(*s == c) {
            count ++;
        }
        s++;
    }
    return count;
}
