//
//  prover2.cpp
//  MentalCards
//
//  Created by hoshi on 15.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#include "prover2.hpp"

PROVER2::PROVER2(mpz_class a1, mpz_class a2, mpz_class q, mpz_class xi){
    this -> a1 = a1;
    this -> a2 = a2;
    this -> q = q;
    this -> xi = xi;
}

PROVER2::~PROVER2(){
    std::cout << "Prover2 destructed..." << std::endl;
}

std::vector <mpz_class> PROVER2::sendWithRandomR(){
    std::size_t size = 2;
    std::vector<mpz_class> temp(size);
    temp.clear();
    
    return temp;
}

