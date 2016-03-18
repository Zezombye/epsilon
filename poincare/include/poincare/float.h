#ifndef POINCARE_FLOAT_H
#define POINCARE_FLOAT_H

#include <poincare/expression.h>

class Float : public Expression {
  public:
    Float(float f);
    ~Float();

    ExpressionLayout * createLayout(ExpressionLayout * parent) override;
    float approximate(Context& context) override;
  private:
    float m_float;
};

#endif