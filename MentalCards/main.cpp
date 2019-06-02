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
#include "prime.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    mpz_class randPrimeP;
    int bits = 1024; // number bits, l_p
    randPrimeP = factory::randprime(bits);
    std::cout << "Prime number p1: " << randPrimeP << std::endl;
    
    //bool pIsPrime = factory::isPrimeNumber(randPrimeP);
    
    //bool qIsPrime = factory::isPrimeNumber((randPrimeP-1)/2);
    
    //std::cout << pIsPrime << std::endl;
    
    //std::cout << qIsPrime << std::endl;
    
    //mpz_class randPrimeP2 = factory::getSecureRandPrime(bits);
    
    //std::cout << "Prime number p2: " << randPrimeP2 << std::endl;
    
    /*
    std::vector<mpz_class> randPrimePair = factory::getSecureRandPrimePair(bits);
    
    std::cout << "secure prime p: " << randPrimePair.at(1) << std::endl;
    
    std::cout << "secure prime q: " << randPrimePair.at(0) << std::endl;
    
    std::cout << "Generator : ";
    factory::Gfun(randPrimePair.at(0), randPrimePair.at(1));
    
    */
    
    mpz_class secureP;
                      
    secureP = SECUREPRIME;
    
    std::cout << "secure prime p: " << secureP << std::endl;
    
    std::cout << "Generator : ";
    factory::Gfun((secureP-1)/2, secureP);
    
    return 0;
}
