//
//  prover2.hpp
//  MentalCards
//
//  Created by hoshi on 15.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#ifndef prover2_hpp
#define prover2_hpp

#include <stdio.h>
#include <gmpxx.h>
#include <iostream>
#include <vector>

/*
 proof that a2 = a1 ^ xi
 
 input a1 and a2
 
 prover (knows xi)
 */

class PROVER2{
private:
    mpz_class a1; // g
    mpz_class a2; // g ^ xi
    mpz_class q; // mod q
    mpz_class xi; // only prover knows
    mpz_class r; // r is random
    mpz_class a3, a4; // send a3, a4 to verifier
public:
    PROVER2() = default;
    PROVER2(mpz_class a1, mpz_class a2, mpz_class q, mpz_class xi);
    ~PROVER2();
    std::vector <mpz_class> sendWithRandomR(); //send a3 and a4
    mpz_class sendWithS(int s); // s = 0 or 1
};

#endif /* prover2_hpp */
