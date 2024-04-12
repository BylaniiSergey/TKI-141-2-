#pragma once
#include "BaseAnswer.h"

class RealAnswer : public BaseAnswer
{
public:
    RealAnswer(const double first, const double second);

    std::string ToString() const override;

private:
    double first;
    double second;
};