
    class Entity
    {
    private:
        float m_A, m_B, m_Result;
    public:
        Entity();
        virtual ~Entity();
        float Add(float a, float b);
        inline float GetA() const { return m_A; };
        inline float GetB() const { return m_B; };
        inline float GetALL() const { return m_B + m_A; };
    };