//
//  tc.hpp
//  MentalCards
//
//  Created by hoshi on 08.05.19.
//  Copyright © 2019 hoshi. All rights reserved.
//

#ifndef tc_hpp
#define tc_hpp

#include <stdio.h>

// TinyCard
class TC{
private:
    int cardnum;
public:
    TC() = default;
    TC(int n);
    ~TC();
    void set_cardnum(int n);
    int get_cardnum();
};

#endif /* tc_hpp */
