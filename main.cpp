/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cplummer
 *
 * Created on September 12, 2017, 12:43 PM
 */

#include <iostream>

using namespace std;

int var = 0;

 /*
 *Increments the variable by one.
 */
void increment(int variable)
{
    var = variable + 1;
}
 /*
 * Increments the variable by the expression.
 */
void increment(int variable, int expression)
{
    var += expression;
}

int main(void) {

for(int i = 0; i < 10; i++)
{
    if(i % 2)
    {
      increment(var); 
    }
    else
    {
        increment(var,i);
    }
}
 cout << var << endl;
return 0;
}

