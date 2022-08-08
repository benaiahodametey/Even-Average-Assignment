#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    bool isEven = false;
    

for(int i = 2; i <= 10000; i++) {

    if(i % 2 == 0) {
        isEven = true;
    }
     
     if(isEven == true) {
        sum = sum + i;
     }
}
float avg = sum / 10000;
cout << "The average is " << avg;
}