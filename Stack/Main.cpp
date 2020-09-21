/*						Developed by Visual Studio c++ 2019

This is the implementation of a Stack class with Push, Peek, POP and is Empty functions. 
The developed stack also supports any datatype. I have implemented this using arrays. There are two options to implement stacks, one is arrays and other is linked lists.
The benefit of the array implementation is that the memory allocation can be increased or decreased depending on size of stack.However, Stack may not use all the memory that they have assigned too. 
The benefit of linked list is that it grows as input size gets larger. However it stores more data than arrays (e.g. pointer to next node) and uses more memory.
I belive that in most cases Array Implementation of Stacks are better choice. However some parameters (like INITIAL_ARRAY_SIZE and GROWTH_RATE_PERCENTAGE) should be tuned.
In terms of speed arrays have O(1) access time however if the inputs get large enough then resizing the array is very time consuming. For this scenario I belive linked lists may be a better choice.
There is gonna be always trade off between memory and runtime.
Future Improvement: Implement memory shrink if not used for memory limited applications.*/

#include<stdio.h>
#include <malloc.h>
#include "Stack.h"
#include "Stack.cpp"

int main()
{
	Stack<char> stack;

	for (int  i = 0; i < 26; i++) {
		stack.Push((char)('a' + i) ); 
	}
	std::cout << "Last word on stack is: "<<stack.Peek() << std::endl << std::endl;

	std::cout << "Stack Content is as follows: "<< std::endl;
	while (!stack.isEmpty()) {
		std::cout << stack.Pop()<<std::endl; 
	}

	char endCh = getchar();
	return 0;
}