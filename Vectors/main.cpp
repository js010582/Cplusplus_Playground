#include <iostream>
#include <vector>

// using namespace std;

int main()
{
    //Format: vector<DataType> nameOfVector
    vector<int> myVector;
    myVector.push_back(3);

    cout << "Vector: ";

    for (unsigned int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i]

    }

    return 0;
}