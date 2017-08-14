#include <iostream>

template<class T>
class Auto_ptr3
{
	T* m_ptr;
public:
	Auto_ptr3(T* ptr = nullptr)
		: m_ptr(ptr)
	{}

	~Auto_ptr3()
	{
		delete m_ptr;
	}

	// deep copy
	Auto_ptr3(const Auto_ptr3& a)
	{
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	// move constructor, transfer the ownership from a.m_mptr to m_ptr
	Auto_ptr3(Auto_ptr3&& a)
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr;
	}

	// copy assignment
	Auto_ptr3& operator=(const Auto_ptr3& a)
	{
		if (&a == this)
			return *this;

		delete m_ptr;

		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	// move assignment, transfer the ownership from a.m_mptr to m_ptr
	Auto_ptr3& operator=(Auto_ptr3&& a)
	{
		if (&a == this)
			return *this;

		delete m_ptr;

		m_ptr = a.m_ptr;
		a.m_ptr = nullptr;

		return *this;
	}

	T& operator*() const { return *m_ptr; }
	T* operator->() const { return m_ptr; }
	bool isNull() const { return m_ptr == nullptr; }
};

class Resource
{
public:
	Resource() { std::cout << "Resource acquired\n"; }
	~Resource() { std::cout << "Resource destroyed\n"; }
};

Auto_ptr3<Resource> generateResource()
{
	Auto_ptr3<Resource> res(new Resource);
	return res;
}

int main()
{
	Auto_ptr3<Resource> marines;
	marines = generateResource();

	return 0;
}
