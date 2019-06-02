//
//  Factory.hpp
//  MentalCards
//
//  Created by hoshi on 30.01.19.
//  Copyright © 2019 hoshi. All rights reserved.
//
#pragma once
#ifndef Factory_hpp
#define Factory_hpp

#include <stdio.h>
#include <gmpxx.h>
#include <iostream>
#include <cmath>
#include <vector>

namespace factory {
    // get a random number with given bits
    mpz_class getRandomBits(int bits);
    
    // get a random prime number with given bits
    mpz_class getRandomPrime(int bits);
    
    // get a pair of prime number key set
    
    
    //base^exponent%n
    mpz_class fun(const mpz_class exponent, const mpz_class base, const mpz_class n);
    
    //inverse modulo, a^(-1) in GF(n)
    // A * X  mod N = 1, X is A^(-1) mod N
    mpz_class ex_Eulid(const mpz_class a, const mpz_class n);
    
    //generator a random number
    mpz_class random(const mpz_class lower, const mpz_class upper);
    
    //find generators for a finite group
    void Gfun(const mpz_class q, const mpz_class p);
    
    mpz_class randbits(int bits);
    
    mpz_class randprime(int bits);
    
    // vertify if a number is a prime number
    // Miller-Rabin probabilistic primality tests
    bool isPrimeNumber(const mpz_class p);
    
    std::vector<mpz_class> getSecureRandPrimePair(int bits);
    
    mpz_class getSecureRandPrime(int bits);
}

#endif /* Factory_hpp */
