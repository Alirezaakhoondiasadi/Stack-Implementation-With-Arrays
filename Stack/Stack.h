#pragma once
#include<stdio.h>
#include<iostream>

// Please change this to tune the stack growth
#define INITIAL_ARRAY_SIZE 4
#define GROWTH_RATE_PERCENTAGE 100

template <class DataType>
class Stack
{
private: 
	DataType* items; 
	int counter; 
	int arrayLength; 
public:
	Stack(); 
	void Push(DataType item);
	DataType Pop(); 
	DataType Peek(); 
	bool isEmpty(); 

};
