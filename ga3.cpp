#include <iostream>
#include <string>
#include <fstream>
#include "ArgumentManager.h"
#include <chrono>

using namespace std;

//#ifndef EXECUTION_TIMER_H
//#define EXECUTION_TIMER_H
//
//template<class Resolution = std::chrono::milliseconds>
//class ExecutionTimer {
//public:
//	using Clock = std::conditional_t<std::chrono::high_resolution_clock::is_steady,
//		std::chrono::high_resolution_clock,
//		std::chrono::steady_clock>;
//private:
//	const Clock::time_point mStart = Clock::now();
//
//public:
//	ExecutionTimer() = default;
//	~ExecutionTimer() {
//		const auto end = Clock::now();
//		std::ostringstream strStream;
//		strStream << "Destructor Elapsed: "
//			<< std::chrono::duration_cast<Resolution>(end - mStart).count()
//			<< std::endl;
//		std::cout << strStream.str() << std::endl;
//	}
//
//	inline void stop() {
//		const auto end = Clock::now();
//		std::ostringstream strStream;
//		strStream << "Stop Elapsed: "
//			<< std::chrono::duration_cast<Resolution>(end - mStart).count()
//			<< std::endl;
//		std::cout << strStream.str() << std::endl;
//	}
//
//}; // ExecutionTimer
//
//#endif // EXECUTION_TIMER_H

bool Checking(int* &arr, int &size)
{
	bool struggle = false;
	int* temp = new int[size];
	int filled = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > arr[i - 1] && i != 0) // If this chance > previous chance, they struggle. Always transfer first one. 
		{
			struggle = true;
		}
		else
		{
			temp[filled] = arr[i];
			filled++;
		}
	}
	arr = temp;
	size = filled;
	return struggle;
}

int main(int argc, char * argv[])
{
	/*ExecutionTimer<std::chrono::milliseconds> timer;*/

	ArgumentManager am(argc, argv); // Constructor for AM 
	string iputn = am.get("input"); // getting input file name 
	string oputn = am.get("output"); // getting output file name 
	

	fstream ifs(iputn);
	ofstream ofs(oputn);

	string line;
	int rowSize = 0;
	int filled = 0;
	int *stuff = nullptr;
	
	ifs >> rowSize;
	
	//rowSize = stoi(line);
	stuff = new int[rowSize];


	
	while (ifs >> stuff[filled]) // Rest is info on percents
	{
		filled++;
	}
	int days = 0;
	bool repeat = true;
	while (repeat)
	{
		days++;
		repeat = Checking(stuff, filled);
	}

	string dayText = " days";
	if (days == 1)
	{
		dayText = " day";
	}
	ofs << days << dayText << endl;



	/*cout << endl << "Milliseconds:" << endl;
	timer.stop();*/

	//system("pause");
	return 0;
}