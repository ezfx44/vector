#include "vector.hpp"

vector_t::vector_t() noexcept
{
	size_ = 0;
	capacity_ = 0;
	ptr_ = nullptr;
}
vector_t::vector_t(unsigned int size)
{
	size_ = size;
	capacity_ = size;
	ptr_ = new int[capacity_];
	srand(time(0));
	for (int i = 0; i < capacity_; i++)
	{
		ptr_[i] = 1 + rand() % 10;
	}
}
vector_t::vector_t(const vector_t& other)
{
	size_ = other.size_;
	capacity_ = other.capacity_;
	ptr_ = new int[other.capacity_];
	for (int i = 0; i < other.capacity_; i++)
	{
		ptr_[i] = other.ptr_[i];
	}

}
auto vector_t::operator=(const vector_t& other)->vector_t&
{
	size_ = other.size_;
	capacity_ = other.capacity_;
	ptr_ = new int[capacity_];
	for (int i = 0; i < capacity_; i++)
	{
		ptr_[i] = other.ptr_[i];
	}
	return *this;
}
vector_t::~vector_t() noexcept
{
	delete[] ptr_;
}
auto vector_t::size() const noexcept -> unsigned int
{
	return size_;
}
auto vector_t::capacity() const noexcept -> unsigned int
{
	return capacity_;
}
auto vector_t::push_back(int value) -> void
{
	int* buff = new int[size_];
	capacity_ += value;
	for (int i = 0; i < size_; i++)
	{
		buff[i] = ptr_[i];
	}
	delete[] ptr_;
	ptr_ = new int[capacity_];
	for (int i = 0; i < size_; i++)
	{
		ptr_[i] = buff[i];
	}
	for (int i = size_; i < capacity_; i++)
	{
		ptr_[i] = 1 + rand() % 10;
	}
}
auto vector_t::operator[](unsigned int index) const noexcept -> int
{
	return ptr_[index];
}
