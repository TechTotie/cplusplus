// const => I promise not to change the value, Compiler enforces promise made by const
// constexpr => To be evaluated at compile time, used to specify constants

const int dmv = 17; // named constant
int var = 17; // not constant
constexpr double max1 = 1.4 * square(dmv); // ok, as dmv is constant and square of 17 , square(17) is constant expression
constexpr double max2 = 1.4 * square(var); //error, var is not constant expression
const double max3 = 1.4 * square(var); // ok, evaluated at runtime
double sum(const vector<double> &); // sum will not modify the contents of vector
vector<double> v {1.2, 3.4, 4.5};
const double s1 = sum(v); // ok, evaluated at run time
constexpr double s2 = sum(v); //error, no conversion from non const to const, compile time error

// For a function to be used in constexpr, the function should be defined as constexpr
constexpr double square(double x)
{
	return x*x;
}

// constexpr fn can be used for constexpr and non constexpr functions too.
