#include <iostream>
#include <cmath> // For sqrt() and pow()
using namespace std;

int main() {
    int radius;

    // Taking input for the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Loop through the grid and check for points that lie close to the circle's boundary
    for (int i = 0; i <= 2 * radius; i++) {
        for (int j = 0; j <= 2 * radius; j++) {
            // Using the equation of a circle: (x - h)^2 + (y - k)^2 = r^2
            float distance = sqrt(pow(i - radius, 2) + pow(j - radius, 2));

            // If the distance is close to the radius, we print a star (*)
            if (distance > radius - 0.5 && distance < radius + 0.5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
