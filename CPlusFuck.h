#include<iostream>
#include<cstdio>

//essentials
#define Then {
#define End }
#define Stop ;

// ()
#define IfStart (
#define IfEnd )
#define FunctionParamStart (
#define FunctionParamEnd )
#define define ForStart (
#define ForEnd )


//statements
#define When while
#define ForLoop for
#define BreakStatement break End
#define IfStatement if
#define TryStatement try
#define CatchStatement catch
#define ReturnOne return 1 Stop

//functions
#define FuckUpMyPC for(int i = 0;i<99999999999999999999;i++){std::cout << "CPlusFuck" << std::endl;}
#define Print printf
