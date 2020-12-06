//
// Created by AR on 12/5/2020.
//
#include <iostream>

#ifndef LIBRERIAS_LIBRERIA_HPP
#define LIBRERIAS_LIBRERIA_HPP

int factorial(int number);

int factorial(int number) {
    int iteration, factorial = 1;
    for (iteration = 1; iteration <= number; iteration++) {
        factorial = factorial * iteration;
    }
    return factorial;
}

#endif //LIBRERIAS_LIBRERIA_HPP
