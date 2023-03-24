#include <iostream>
using namespace std;

int sumprime(int n=5){
    int c = n;
    int sum;
    int i = 2;
    while (c > 0){
        bool isPrime = true;
        for (int j=2; j<i; j++){
            if (i%j==0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            sum += i;
            cout << i << '\n';
            c -= 1;
        }
        i++;
    }
    return sum;
}

int main(){
    cout << sumprime(10);
    return 0;
}