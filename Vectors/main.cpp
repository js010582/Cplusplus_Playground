#include <iostream>
#include <vector>

// using namespace std;

int main()
{
    //Format: vector<DataType> nameOfVector
    // myVector.push_back(value) ==> adds an element to the END of the vector (also resizes it)
    // myVector.at(index) ==> returns element at specified index number
    // myVector.size() ==> returns an unsigned int equal to the number of elements
    // myVector.begin() ==> reads vector from first element (index 0)
    // myVector.insert(myVector.begin() + integer, new value) ==> adds element BEFORE specified index number
    // myVector.erase(myVector.begin() + integer) ==> removes element at specified index number
    // myVector.clear ==> remvoes all elements in vector
    // myVector.empty ==> returns boolean value if whether vector is empty

    std::vector<int> myVector;

    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(4);
    myVector.push_back(12);
    myVector.push_back(9);


    std::cout << std::endl << "Vector: ";

    for (unsigned int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }

    std::cout << std::endl << "Vector: ";

    myVector.insert(myVector.begin() + 3, 8);

    for (unsigned int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }

    std::cout << std::endl << "Vector: ";

    myVector.erase(myVector.begin() + 2);

    for (unsigned int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }

    std::cout << std::endl;
    std::cout << myVector.empty();

    return 0;
}