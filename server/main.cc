/*
FILNAMN: 		main.cc
PROGRAMMERARE:	hanel742, eriek984, jened502, tobgr602, niker917, davha227
SKAPAD DATUM:	2013-11-18
BESKRIVNING:	
*/

#include "master/master.h"
#include <iostream>

using namespace std;

int main() {
	Master* master = new Master();
    Room* top = master->getTop();
    delete top;
    cout << top->getName() << endl;
	Room* Room1 = master->createRoom("Room1");
    Room* Room2 = master->createRoom("Room2");
    top->addRoom(Room1);
	Room1->addRoom(Room2);
   // std::cout << master->getRoom("Room1")->getName() << std::endl;
	//std::cout << master->getRoom("Room2")->getName() << std::endl;
    top->addRoom(master->createUser("Erik0"));
    top->addRoom(master->createUser("Erik1"));
    top->addRoom(master->createUser("Erik2"));
    top->addRoom(master->createUser("Erik3"));
    top->addRoom(master->createUser("Erik4"));
   // top->listUsers();
    //top->listRooms();
    Room1->addRoom(master->createUser("Erik5"));
    Room1->addRoom(master->createUser("Erik6"));
    Room2->addRoom(master->createUser("Erik7"));
    Room2->addRoom(master->createUser("Erik8"));
   // Room2->listUsers();
    top->removeRoom(Room1);
    cout << "weird shit" << endl;
    cout << master->getTop()->getName() << endl;
    cout << "seems to still exist" << endl;
    cout << top->name << endl;
    delete top;
    //top->listUsers();
    //top->listRooms();
    
    cout << "destroying..." << endl;
    delete master;
    std::cout << "destroyed" << std::endl;
    return 0;
}
