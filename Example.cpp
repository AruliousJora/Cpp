#include "Example.h"

int MAC(int x, int y, int& sum){
    sum += x * y;
    return sum;
}

int Square(int x){
        return x * x;
}

int Even(int x){
    if (x%2 == 0){
        return 0;
    }
    else {
        return 1;
    }
}