//Tính S(n) = 1 + 2 + 3 + … + n
#include<iostream>
#include<cmath>
int tong(int n)
{
    if(n == 1) return n;
    return n + tong(n - 1);
}
int main()
{
    int n;
    std :: cin >> n;
    std :: cout << tong (n);
}