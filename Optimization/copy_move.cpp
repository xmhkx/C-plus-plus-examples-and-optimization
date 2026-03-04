#include <iostream>
#include <vector>
#include <utility> // for std::move

std::vector<int> SensorReadings;
//just a function for demostrating 
void FilterReadings(std::vector<int> readings) {
    if (readings.size() < 10) {
        std::cout << "Too few readings\n";
        return;
    }

    std::cout << "Readings are sufficient\n";
    SensorReadings = std::move(readings); // move buffer into global (cheap)
}

int main() {

    /*
    this is very important here cause we make a vctor called incoming
    then we allocate 100 integers ahead for this vetor and then push 100 integers into it
    */
    std::vector<int> incoming;
    incoming.reserve(100);

    for (int i = 0; i < 100; ++i) {
        incoming.push_back(i);
    }

    // IMPORTANT: if you want to avoid copying incoming into the function:
    // we do std::move 
    FilterReadings(std::move(incoming));

    std::cout << "Stored readings: " << SensorReadings.size() << "\n";
    std::cout << "Incoming after move: " << incoming.size() << "\n"; // likely 0

    return 0;
}