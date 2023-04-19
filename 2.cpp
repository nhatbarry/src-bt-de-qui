// Hãy cài đặt hàm đệ qui tính T(n) = n ! = 1 x 2 x 3 x … x n. Trong đó
// T(0) = 1.
#include<iostream>
#include<cmath>
int fact(int n)
{
    if(n == 0) return 1;
    return n * fact(n - 1);
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << fact(n);
}