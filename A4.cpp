#include <iostream>
#include <algorithm>
using namespace std;

int search(int* a, int n, int key)
{
    int low = 0, high = n-1;
    while(high >= low)
    {
        int mid = (low + high)/2;
        if (*(a + mid) == key) return mid;
        else if (*(a + mid) > key) high = mid-1;
        else if (*(a + mid) < key) low = mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    int key;
    cin >> key;
    if (search(a,n,key) >= 0) cout << search(a,n,key);
    else cout << "NO";
    delete []a;
    return 0;
}
