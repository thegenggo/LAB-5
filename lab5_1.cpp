#include<iostream>
using namespace std;

int main(){
    int n;
    int Odd = 0;
    int Even = 0;
    while(true)
    {
        cout << "Enter an integer: ";
        cin >> n;
        if(n==0)
            break;
        else
            {
                if(n%2==0)
                Even++;
                else
                {
                    Odd++;
                }
                
            }
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd;
    return 0;
}
