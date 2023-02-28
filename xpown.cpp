#include<iostream>
#include<boost/format.hpp>

using namespace std;

int main()
{
    double power(double x, int n);
    double x;
    int n;
    cout<<"Please enter base number x: ";
    cin>>x;
    cout<<"Please enter power n: ";
    cin>>n;
    cout << boost::format("%f^%d = %f\n") % x % n % power(x, n) << endl;

	return 0;
}

double power(double x, int n)
{
    double val {1.0};
    while (n--)
        val *= x;
    return val;
}