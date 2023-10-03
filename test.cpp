#include <iostream>

class Foo
{
public:
    Foo()
    {
        std::cout << "Banana" << std::endl;
    }

    Foo(const Foo &other)
    {
        std::cout << "Orange" << std::endl;
    }

    ~Foo()
    {
        std::cout << "Durian" << std::endl;
    }

    Foo &operator=(const Foo &other)
    {
        std::cout << "Rose Apple" << std::endl;
        return *this;
    }
};
Foo func1()
{
    Foo obj;
    return obj;
}

int main()
{
    Foo obj;
    Foo obj2 = func1();
    return 0;
}