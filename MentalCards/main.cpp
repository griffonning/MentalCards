//
//  main.cpp
//  MentalCards
//
//  Created by hoshi on 24.01.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#include <iostream>
#include <gmpxx.h>
#include "bbs.hpp"
#include "Factory.hpp"
#include "tc.hpp"
#include "Protocol/prover2.hpp"
#include "Protocol/verifier2.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    mpz_class randPrimeP;
    int bits = 1024; // number bits, l_p
    randPrimeP = factory::randprime(bits);
    std::cout << "Prime number p: " << randPrimeP << std::endl;
    std::cout << "Generator : ";
    factory::Gfun((randPrimeP-1)/2, randPrimeP);
    
    bool pIsPrime = factory::isPrimeNumber(randPrimeP);
    
    bool qIsPrime = factory::isPrimeNumber((randPrimeP-1)/2);
    
    std::cout << pIsPrime << std::endl;
    
    std::cout << qIsPrime << std::endl;
    
    return 0;
}
