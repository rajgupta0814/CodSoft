/*
Develop a program that simulates a movie ticket booking system.
Allow users to view movie listings, select seats, make bookings,
and calculate the total cost. Consider implementing seat
availability and seat selection validation.
*/

#include <iostream>
using namespace std;

class TicketBookingSystem {
public:
    int seats[10][10];
    int seatNumber = 1, bookedCount = 0;
    int bookingCount = 0, totalCost = 0;

    void displayMovieList() {
        cout << "\n**********************************************" << endl;
        cout << "\t\tCineMagic Movies" << endl;
        cout << "\n\t1) Avenger: End of Time" << endl;
        cout << "\t2) The Last Jedi" << endl;
        cout << "\t3) Space Odyssey" << endl;
        cout << "\t4) Pirates of the Cosmos" << endl;
        cout << "***********************************************" << endl;
    }

    void selectSeats() {
        seatNumber = 1;
        int row = 0, col = 0;
        cout << "\n***********************************************" << endl;
        cout << "\t\t   ****CineMagic Movies****\n\n" << endl;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                seats[i][j] = seatNumber;
                cout << seats[i][j] << "\t";
                seatNumber++;
            }
            cout << "\n";
        }

        cout << "\n***********************************************" << endl;
        cout << "\nEnter the number of seats you want to book: ";
        cin >> bookingCount;

        for (int i = 0; i < bookingCount; i++) {
            cout << "\nEnter the row and column number to book: ";
            cin >> row >> col;

            if (seats[row - 1][col - 1] == 0) {
                cout << "\nSeat already booked." << endl;
            } else {
                seats[row - 1][col - 1] = 0;
                bookedCount++;
                cout << "\nYour seat has been booked successfully." << endl;
            }
        }

        seatNumber = 1;
        cout << "\n\t\t   ****CineMagic Movies****\n\n" << endl;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << seats[i][j] << "\t";
                seatNumber++;
            }
            cout << "\n";
        }

        calculateTotalCost();
    }

    void calculateTotalCost() {
        totalCost = bookedCount * 100;
        cout << "\n\t\t   Total cost: Rs. " << totalCost << endl;
    }
};

int main() {
    TicketBookingSystem bookingSystem;
    int choice = 0;

    do {
        cout << "\n***********************************************" << endl;
        cout << "CineMagic Movies" << endl;
        cout << "\n1) View Movie List\n2) Book Seats\n3) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookingSystem.displayMovieList();
                break;

            case 2:
                bookingSystem.selectSeats();
                break;

            case 3:
                cout << "\nThank you for using CineMagic Booking System!" << endl;
                cout << "Visit again for more movie magic!" << endl;
                choice = 0;
                break;

            default:
                cout << "Entered wrong choice." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
