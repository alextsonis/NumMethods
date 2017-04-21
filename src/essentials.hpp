/* Essential functions that will be used throughout the whole project */
/*       _
    .___(')< (WOOF)
     \___/
~~~~~~~~~~~~~~~~*/
#include <iostream>
#include <string>
#include <cstring>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <vector>

#ifndef ESSENTIALS_NUM_METHODS
#define ESSENTIALS_NUM_METHODS

class variableTable{//Contains all the variables of a function
  private://Variables of a variableTable entity
    unsigned int numberOfVariables;
    std::vector<std::string> nameOfVariable;
    std::vector<double> valueOfVariable;
  public://Constructor of a variableTable entity
    variableTable ();
  public://Methods of a variableTable entity
    int addVariable(std::string name, double value);//Inserts a variable at the variable table
    int removeVariable(std::string name);//Removes a variable from the variable table
    int changeValueOfVariable(std::string name, double value);//Change the value of a variable in the variable table
    double getValueOfVariable(std::string name);//Get the value of the variable in the variable table
    int printVariableTable();//Display the entire variable table
};

#endif
