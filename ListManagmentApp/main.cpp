#include <iostream>
#include <string>
#include <cstdlib>
#include "P_List.h"
#include "Person.h"

int main(){
    P_List p_List;
    for(;;){
        int opc, p_index;
        Person aux_Person_C2, aux_Person_C3;
        std::string aux_Name, aux_LastName;

        std::cout << "-------------------------------" << endl;
        std::cout << "         OPTION MENU" << endl;
        std::cout << "1. Get the size of the list" << endl;
        std::cout << "2. Add a Person to the list" << endl;
        std::cout << "3. Search a Person in the list" << endl;
        std::cout << "4. Show the list" << endl;
        std::cout << "5. Exit" << endl;
        std::cout << "-------------------------------" << endl;
        std::cout << "Enter the number of your choice:";std::cin >> opc;

        switch(opc){
            case 1:
                if(p_List.getNumberOfItemsIn() == 0){
                    std::cout << "The list is empty" << endl;
                    break;
                }
                else{
                    std::cout << "There are " << p_List.getNumberOfItemsIn() << " Persons in the list" << endl;
                    break;
                }
            case 2:
                std::cout << "ENTER THE PERSONAL DATA" << endl;
                std::cout << "Enter the name:";cin >> aux_Name;
                aux_Person_C2.setName(aux_Name);
                std::cout << "Enter the last name:";cin >> aux_LastName;
                aux_Person_C2.setName(aux_LastName);

                p_List.addNewItem(aux_Person_C2);
                std::cout << "Person successfully added" << endl;
                break;
            case 3:
                std::cout << "Enter the Person's index to find it:";std::cin >> p_index;

                if(p_index < p_List.getNumberOfItemsIn()){
                    aux_Person_C3 = p_List.getItem(p_index);
                    aux_Person_C3.printPerson();
                    break;
                }
                else{
                    std::cout << "That index doesn't exist in the list" << endl;
                    break;
                }
            case 4:
                std::cout << "LIST INFORMATION" << endl;
                p_List.showItems();
                break;
            case 5:
                std::cout << "GOOD BYE :)" << endl;
                exit(1);
            default:
                std::cout << "Enter a correct option please" << endl;
                break;
        }
    }
    return 0;
}
