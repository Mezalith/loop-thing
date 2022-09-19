#include <iostream>

void func()
{
    for (int i = 0; i <= 50; i++)
    {
        if (i <= 10)
        {
            std::cout << i << "\n";
        }
        else
        {
            i -= i;
        }
    }
}

int main()
{
    func();
    return 0;
}