#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Guest {
private:
    string name;
    int roomNumber;

public:
    Guest() : name(""), roomNumber(0) {}
    Guest(const string& name, int roomNumber) : name(name), roomNumber(roomNumber) {}

    string getName() const {
        return name;
    }

    int getRoomNumber() const {
        return roomNumber;
    }
};

class Hotel {
private:
    vector<Guest> guests;

public:
    void addGuest(const Guest& guest) {
        guests.push_back(guest);
    }

    void displayGuests() const {
        if (guests.empty()) {
            cout << "No guests in the hotel." << endl;
        } else {
            cout << "Guests currently in the hotel:" << endl;
            for (const auto& guest : guests) {
                cout << "Name: " << guest.getName() << ", Room Number: " << guest.getRoomNumber() << endl;
            }
        }
    }
};

int main() {
    Hotel hotel;

    cout << "Adding guests to the hotel..." << endl;
    hotel.addGuest(Guest("John Doe", 101));
    hotel.addGuest(Guest("Jane Smith", 202));

    cout << "Displaying guests in the hotel..." << endl;
    hotel.displayGuests();

    return 0;
}
