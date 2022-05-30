// VersionControlling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    bool alive = true;

    for (int i = 0; i < 42; i++)
    {
        if (i == 39)
        {
            if (alive)
            {
                std::cout << "What number are we again?" << std::endl;

                std::cout << i;

                std::cout << "....Oh yea..." << std::endl;
            }
            

        }
        
    }
}

