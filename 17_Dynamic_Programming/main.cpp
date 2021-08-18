//
//  main.cpp
//  17_Dynamic_Programming
//
//  Created by 세광 on 2021/08/17.
//

#include <iostream>

using namespace std;

long long int d[100];

long long int Fibonacci(int x) {
    if (x == 1) return 1;
    if (x == 2) return 2;
    if (d[x] != 0) return d[x];
    return d[x] = Fibonacci(x - 1) + Fibonacci(x - 2);
}

int main() {
    cout << Fibonacci(50) << endl;
}
