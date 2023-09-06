//
//  SubSystems.hpp
//  Facade
//
//  Created by 陈上雁 on 2023/9/6.
//

#ifndef Facade_hpp
#define Facade_hpp

#include <stdio.h>

class Subsystem1
{
public:
    Subsystem1();
    ~Subsystem1();
    void Operation();
};

class Subsystem2
{
public:
    Subsystem2();
    ~Subsystem2();
    void Operation();
};

class Facade
{
public:
    Facade();
    ~Facade();
    void OperationWrapper();
private:
    Subsystem1 *_subs1;
    Subsystem2 *_subs2;
};

#endif /* Facade_hpp */
