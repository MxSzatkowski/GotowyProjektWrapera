#pragma once
//Entity.h
#pragma once
namespace Core
{
    class Entity
    {
    public:
        const char* m_Name;
    private:
        float m_XPos, m_YPos;
    public:
        Entity(const char* name, float xPos, float yPos);
        int add(int a, int b);
        void Move(float deltaX, float deltaY);
        inline float GetXPosition() const { return m_XPos; };
        inline float GetYPosition() const { return m_YPos; };
    };
}