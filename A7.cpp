#include <iostream>
#include <cstring>
using namespace std;

int check (string a, string b)
{
    int l1 = a.length(), l2 = b.length();
    int count = 0;
    char* m = &a[0];
    char* n = new char[l1];
    for (int i = 0; i <= l2 - l1; i++){
        if (b[i] == a[0]){
            for (int j = 0; j < l1; j++){
                n[j] = b[i+j];
            }
            if (strcmp(n,m) == 0) count++;
        }
    }
    return count;
}

int main(int argc, char* argv[])
{
    string a,b;
    cin >> a >> b;
    cout << check(a,b);
    return 0;
}
