#include <iostream>
#include <string>

using namespace std;

int garbageCollection(string garbage[], int garbageSize, int travel[], int travelSize) {
    int pickP = 0, pickM = 0, pickG = 0;
    int travelP = 0, travelM = 0, travelG = 0;
    int lastP = 0, lastM = 0, lastG = 0;

    // Calculate pick time and last positions for P, M, G
    for (int i = 0; i < garbageSize; i++) {
        string curr = garbage[i];
        for (int j = 0; j < curr.length(); j++) {
            char ch = curr[j];

            if (ch == 'P') {
                pickP++;
                lastP = i;
            } else if (ch == 'G') {
                pickG++;
                lastG = i;
            } else if (ch == 'M') {
                pickM++;
                lastM = i;
            }
        }
    }

    // Calculate travel time for each type of garbage truck
    for (int i = 0; i < lastP; i++) {
        travelP += travel[i];
    }
    for (int i = 0; i < lastG; i++) {
        travelG += travel[i];
    }
    for (int i = 0; i < lastM; i++) {
        travelM += travel[i];
    }

    // Calculate total time
    int totalTime = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);
    return totalTime;
}

int main() {
    // Example data: garbage collected and travel times
    string garbage[] = {"GPM", "P", "GP", "M"};
    int travel[] = {3, 10, 2};

    int garbageSize = 4;
    int travelSize = 4;

    // Call garbage collection function
    int result = garbageCollection(garbage, garbageSize, travel, travelSize);

    // Output the result
    cout << "Total collection time: " << result << endl;

    return 0;
}
