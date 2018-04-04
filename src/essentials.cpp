/* Essential functions that will be used throughout the whole project */

#include "essentials.hpp"
using namespace std;
using namespace ess;

ess::variableTable::variableTable () {//Constructor of variableTable classs
  ess::variableTable::numberOfVariables=0;
  ess::variableTable::nameOfVariable.clear();
  ess::variableTable::valueOfVariable.clear();
}

int ess::variableTable::addVariable(std::string name, double value){//Inserts a variable at the variable table
  if (numberOfVariables==UINT_MAX){
    cout << "VariableTable at full size, can't add more\n";
    return 1;
  }
  numberOfVariables+=1;
  nameOfVariable.push_back(*(new string(name)));
  valueOfVariable.push_back(value);
  return 0;
}

int ess::variableTable::removeVariable(std::string name){//Removes a variable from the variable table
  if (numberOfVariables==0){
    cout << "No variables in this table\n";
    return 1;
  }
  unsigned int iterator;
  for (iterator=0;iterator<numberOfVariables;iterator++){
    if (!(std::strcmp(&(nameOfVariable[iterator][0]),&name[0]))){
      nameOfVariable.erase(nameOfVariable.begin()+iterator);
      valueOfVariable.erase(valueOfVariable.begin()+iterator);
      numberOfVariables-=1;
      return 0;
    }
  }
  cout << "No variable with such name\n";
  return 1;
}

int ess::variableTable::changeValueOfVariable(std::string name, double value){//Change the value of a variable in the variable table
  if (numberOfVariables==0){
    cout << "No variables in this table\n";
    return 1;
  }
  unsigned int iterator;
  for (iterator=0;iterator<numberOfVariables;iterator++){
    if (!(std::strcmp(&name[0],&(nameOfVariable[iterator][0])))){
      valueOfVariable[iterator] = value;
      return 0;
    }
  }
  cout << "No variable with such name\n";
  return 1;
}

double ess::variableTable::getValueOfVariable(std::string name){//Get the value of the variable in the variable table
  if (numberOfVariables==0){
    cout << "No variables in this table\n";
    return 0;
  }
  unsigned int iterator;
  for (iterator=0;iterator<numberOfVariables;iterator++){
    if (!(std::strcmp(&name[0],&(nameOfVariable[iterator][0])))){
      return valueOfVariable[iterator];
    }
  }
  cout << "No variable with such name\n";
  return 0;
}

int ess::variableTable::printVariableTable(){//Display the entire variable table
  if (numberOfVariables==0){
    cout << "No variables in this table\n";
    return 1;
  }
  unsigned int iterator;
  for (iterator=0;iterator<numberOfVariables;iterator++){
    cout << "Variable " << nameOfVariable[iterator] << " = " << valueOfVariable[iterator] << "\n";
  }
  return 0;
}
