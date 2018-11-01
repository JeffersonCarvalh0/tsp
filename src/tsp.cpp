# include "tsp.h"
# include <fstream>
# include <iostream>
# include <cmath>

TSPInstance::TSPInstance() { size = 0; }

bool TSPInstance::load(std::string &filename) {
    std::fstream file;
    file.open(filename);

    if (!file) return false;

    std::string token;

    while (file >> token) {
        if (token == "DIMENSION:") {
            file >> size;
            data = std::vector<std::vector<int>>(size, std::vector<int>(size));
        }
        if (token == "NODE_COORD_SECTION") break;
    }

    std::vector<std::pair<float, float>> coords(size);
    int dummy;
    for (int i = 0; i < size; ++i)
        file >> dummy >> coords[i].first >> coords[i].second;

    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            data[i][j] = std::hypot(coords[i].first - coords[j].first, coords[i].second - coords[j].second);

    file.close();
    return true;
}
