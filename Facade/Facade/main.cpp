//
//  main.cpp
//  Facade
//
//  Created by 陈上雁 on 2023/9/6.
//

#include <iostream>
#include "Facade.hpp"
using namespace std;

int main() {
    Facade* f = new Facade();
    f->OperationWrapper();
    return 0;
}
