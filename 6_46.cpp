#include<iostream>

using namespace std ;

template <class T>


T GetMinMax(T a, T b, T c)
{
    if(a>b && a>c)
    {
        cout << " Maximum Number is : " << a << endl ;

    }else if (b>a && b>c)
    {
        cout << " Maximum Number is : " << b << endl ;
    }else
    {
        cout << " Maximum Number is : " << c << endl ;
    }
    
}

int main()
{
    double x, y, z ;
    cout << "Enter three numbers : " << endl ;
    cin >> x >> y >> z ;

    GetMinMax(x,y,z) ;    
}