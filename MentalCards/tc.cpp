//
//  tc.cpp
//  MentalCards
//
//  Created by hoshi on 08.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#include "tc.hpp"
#include <iostream>

TC::TC(int n){
    TC::cardnum = n;
}

TC::~TC(){
    std::cout << "TinyCard destructed..." <<std::endl;
}

void TC::set_cardnum(int n){
    TC::cardnum = n;
}

int TC::get_cardnum(){
    return TC::cardnum;
}

