/// 0-1 Knapsack Problem
/// Author: Carlos L. Cuenca

#include<iostream>
#include<vector>
#include<algorithm>

/// ----------
/// Prototypes

int knapsackRecursive(int, int, std::vector<int>&, std::vector<int>&);

/// --------------
/// Driver Program

int main(int argc, char*argv[]) {
	
	/// -----------------
	/// Program Variables

	int inputCount  ;
	int inputNumber ;
	int items 		;
	int capacity	;
	int profit 		;

	std::cin >> inputCount;

	inputNumber = 1;

	while(inputCount--) {

		std::cin >> items;
		std::cin >> capacity;

		std::vector<int> weights(items);
		std::vector<int> values(items);

		// Input
		for(int index = 0; index < items; index++)
			std::cin >> values[index];

		for(int index = 0; index < item; index++)
			std::cin >> weights[index];

		// Process
		profit = knapsackRecursive(capacity, items, values, weights);

		// Output
		std::cout << "Case #" << inputNumber << ": " << profit << std::endl;

		inputNumber++;

	}


	return 0;


}

/// ------------------------
/// Function Implementations

int knapsackRecursive(int capacity, int items, std::vector<int>& values, std::vector<int>& weights) {

	// Base case
	if(!items || !capacity) return 0;

	// Don't do anything if the current item is greater than the capacity
	if(weights[items] > capacity) return knapsackRecursive(capacity, items - 1, values, weights);

	return std::max(values[items] + knapsackRecursive(capacity - weights[items], items - 1, values, weights),
		knapsackRecursive(capacity, items - 1, values, weights));

}