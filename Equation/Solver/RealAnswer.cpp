#include <sstream>
#include "RealAnswer.h"

RealAnswer::RealAnswer(const double first, const double second)
    : first{ first }, second{ second }
{
}

std::string RealAnswer::ToString() const
{
    std::stringstream buffer{};
    buffer << "{ " << this->first << "; " << this->second << " }";
    return buffer.str();
}