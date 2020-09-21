#include "Stack.h"

template <class DataType>
Stack<DataType>::Stack()
{	
	this->items = (DataType*) malloc(sizeof(DataType) * INITIAL_ARRAY_SIZE);

	// If the memory is full and cannot assign additional space.
	if (this->items == 0)
		throw "ERROR: Out of memory "; 

	this->arrayLength = INITIAL_ARRAY_SIZE; 
	this->counter = -1;
}

template <class DataType>
void Stack<DataType>::Push(DataType item)
{
	// If the stack memory has not been filled yet. 
	if (this->counter < this->arrayLength - 1 ) {
		this->counter++;
		this->items[this->counter] = item ;
		return; 
	}

	// The array is full and needs to be replaced with a larger memory size. 
	this->arrayLength += (GROWTH_RATE_PERCENTAGE / 100.0)* this->arrayLength;

	DataType* swap = this->items; 

	this->items = (DataType*)malloc(sizeof(DataType) * this->arrayLength);

	// If the memory is full and cannot assign additional space.
	if (this->items == 0)
		throw "ERROR: Out of memory ";

	for (int i = 0; i <= counter; i++)
		this->items[i] = swap[i]; 
	free(swap); 

	this->counter++;
	this->items[this->counter] = item;
}

template<class DataType>
DataType Stack<DataType>::Pop()
{
	if (this->isEmpty())
		throw "Stack is Empty"; 

	return this->items[this->counter--] ;
}

template<class DataType>
DataType Stack<DataType>::Peek()
{
	if (this->isEmpty())
		throw "Stack is Empty";
	return this->items[this->counter];
}

template<class DataType>
bool Stack<DataType>::isEmpty()
{
	return this->counter == -1 ;
}
