#pragma once
#include <string>

class BaseAnswer 
{
public:
    virtual std::string ToString() const = 0;
    ~BaseAnswer() {} ;
};