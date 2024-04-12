#include "RealAnswer.h"

RealAnswer::RealAnswer(const double first, const double second)
    : first{ first }, second{ second }
{
}

std::string RealAnswer::ToString() const
{
    return "{ " + std::to_string(first) + "; " + std::to_string(second) + " }";
}