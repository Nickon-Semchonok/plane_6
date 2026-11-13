#include <iostream>
#include "vector2.h"
#include "stack_1.h"

int main() {
	Stack<vector2_t<int>> vector_stack;

	vector_stack.push(vector2_t<int>(10, 20, (char*)"VectorA"));
	vector_stack.push(vector2_t<int>(30, 40, (char*)"VectorB"));

	std::cout << "Stack size: " << vector_stack.get_size() << std::endl;

	std::cout << "Top element (peek): " << vector_stack.peek() << std::endl;

	Stack<vector2_t<int>> stack_copy = vector_stack;
	std::cout << "Copied stack top: " << stack_copy.peek() << std::endl;

	vector_stack.pop();
	std::cout << "After pop, new top of original stack: " << vector_stack.peek() << std::endl;
	std::cout << "Copied stack top remains unchanged: " << stack_copy.peek() << std::endl;

	return 0;
}