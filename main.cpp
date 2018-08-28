#include <iostream>
#include <string>

class A
{
  public:
    // Constructor
    A(std::string name) : nameString(name)
    {
        std::cout << "Constructor for: " << nameString << std::endl;
    }

    // Copy Constructor
    A(A const& otherA) : nameString(otherA.nameString)
    {
        std::cout << "Copy Constructor for: " << nameString << std::endl;
    }

    // Assignment Operator
    A& operator=(A const& otherA)
    {
        std::cout << "Assigment operator for: " << nameString << std::endl;

        nameString = otherA.nameString;
        return *this;
    }

    // Move Constructor
    A(A&& otherA) : nameString(std::move(otherA.nameString))
    {
        std::cout << "Move Constructor for: " << nameString << std::endl;
    }

    // Move Operator
    A& operator=(A const&& otherA)
    {
        std::cout << "Move operator for: " << nameString << std::endl;

        nameString = std::move(otherA.nameString);
        return *this;
    }

    // Destructor
    ~A() {}

    inline std::string ShowName() 
    {
        return nameString;
    }

  private:
    std::string nameString;
};

int main()
{
    return 0;
}