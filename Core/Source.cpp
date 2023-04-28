
//Entity.cpp
#include "Entity.h"
#include <iostream>

Entity::Entity()
{
}
Entity::~Entity()
{
}
float Entity::Add(float a, float b)
{
        m_A = a;
        m_B = b;
        m_Result = m_B + m_A;
        std::cout << "Result of " << m_A << " + " << m_B << " is " << m_Result << std::endl;
        return a + b;
}