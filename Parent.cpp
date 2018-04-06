//
//  Parent.cpp
//  BeginnerTutorial
//
//  Created by Noah VanSickle on 4/3/18.
//  Copyright © 2018 Noah VanSickle. All rights reserved.
//

#include "Parent.hpp"
#include <iostream>
using namespace std;


Parent::Parent(){
    age = 55;
    favnumber = 42;
}
int Parent::getage(){
    return age;
}
int Parent::getfavnumber(){
    return favnumber;
}


