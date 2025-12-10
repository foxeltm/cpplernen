#include <iostream>
#include <ctime>
#include <string>

template<typename L,int N>
class Array
{
private:
    L m_Array[N];
public:
    int Getsize() const { return N; }
};
template<typename T>
void Log(T value)
{
    std::cout << value << std::endl;
}

int main()
{	    
    Array<int ,5> array;
    Log(array.Getsize());

    Log("Marvin is the GOAT");


    std::cin.get();
}
