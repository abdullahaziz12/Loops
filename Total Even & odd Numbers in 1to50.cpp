#include<iostream>
using namespace std;

int main() {
    int evenCount = 0;
    int oddCount = 0;

    for(int i = 1; i <= 50; i++) {
        if(i % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers between 1 and 50: " << evenCount << endl;
    cout << "Odd numbers between 1 and 50: " << oddCount << endl;

    return 0;
}

