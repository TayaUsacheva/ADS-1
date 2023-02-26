// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    bool flag = true;
    for (int i = 2; i <= (value / 2); i++) {
        if ((value % i) == 0)
            flag = false;
    }
    return flag;
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
    bool flag = false;
    while (flag == false) {
        value++;
        for (int i = 2; i <= (value / 2); i++) {
            if ((value % i) == 0)
                flag = false;
            else
                flag = true;
        }
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    int x = 2;
    int sum = 2;
    while ((x +1) < hbound) {
        x++;
        int kol_vo_del = 2;
        for (int i = 2; i <= (x / 2); i++) {
            if ((x % i) == 0)
                kol_vo_del++;
        }
        if (kol_vo_del == 2)
            sum+=x;
    }
    return sum;
}
