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
#include <cmath>

#ifndef ESSENTIALS_NUM_METHODS
#define ESSENTIALS_NUM_METHODS

namespace ess{

enum oper{
    oper_add,
    oper_min,
    oper_mul,
    oper_div,
  };

enum actType{
  act_null,
  act_num,
  act_oper,
  act_funct,
};

  class variableTable{//Contains all the variables
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

  class actionnode{//Certain Mathematical Function
    private://Node private variables
      ess::actType act;
      double value=0;
      std::vector<std::string> actFunPara;
      ess::oper oper;
      ess::actionnode *left;
      ess::actionnode *right;
    public://Constructor
      actionnode();
      actionnode(double number);
      actionnode(ess::oper oper);
    public:
      double calculate();
      int printnode();
      int setleft(actionnode *left1);
      int setright(actionnode *right1);
  };

  class actiontree{
    private://Private Variables
      ess::actionnode *top;
    public://Constructor
      actiontree(ess::actionnode *topin);
    public://Public functions
      double calculate();
      int printtree();
  };


  class mathfun{
    private://Variables of a mathematical function
      actiontree acts;
    public://Mathematical Function Constructor
      mathfun ();
    public://Mathematical Function Object Methods
      int parsefunc();//Initializes and parses function from a string
  };
}
#endif
