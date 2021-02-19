//
// Created by rudri on 10/11/2020.
//

#include "global.h"
#include "polynomial.h"

void pregunta_1() {
#ifdef ENABLE_TEST
    polynomial p1 = term{ 1, 0 } + term{ 2, 2 } + term{ 2, 4 };
    cout << p1 << endl; // 1 + 2x^2 + 2x^4;
    auto p2 = term{ 3, 4 } + term{ 2, 6 } + term{ 2, 5 };
    cout << p2 << endl; // 3x^4 + 2x^6 + 2x^5;
    auto p3 = p1 + p2;
    cout << p2 << endl; // 1 + 2x^2 + 6x^4 + 2x^6 + 2x^5;
#endif
}