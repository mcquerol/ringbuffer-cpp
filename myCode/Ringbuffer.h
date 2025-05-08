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
		data = new T[N];
		fillLevel = 0;
		readIndex = 0;
		writeIndex = 0;
	}

	~Ringbuffer()
	{
		delete[] data;
	}

	bool write(const T& item)
	{
		if(fillLevel >= N)
		{
			return false;
		}
		data[writeIndex++] = item;
		fillLevel++;
		return true;
	}

	bool read(T& item) const
	{
		if(fillLevel <= 0)
		{
			return false;
		}
		item = data[readIndex++];
		fillLevel--;
	}

	void clear()
	{
		data = 0;
		fillLevel = 0;
		readIndex = 0;
		writeIndex = 0;
	}

	bool isEmpty() const
	{
		return fillLevel == 0;
	}

	size_t size() const
	{
		return N;
	}
};


#endif /* RINGBUFFER_H_ */
