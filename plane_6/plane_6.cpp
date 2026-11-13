#include <iostream>
#include <memory>
#include "vector2.h"
#include "stack_1.h"

int main() {
	std::unique_ptr<Stack<vector2_t<int>>> vector_stack = std::make_unique<Stack<vector2_t<int>>>();

	vector_stack->push(vector2_t<int>(10, 20, (char*)"VectorA"));
	vector_stack->push(vector2_t<int>(30, 40, (char*)"VectorB"));
	vector_stack->push(vector2_t<int>(50, 60, (char*)"VectorC"));

	std::cout << "Stack size: " << vector_stack->get_size() << std::endl;

	Stack<vector2_t<int>> temp_stack = *vector_stack;
	std::cout << "\nElements in collection (Stack):\n";
	while (!temp_stack.is_empty()) {
		std::cout << temp_stack.peek() << std::endl;
		temp_stack.pop();
	}

	return 0;
}