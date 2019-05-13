//
//  Factory.cpp
//  MentalCards
//
//  Created by hoshi on 30.01.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#include "Factory.hpp"


mpz_class factory::getRandomBits(int bits){
    gmp_randclass a(gmp_randinit_default);
    a.seed(rand());
    mpz_class l(bits);
    //generate a random integer with a specified number of bits
    return a.get_z_bits(l);
}

mpz_class factory::getRandomPrime(int bits){
    mpz_class randBit = getRandomBits(bits);
    mpz_class ret;
    mpz_nextprime(ret.get_mpz_t(), randBit.get_mpz_t());
    return ret;
}

//expontial modulo
mpz_class factory::fun(const mpz_class exponent, const mpz_class base, const mpz_class n){
    //mpz_class ret;
    mpz_class e, b ,temp = 1, remainder = 0;
    e = exponent;
    b = base;
    while(e >= 1){
        if(e == 1){//exponent = 1, result
            remainder = (temp * b) % n;
            return remainder;
        }
        else if(e % 2 == 0){ // exponent is even
            e = e / 2;
            b = (b * b) % n;
        }
        else if(e % 2 == 1){ // exponent is odd
            temp = (b * temp) % n;
            e = e - 1;
        }
    }
    return remainder;
}

//inverse modulo
mpz_class factory::ex_Eulid(const mpz_class x, const mpz_class n){
    mpz_class invmod = 0;
    mpz_class r, d , t1, t2;
    mpz_class a1 = 1, a2 = 0, a3 = n; // GF(n)
    mpz_class b1 = 0, b2 = 1, b3 = x;
    
    while (1) {
        if (b3 == 0) {
            std::cout << "error" << std::endl;
        }
        if (b3 == 1) {
            break;
        }
        // modulo and residue
        d = a3 / b3;
        r = a3 - d * b3;
        
        t1 = a1 - d * b1;
        t2 = a2 - d * b2;
        
        a3 = b3;
        b3 = r;
        
        a1 = b1;
        b1 = t1;
        a2 = b2;
        b2 = t2;
    }
    invmod = (b2 + n) % n;
    return invmod;
}



