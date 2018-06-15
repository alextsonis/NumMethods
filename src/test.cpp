#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "essentials.hpp"

using namespace ess;

int main(){
  int a;
  double result;
  variableTable foo;
  actionnode a1(oper_div),a2(20.0),a3,a4;
  actiontree at(&a1);
  foo.addVariable("BAD",100);
  foo.addVariable("fooception",10.2);
  foo.addVariable("foerekre",0.0000000001);
  foo.printVariableTable();
  a1.setleft(&a2);
  a1.setright(&a3);
  a1.printnode();
  std::cout << std::endl;
  result = a1.calculate();
  std::cout << result << std::endl;
  result = at.calculate();
  std::cout << result << std::endl;
  result = a4.calculate();
  std::cout << result << std::endl;
  std::cin >> a;
  return EXIT_SUCCESS;
}
