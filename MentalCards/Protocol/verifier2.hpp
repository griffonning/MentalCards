//
//  verifier2.hpp
//  MentalCards
//
//  Created by hoshi on 15.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#ifndef verifier2_hpp
#define verifier2_hpp

#include <stdio.h>
#include <gmpxx.h>
#include <iostream>

class VERIFIER2{
private:
    mpz_class a1; //g
    mpz_class a2; // g^xi
    mpz_class q; // mod q
    int s; // s is random, s = 0 or 1
    mpz_class a3, a4; // get a3, a4 from prover
public:
    VERIFIER2() = default;
    VERIFIER2(mpz_class a1, mpz_class a2, mpz_class q);
    ~VERIFIER2();
    int sendRandomS();
    void getWithRandomR(std::vector <mpz_class> temp); // get a3 and a4
    bool check(int s); // check with different s
    bool check(); // check with different s
};

#endif /* verifier2_hpp */
