#ifndef ADD_EXPRESSION_H
#define ADD_EXPRESSION_H

#include "Expression.hpp"
#include <iostream>

class AddExpression : public BinaryExpression {
public:
	AddExpression(Expression *x, Expression *y);
	int solve();
};

#endif