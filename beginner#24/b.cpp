#include <iostream>
#include <vector>
#include <stdio.h>

int main( int argv, char *argc[] ){

	int n,t;
	std::vector<int> tms;

	std::cin >> n;
	std::cin >> t;
	tms.resize(n);

	for ( int i=0; i<n; i++ ) {
		std::cin >> tms[i];
	}

	int total = 0;

	for ( int i=0; i<n-1; i++ ) {
		if ((tms[i+1]-tms[i]) < t) {
			total += (tms[i+1]-tms[i]);
		} else {
			total += t;
		}
	}
	total += t;

	std::cout << total << std::endl;

	return 0;
}
