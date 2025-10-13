#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
int a, b;
if (argc >=3) 
{ a =  stoi(argv[1]); b= stoi(argv[2]); }


else { cin >> a >> b; }
int l = min(a, b), r = max(a, b);
if (l % 2) l++;
if (r % 2) r--;

long long sum = 0;
if (l <= r)  {
long long n = (r - l) / 2 + 1;
sum = n * (l + r) / 2;
}
cout << sum << endl;
}


