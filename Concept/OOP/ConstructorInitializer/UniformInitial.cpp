class Something
{
private:
	const int m_value;

public:
	// uniformly initialize our member variables
	Something() : m_value{ 5 }
	{}
};

class Something1
{
private:
	const int m_array[5];

public:
	Something1(): m_array { 1,2,3,4,5}
	{}
};
