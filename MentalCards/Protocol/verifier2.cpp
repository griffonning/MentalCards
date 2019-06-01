//
//  verifier2.cpp
//  MentalCards
//
//  Created by hoshi on 15.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#include "verifier2.hpp"

VERIFIER2::VERIFIER2(mpz_class a1, mpz_class a2, mpz_class q){
    this -> a1 = a1;
    this -> a2 = a2;
    this -> q = q;
}

VERIFIER2::~VERIFIER2(){
    std::cout << "Verifier 2 destructed..." << std::endl;
}
