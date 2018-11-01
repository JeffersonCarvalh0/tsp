# include <iostream>
# include <string>
# include "tsp.h"
# include "solution.h"

using namespace std;

void run_method(string fname) {
	TSPInstance tsp;

	if(!tsp.load(fname))
		cout << "Unable to open file " << fname << '\n';
	else {
		cout << "File loaded successfully.\n";
		tsp.show();
		cout << '\n';
		TSPSolution solution(tsp);
		solution.show();
	}
}

int main(int argc, char *argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	if(argc == 1) {
        cout << "usage: tsp FILE...\n";
        return -1;
    }

	for (int i = 1; i < argc; ++i) run_method(argv[i]);

	return 0;
}
