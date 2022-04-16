#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	while (0 != a || 0 != b || 0 != c) {
		const auto& m = max({ a, b, c });
		if (a + b + c - m <= m) {
			cout << "Invalid\n";
		}
		else {
			if (a == b && b == c) {
				cout << "Equilateral\n";
			}
			else {
				if (a == b || b == c || c == a) {
					cout << "Isosceles \n";
				}
				else {
					cout << "Scalene \n";
				}
			}
		}

		cin >> a >> b >> c;
	}

	return 0;
}