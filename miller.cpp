long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
bool miillerTest(int d, int n)
{
    int a = 2 + rand() % (n - 4);
    int x = binpow(a, d, n);

    if (x == 1  || x == n-1)
        return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;

        if (x == 1)      return false;
        if (x == n-1)    return true;
    }

    return false;
}
bool isp(int n, int k)
{if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (int i = 0; i < k; i++)
        if (!miillerTest(d, n))
            return false;
    return true;
}