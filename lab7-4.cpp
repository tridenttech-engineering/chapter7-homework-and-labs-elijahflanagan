// Lab7-4.cpp - displays the average electric bill
// Created/revised by Elijah Flanagan on 11/05/2024

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
		double avgBill = 0.0;
		double bill = 0.0;
		double totalBills = 0.0;
		int months = 0;

		cout << fixed << setprecision(2);

		while (true) {
				cout << "Bill for month " << months + 1 << ": ";
				cin >> bill;

				if (bill >= 0.0) {
						totalBills += bill;
						months += 1;
				} else {
						if (months == 0) {
								cout << "No bill amount entered." << endl;
						}
						break;  // Exit the loop when a negative bill is entered
				}
		}

		if (months > 0) {
				avgBill = totalBills / months;
				cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
		}

		return 0;
}
