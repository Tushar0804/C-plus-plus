#include <iostream>
using namespace std;

template <typename A, typename B, typename R>
R add(A num1, B num2)
{
    R ans = num1 + num2;
    return ans;
}

int main()
{   
    cout << "2 + 3 = " << add<int, int, int>(2, 3) << endl;
    
    cout << "20 + 40.86 = " << add<int, float, double>(20, 40.86) << endl;
    return 0;
}
