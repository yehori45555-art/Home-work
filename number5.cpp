#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("lucky_tickets.txt");
    int count = 0;
    for (int n = 0; n <= 999999; n++) {
        int d1 = (n / 100000) % 10;
        int d2 = (n / 10000) % 10;
        int d3 = (n / 1000) % 10;
        int d4 = (n / 100) % 10;
        int d5 = (n / 10) % 10;
        int d6 = n % 10;
        int left = d1 + d2 + d3;
        int right = d4 + d5 + d6;
        if (left == right) {
            fout << setw(6) << setfill('0') << n << "\n";
            count++;
        }
    }
    fout.close();
    cout << "Total lucky tickets: " << count << endl;
    cout << "All lucky tickets saved in lucky_tickets.txt" << endl;
    return 0;
}
