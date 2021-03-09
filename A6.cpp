#include <iostream>
using namespace std;
int n, a[100];
void print()
{
    for (int i = 1; i <= 2; i++) cout << a[i] << ' ';
    cout << endl;
}

void combination(int i)
{
    for (int j = a[i-1] + 1; j <= n-2+i; j++)
        {
            a[i] = j;
            if (i == 2) print();
            else combination(i+1);
        }
}

int main(int argc, char* argv[])
{
    cin >> n;
    combination(1);
    return 0;
}
