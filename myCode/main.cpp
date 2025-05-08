// Standard (system) header files
#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Ringbuffer.h"

using namespace std;

int main ()
{
    // TODO: Add your program code here
	cout << "ringbuffer-cpp started." << endl << endl;
    Ringbuffer<int, 100> rb;

    // Seed the random number generator with the current time
	std::srand(static_cast<unsigned int>(std::time(0)));

	// Generate and print 100 random numbers
	for (int i = 0; i < 100; ++i)
	{
		int randomNumber = std::rand();
		rb.write(randomNumber);
		int readNum;
		rb.read(readNum);
		cout << "Ringbuffer item number " << i+1 << ": " << readNum << endl;
	}
	return 0;
}
