// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i * i <= value; i++) {
        if ((value % i) == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    int number_prime = 0;
    int x = 2;
    int res = 0;
    while (number_prime < n) {
        if (checkPrime(x)) {
            number_prime++;
            res = x;
        }
        x++;
    }
    return res;
}

uint64_t nextPrime(uint64_t value) {
    int i = value + 1;
    while (!checkPrime(i)) {
        i++;
    }
    return i;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (int i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
