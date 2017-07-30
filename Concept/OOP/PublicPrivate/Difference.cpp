struct DataStruct // members are public by default
{
	int month; // public by default, can be accessed by anyone
	int day;
	int year;
};

class DateClass // members are private by default
{
	int m_month;  // private by default, can only be accessed by other members
	int m_day;
	int m_year;
};

int main()
{
	DataStruct date;
	date.month = 10;
	date.day = 14;
	date.year = 2020;

	DateClass date;
	date.month = 10;// error
	return 0;
}
