# ifndef TSP_H
# define TSP_H

# include <cmath>
# include <string>
# include <vector>

class TSPInstance {
private:
    int size;
    std::vector<std::vector<int>> data;

public:
    TSPInstance();
    bool load(std::string &fname);
};

# endif
