
#include <iostream>
<<<<<<< HEAD
#include "clsQueueLine.h"
=======
#include "ClsMyString.h"
>>>>>>> 981368ed93114eff52f4309bbec31e09c13799a4

using namespace std;

int main()
{

<<<<<<< HEAD
	clsQueueLine PayBillsQueue("A0", 10);
	clsQueueLine SubscriptionsQueue("B0", 5);
=======
	cout << "\n\n\t\t\t\t\t\t Undo/Redo Project\n\n";

	clsMyString S1;
>>>>>>> 981368ed93114eff52f4309bbec31e09c13799a4

	cout << "\nS1  = " << S1.Value << "\n";

<<<<<<< HEAD
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();
	PayBillsQueue.IssueTicket();

	cout << "\nPay Bills Queue Info:\n";
	PayBillsQueue.PrintInfo();

	PayBillsQueue.PrintTicketsLineRTL();
	PayBillsQueue.PrintTicketsLineLTR();
=======
	S1.Value = "Mohammed";

	cout << "S1  = " << S1.Value << "\n";

	S1.Value = "Mohammed2";

	cout << "S1  = " << S1.Value << "\n";

	S1.Value = "Mohammed3";

	cout << "S1  = " << S1.Value << "\n";

	cout << "\n\nUndo: ";
	cout << "\n__________\n";

	S1.Undo();
	cout << "\nS1  after undo = " << S1.Value << "\n";

	S1.Undo();
	cout << "S1  after undo = " << S1.Value << "\n";

	S1.Undo();
	cout << "S1  after undo = " << S1.Value << "\n";

	cout << "\n\nRedo: ";
	cout << "\n__________\n";

	//S1.Redo();
	//cout << "\nS1  after Redo = " << S1.Value << "\n";
>>>>>>> 981368ed93114eff52f4309bbec31e09c13799a4

	//S1.Redo();
	//cout << "S1  after Redo = " << S1.Value << "\n";

	//S1.Redo();
	//cout << "S1  after Redo = " << S1.Value << "\n";

<<<<<<< HEAD
	PayBillsQueue.PrintAllTickets();

	PayBillsQueue.ServeNextClient();
	cout << "\nPay Bills Queue After Serving One client\n";
	PayBillsQueue.PrintInfo();

	cout << "\nSubscriptions Queue Info:\n";

	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();
	SubscriptionsQueue.IssueTicket();


	SubscriptionsQueue.PrintInfo();

	SubscriptionsQueue.PrintTicketsLineRTL();
	SubscriptionsQueue.PrintTicketsLineLTR();

	SubscriptionsQueue.PrintAllTickets();

	SubscriptionsQueue.ServeNextClient();
	cout << "\nSubscriptions Queue After Serving One client\n";
	SubscriptionsQueue.PrintInfo();


	return 0;
=======
	system("pause>0");
>>>>>>> 981368ed93114eff52f4309bbec31e09c13799a4

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
