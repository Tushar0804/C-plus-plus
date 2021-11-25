#include<bits/stdc++.h>
using namespace std;

class Remainder
{
    private:
        int a,b,rem;
        
    public:
        Remainder(int a, int b)
        {
            this->a = a;
            this->b = b;
            this->rem = a % b;
        }
        int getrem(Remainder s)
        {
            return s.rem;
        }
};

int main()
{
    int a, b;
    
    cout << "Enter two numbers to find out the remainder : " << endl;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    
    Remainder s(a, b);
    cout << "\nRemainder of " << a << "/" << b << " = " << s.getrem(s) << endl;
    
    return 0;
}
