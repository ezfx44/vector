#include <vector.hpp>
#include <catch.hpp>

SCENARIO("vector init", "[init]") {
	vector_t vector;
	REQUIRE(vector.size() == 0);
	REQUIRE(vector.capacity() == 0);
}

SCENARIO("vector with param", "[init]") {
	vector_t v(3);
	REQUIRE(v.size() == 3);
	REQUIRE(v.capacity() == 3);
	for (unsigned int i = 0; i < v.size(); i++)
	{
		REQUIRE(v[i] >= 1 && v[i] <= 10);
	}
}
SCENARIO("copying vector", "[init]") {
	vector_t v(3);
	vector_t w(v);
	REQUIRE(w.size() == 3);
	REQUIRE(w.capacity() == 3);
	for (unsigned int i = 0; i < v.size(); i++)
	{
		REQUIRE(v[i] == w[i]);
	}
}
SCENARIO("push_back", "[p_b]")
{
	vector_t x(3);
	x.push_back(5);
	REQUIRE(x.size() == 3);
	REQUIRE(x.capacity() == 8);
	for (unsigned int i = 0; i < x.size(); i++)
	{
		REQUIRE(v[i] >= 1 && v[i] <= 10);
	}
}

SCENARIO("op=", "[assignment]")
{
	vector_t y(3);
	vector_t z;
	REQUIRE(x.size() == 3);
	REQUIRE(x.capacity() == 3);
	for (unsigned int i = 0; i < v.size(); i++)
	{
		REQUIRE(v[i] == z[i]);
	}
}
