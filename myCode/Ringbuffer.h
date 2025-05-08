/*
 * Ringbuffer.h
 *
 *  Created on: 8 May 2025
 *      Author: mateo
 */

#ifndef RINGBUFFER_H_
#define RINGBUFFER_H_


template<typename T, size_t N>
class Ringbuffer
{
private:
	T* data;
	size_t fillLevel;
	size_t readIndex;
	size_t writeIndex;

public:
	Ringbuffer()
	{

	}

	~Ringbuffer()
	{

	}

	bool write(const T& item)
	{

	}

	bool read(T& item) const
	{

	}

	void clear()
	{

	}

	bool isEmpty() const
	{

	}

	size_t size() const
	{

	}
};


#endif /* RINGBUFFER_H_ */
