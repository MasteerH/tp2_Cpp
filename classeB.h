class B{
    double x = 0.0;
    double y = 0.0;

    public:

    B();
    ~B();
    B(const B&);
    B& operator = (const B&);
    B(B&&);
    B& operator = (B&&);
};