#include <iostream>
#include <ctime>

class vector_t 
{
private:
    unsigned int size_;
    unsigned int capacity_;
    int* ptr_;
    //auto swap(vector_t& other) -> void;
public:
    vector_t() noexcept;
    vector_t(unsigned int size);
    vector_t(const vector_t& other);
    auto operator=(const vector_t& other) -> vector_t&;
    ~vector_t() noexcept;
    auto size() const noexcept -> unsigned int;
    auto capacity() const noexcept -> unsigned int;
    auto push_back(int value) -> void;
    auto operator[](unsigned int index) const noexcept -> int;
};
