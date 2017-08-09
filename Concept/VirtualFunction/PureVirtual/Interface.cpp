#include <cmath>

class IErrorLog
{
public:
	virtual bool openLog(const char *filename) = 0;
	virtual bool closeLog() = 0;
	
	virtual bool writeError(const char *errorMessage) = 0;

	// make a virtual destructor in case we delete an IErrorLog pointer, so the proper derived destructor is called
	virtual ~IErrorLog() {}
};

double mySqrt(double value, IErrorLog &log)
{
	if (value < 0.0) {
		log.writeError("Tried to take square root of value less than 0");
		return 0.0;
	} else
		return sqrt(value);

}
