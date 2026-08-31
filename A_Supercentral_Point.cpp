#include <iostream>
#include <vector>

using namespace std;

// Structure to store a 2D point
struct Point {
    int x, y;
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }

    int supercentral_count = 0;

    // Check each point to see if it is supercentral
    for (int i = 0; i < n; i++) {
        bool has_right = false;
        bool has_left = false;
        bool has_lower = false;
        bool has_upper = false;

        for (int j = 0; j < n; j++) {
            if (i == j) continue; // Skip comparing the point with itself

            // Check Right: x' > x and y' == y
            if (points[j].x > points[i].x && points[j].y == points[i].y) {
                has_right = true;
            }
            // Check Left: x' < x and y' == y
            if (points[j].x < points[i].x && points[j].y == points[i].y) {
                has_left = true;
            }
            // Check Lower: x' == x and y' < y
            if (points[j].x == points[i].x && points[j].y < points[i].y) {
                has_lower = true;
            }
            // Check Upper: x' == x and y' > y
            if (points[j].x == points[i].x && points[j].y > points[i].y) {
                has_upper = true;
            }
        }

        // If it satisfies all 4 conditions, it's supercentral
        if (has_right && has_left && has_lower && has_upper) {
            supercentral_count++;
        }
    }

    cout << supercentral_count << "\n";

    return 0;
}
