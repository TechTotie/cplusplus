// Various default data types are
// bool ==> |_|
// char ==> |_|
// short ==> |_|_|
// int ==> |_|_|_|_|
// float ==> |_|_|_|_|
// double ==> |_|_|_|_|_|_|_|_|

// Fundamental types corresponds to hardware facilities and have fixed sizes.

// Char is of natural size of 1 byte, i.e., 8 bits and holds a character.
// size fo any type can be got using the sizeof() operator
// sizeof(char) returns 1 bytes.
// sizeof(int) is often 4

// Operators
// x+y ==> plus
// +x ==> unary plus
// x-y ==> minus/binary minus
// -x ==> unary minus
// x*y ==> multiply
// x/y ==> divide
// x%y ==> remainder(modulus) for integers

// Comparison Operators
// x==y
// x!=y
// x<y
// x>y
// x<=y
// x>=y

// Some more operators
// x+=y ==> x = x+y
// ++x
// x-=y
// --x
// x*=y
// x/=y
// x%=y



// Assignment operator (=) does all meaningful conversions

// Example
void some_function()
{
  double d = 2.2;
	int i = 7;
	d = d+i;
	i = d*i; // truncates the double to an int
}

// Other than Assignment is Initializer List using curly braces
// Assignment operator does default conversions
// but curly braces does not convert by default

// Example
void some_function_()
{
	double d1 = 2.3; 
	double d2 {2.3};
	complex<double> z = 1;
	complex<double> z1 {d1,d2};
	complex<double> z3 = {1,2}; // = is optional
	vector<int> v{1,2,3,4,5,6};

	int i1 = 7.2; // truncated to 7
	int i2 {7.3}; // error - no default conversion
	int i3 = {7.4}; //error - no default conversion // = is redundant

}


// Constant cannot be left uninitialized
// Varibale should not be left uninitialized
// auto keyword deduces the type from the assigned value/initializer
void some_function__()
{
	auto b = true; // b is bool
	auto ch = 'x'; //c is char
	auto i = 123; // i is int
	auto d = 1.2; // d is double
	auto z = sqrt(y); // z has type that sqrt(y) returns
}

