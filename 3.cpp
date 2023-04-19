// Cho mảng một chiều các số nguyên. Viết hàm tính tổng các số chẵn
// trong mảng bằng phương pháp đệ qui
#include<iostream>
int sum(int n, int a[])
{
    if(n < 1) return 0;
    if(a[n] % 2 == 0) return a[n] + sum (n - 1, a);
    return sum (n - 1, a);
}
int main()
{
    int n, a[100];
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    std::cin >> a[i];
    std::cout << sum (n, a);
    return 0;
}