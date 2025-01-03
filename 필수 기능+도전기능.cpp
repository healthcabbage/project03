#pragma once
#include <iostream>
#include <algorithm>
using namespace std;

template<typename T>
class SimpleVector
{
private:
	T* data;
	int currentSize;
	int currentCapacity;
public:
	void resize(int newCapacity)
	{
		if (newCapacity <= currentCapacity)
		{
			return;
		}

		T* newData = new T[newCapacity];
		for (int i = 0; i < currentSize; i++)
		{
			new Data[i] = data[i];
		}

		delete[] data;
		data = newData;
		currentCapacity = newCapacity;
	};
	//기본 생성자
	SimpleVector() : data(new T[10], currentSize(0), currentCapacity(10)) {}
	//값을 받은 생성자
	SimpleVector(int capacity) : data(new T[capacity]), currentSize(0), currentCapacity(capacity) {}
	//복사생성자
	SimpleVector(const SimpleVector& other) : data(other.currentCapacity), currentSize(other.currentSize), currentCapacity(other.currentCapacity)
	{
		for (int i = 0; i < other.currentCapacity; i++)
		{
			data[i] = other.data[i];
		}
	}

	//소멸자
	~SimpleVector()
	{
		delete[] data;
	}

	//인자로 받은 원소를 맨 뒤에 추가
	void push_back(const T& value)
	{
		if (currentSize == currentCapacity)
		{
			resize(currentCapacity + 5);
		}
		data[currentSize++] = value;
	}

	//제거
	void pop_back()
	{
		if (currentSize > 0)
			currentSize--;
	}

	//원소의 크기 반환
	int size() const
	{
		return currentSize;
	}

	//내부 배열의 크기 반환
	int capacity() const
	{
		return currentCapacity;
	}

	//데이터 정렬
	void sortData()
	{
		sort(data, data + currentSize);
	}
};
