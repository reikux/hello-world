/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout << "Podaj 3 liczby rozdzielone spacja:";
    cin>>a>>b>>c;
    
    m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    
    
    if((a>=b) && (a>=c))
    cout<<"Najwieksza liczba to" <<a;
    else if((b>=a) && (b>=c))
    cout<<"Najwieksza liczba to" <<b;
    else if((c>=a) && (c>=b))
    cout<<"Najwieksza liczba to" <<c;
    
    return 0;
}
