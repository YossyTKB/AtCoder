#include <vector>
#include <iostream>
#include <stdio.h>

int main( int argv, char *argc[] ){

	int n,d,k;
	std::vector<int> l,r,s,t;

	std::cin >> n;
	std::cin >> d;
	std::cin >> k;
	l.resize(d);
	r.resize(d);
	s.resize(k);
	t.resize(k);
	for ( int i=0; i<d; i++) {
		std::cin >> l[i];
		std::cin >> r[i];
	}
	for ( int i=0; i<k; i++) {
		std::cin >> s[i];
		std::cin >> t[i];
	}

	for (int j=0; j<k; j++) {
		for(int i=0; i<d; i++){
			bool detected = false;
			if ( (l[i] <= t[j]) && (t[j]<= r[i])  ) {
				if (s[j] < t[j]) {
					int snap = l[i];
					for (int k=i; k>=0; k--){
						if ( (l[k] <= snap)&&(snap<=r[k]) ) {
							snap = l[k];
							if((l[k] <= s[j])&&(s[j]<= r[k])){
								std::cout << (i+1) << std::endl;
								detected = true;
								break;
							}
						}
					}
				} else if (s[j] > t[j]) {
					int snap = r[i];
					for (int k=i; k>=0; k--){
						if ( (l[k] <= snap)&&(snap<=r[k]) ) {
							snap = r[k];
							if((l[k] <= s[j])&&(s[j]<= r[k])){
								std::cout << (i+1) << std::endl;
								detected = true;
								break;
							}
						}
					}
				} else {
					std::cout << (i+1) << std::endl;
					detected = true;
				}
			}
			if(detected) break;
		}

	}




	return 0;
}
