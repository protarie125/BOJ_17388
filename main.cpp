#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int s, k, h;
	cin >> s >> k >> h;
	
	auto sum = s + k + h;
	if (100 <= sum) {
		cout << "OK";
	}
	else {
		auto minIndex = 0;
		auto min = s;
		
		if (k < min) {
			minIndex = 1;
			min = k;
		}

		if (h < min) {
			minIndex = 2;
			min = h;
		}

		switch (minIndex)
		{
		case 0:
			cout << "Soongsil"; break;
		case 1:
			cout << "Korea"; break;
		case 2:
			cout << "Hanyang"; break;
		default:
			break;
		}
	}
	
	return 0;
}