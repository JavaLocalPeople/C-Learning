class MyString
{
private:
	char *m_string; // dynamically allocate our string here
	int m_length;
public:
	int getLength() { return m_length; }// access function to get value of m_length
};

class Date
{
private:
	int m_month;
	int m_day;
	int m_year;

public:
	int getMonth() { return m_month; }
	void setMonth(int month) { m_month = month; }

	int getDay() { return m_day; } // getter for day
	void setDay(int day) { m_day = day; } // setter for day

	int getYear() { return m_year; } // getter for year
	void setYear(int year) { m_year = year; } // setter for year
};
