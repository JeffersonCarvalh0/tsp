# include "solution.h"
# include <iostream>

TSPSolution::TSPSolution(TSPInstance &instance): instance(instance) {
	data.resize(instance.getSize() + 1);
}

void TSPSolution::show() {
	for (int i = 0; i < int(data.size()); ++i)
		std::cout << data[i] << ' ';
	std::cout << '\n';
}
