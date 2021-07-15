#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int fibo (int i)  
{  
    if (i == 0)
    {
        return 0;
    }
    else
        if (i == 1)
        {
            return 1;
        }
        else
            {    
                return fibo (i - 1) + fibo (i - 2);
            }
}

int main()
{
    int bil, i;
    
    cout << "Fungsi Rekursif Bilangan Fibonacci" << endl;
    cout << "==================================" << endl;
    cout << "Masukan bilangan : ";
    cin >> bil; 

    cout << "\nFibonacci (" << bil << ") = " << fibo (bil);
  
    getche();
    return 0;
}

