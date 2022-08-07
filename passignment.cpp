#include <iostream>
using namespace std;
void prime(int a);

/* Benaiah Odametey, 10954300
Sir, please I had to research so i had a little help!

*/
int main() {

int number = 0;

cout << "Enter your number: " << endl;
cin >> number;

prime(number);

}

void prime(int a){
int sum = 0;

for(int i = a; i > 0; i--) {
 bool not_prime = false;

 for (int j = 2; j < i; j++){
    if(i%j==0){
        not_prime = false;
        j=i;
        }

      }
 if(not_prime == false) {
    sum = sum + i;
    }
  }
cout << "The sum is " << sum;
}
