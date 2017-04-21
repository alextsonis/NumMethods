#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "essentials.hpp"

int main(){
  variableTable foo;
  foo.addVariable("BAD",100);
  foo.addVariable("fooception",10.2);
  foo.addVariable("foerekre",0.0000000001);
  foo.printVariableTable();
}
