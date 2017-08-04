#include <string>
class Course
{
private:
	std::string m_name;
	Course *m_prerequisite;

public:
	Course(std::string &name, Course *prerequisite = nullptr) :
		m_name(name), m_prerequisite(prerequisite)
	{}
};
