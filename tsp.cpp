# include "tsp.h"
# include <fstream>

TSPInstance::TSPInstance() { size = 0; }

void TSPInstance::load(std::string &filename) {
    std::fstream file;
    file.open(filename);
    std::string token;

    while (file >> token) {
        if (token == "DIMENSION") {
            file >> size;
            data = std::vector<std::vector<int>>(size, std::vector<int>(size));
        }

        if (token == "NODE_COORD_SECTION") break;
    }

    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
            
            

    file.close();
}
