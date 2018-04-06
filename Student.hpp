//
//  Student.hpp
//  BeginnerTutorial
//
//  Created by Noah VanSickle on 4/3/18.
//  Copyright © 2018 Noah VanSickle. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp


#include <stdio.h>



class Student{
public:
    Student();
    int getage();
    int getfavnumber();
    
private:
    int age;
    int favnumber;
  
    
};

#endif /* Student_hpp */

