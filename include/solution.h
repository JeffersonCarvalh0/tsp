# ifndef SOLUTION_H
# define SOLUTION_H

# include <vector>
# include "tsp.h"

class TSPSolution {
private:
	TSPInstance &instance;
	std::vector<int> data;

public:
	TSPSolution(TSPInstance &instance);
	void show();
};

# endif
