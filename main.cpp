#include "county.h"
#include "party.h"
#include "person.h"
#include "registry.h"
#include "state.h"
#include "iostream"
#include "District.h"

using namespace ELC;
using namespace std;

void addDistrict()
{
	char name[1000];
	int numRep;
	cout << "Please enter district name: " << endl;
	cin >> name;
	cout << "Please enter the number of representitives: " << endl;
	cin >> numRep;

	District d(name, numRep);
	districtList.add(d);
}

void addCitizen()
{
	char name[1000];
	int ID, birthYear, districtID;
	cout << "Please enter citizen name: " << endl;
	cin >> name;
	cout << "Please enter the citizen's ID: " << endl;
	cin >> ID;
	cout << "Please enter the citizen's birthYear: " << endl;
	cin >> birthYear;
	cout << "Please enter the citizen's district ID: " << endl;
	cin >> districtID;

	Citizen c(name, ID, birthYear, districtID);
	citizenList.add(c); /*to be received as reference*/
}

void addParty()
{
	char name[1000];
	int candidateID;
	cout << "Please enter the party's name: " << endl;
	cin >> name;
	cout << "Please enter the ID of the candidate for head of state: " << endl;
	cin >> candidateID;

	Party p(name, candidateID);
	partyList.add(p); /*to be received as reference*/
}

void addCitizenAsRep()
{
	int ID, PartyID, districtID;
	cout << "Please enter the candidate's ID: " << endl;
	cin >> ID;
	cout << "Please enter the party's number: " << endl;
	cin >> PartyID;
	cout << "Please enter the district's number: " << endl;
	cin >> districtID;

	Citizen &c = citizenList.findCit(ID);
	Party &p = partyList.party[PartyID - 1]; /*party is an array of parties, PartyID is also used as index (-1 for 0)*/
}

void showAllDistricts()
{
	int i;
	for (i = 0; i < DistrictList.size; i++)
		cout << DistrictList.dis[i] << endl;
}

void showAllCitizens()
{
	cout << CitizenList << endl; /*Print by ID also possible*/
}

void showAllParties()
{
	int PartyID;
	for (PartyID = 0; PartyID < PartyList.size; PartyID++)
		cout << PartyList.party[PartyID] << endl;
}

void vote()
{
	int ID, PartyID;
	cout << "Please enter the voter's ID: " << endl;
	cin >> ID;
	cout << "Please enter the voter's party ID: " << endl;
	cin >> PartyID;

	Citizen &c = citizenList.find(ID);
	Party &p = PartyList.party[PartyID - 1];
	p.vote(c); /*Try to vote, if unsuccesful - tell user*/
}

void showVotingRes()
{
}

bool exitFunc()
{
	/*Might be unnecessary*/
	cout << "This voting round has finished, program will now exit" << endl;
	return false;
}

/***************************************************************/
/**************THE MAIN MENU AND MAIN FUNCTION******************/
/***************************************************************/
int main()
{
	cout << "1. Add district" << endl;
	cout << "2. Add citizen" << endl;
	cout << "3. Add party" << endl;
	cout << "4. Add citizen as party representetive" << endl;
	cout << "5. Show all districts" << endl;
	cout << "6. Show all citizens" << endl;
	cout << "7. Show all parties" << endl;
	cout << "8. Vote" << endl;
	cout << "9. Show voting results" << endl;
	cout << "10. Exit program" << endl;

	bool flag = true;

	while (flag)
	{
		int op;
		cin >> op;

		switch (op)
		{
		case 1:
			addDistrict();
			break;
		case 2:
			addCitizen();
			break;
		case 3:
			addParty();
			break;
		case 4:
			addCitizenAsRep();
			break;
		case 5:
			showAllDistricts();
			break;
		case 6:
			showAllCitizens();
			break;
		case 7:
			showAllParties();
			break;
		case 8:
			vote();
			break;
		case 9:
			showVotingRes();
			break;
		case 10:
			flag = exitFunc();
			return 0;
		default:
			cout << "You tried to enter an invalid number for an operation" << endl;
		}
	}
}
