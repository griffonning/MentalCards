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

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    /*
    mpz_class bitsNumber1 = factory::getRandomBits(512);
    
    std::cout << bitsNumber1 << std::endl;
    
    mpz_class bitsNumber2 = factory::getRandomBits(512);
    
    std::cout << bitsNumber2 << std::endl;
    
    mpz_class randomPrime = factory::getRandomPrime(512);
    
    std::cout << randomPrime << std::endl;
    */
    
    BBS * newBBS = new BBS();
    
    std::cout << newBBS << std::endl;
    
    delete newBBS;
    
    TC * newTC = new TC();
    
    std::cout << newTC << std::endl;
    
    newTC -> set_cardnum(7);
    
    std::cout << newTC -> get_cardnum() << std::endl;
    
    delete newTC;
    
    // exponent = 7, base = 11, n = 23
    mpz_class remainder = factory::fun(74, 509, 1019);
    
    std::cout << remainder << std::endl;
    
    return 0;
}
