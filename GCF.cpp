#include <iostream>
#include <cmath>

using namespace std;

int GCF_OF(int x1, int x2)
{
    if (x1 == 0 || x2 == 0) { return max(x1, x2);}
    while(x1 == 0 || x2 == 0)
    {
        GCF_OF(x2, max(x1, x2) % min(x1, x2));
    }
    return 11;
}

int main()
{
    cout << GCF_OF(14, 36) << endl;
    return 0;
}