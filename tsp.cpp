# include "tsp.h"
# include <fstream>

TSPInstance::TSPInstance(int size): size(0) {}

void TSPInstance::load(string &filename) {
    std::ofstream file;
    file.open(filename);
    string token;

    while (file >> token) {
        if (token == "DIMENSION") {
            file >> size;
            mat = std::vector<std::vector<int>>(size, std::vector<int>(size));
        }

        if (token == "NODE_COORD_SECTION") break;
    }

    file.close();
}
