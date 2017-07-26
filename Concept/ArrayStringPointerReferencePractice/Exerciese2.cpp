#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

struct Student {
	std::string name;
	int grade;
};

void sortGrade(Student *student, int length)
{
	for (int startIndex = 0; startIndex < length; startIndex++)
	{
		int bigIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (student[currentIndex].grade > student[bigIndex].grade)
			{
				bigIndex = currentIndex;
			}
		}

		std::swap(student[bigIndex], student[startIndex]);
	}
}

int main()
{
	std::cout << "How many students you want to enter: " << '\n';
	int studentNum;
	std::cin >> studentNum;
	Student *studentRecords = new Student[studentNum];

	for (int i = 0; i < studentNum; i++)
	{
		std::cout << "Enter the name: " << '\n';
		std::cin >> studentRecords[i].name;
		std::cout << "Enter the grade: " << '\n';
		std::cin >> studentRecords[i].grade;
	}

	sortGrade(studentRecords, studentNum);

	for (int index = 0; index < studentNum; ++index)
	{
		std::cout << studentRecords[index].name << " got a grade of " << studentRecords[index].grade << '\n';
	}

	delete[] studentRecords;

	return 0;
}

