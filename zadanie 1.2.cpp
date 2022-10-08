/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;
    
    cout<< "Podaj liczbe calkowita: ";
    cin >> number;
   
    if (number >=0) {
        cout<<"Wpisales dodatnia liczbe calkowita: " << number <<endl;
    }
    else {
        cout <<"Wpisales ujemna liczbe calkowita: " << number << endl;
    }
    return 0;
}