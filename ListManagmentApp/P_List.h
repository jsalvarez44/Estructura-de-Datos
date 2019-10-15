/**
 *
 * @authors Alvarez & Garcia
 * @date 26 SEP 2019
 */
#include <iostream>
#include <vector>
#include "Person.h"

class P_List{
private:
    std::vector<Person> p_List;
public:
    int getNumberOfItemsIn();
    void addNewItem(Person);
    Person getItem(int);
    void showItems();
};
/**
 *
 * @return the size of the list
 */
int P_List::getNumberOfItemsIn() {
    return p_List.size();
}
/**
 *
 * @param new_Person a new member for the list
 */
void P_List::addNewItem(Person new_Person) {
    p_List.insert(p_List.end(), new_Person);
}
/**
 *
 * @param p_index the index of the Person to return
 * @return the Person at the p_index position
 */
Person P_List::getItem(int p_index){
    return p_List.at(p_index);
}
/**
 *
 * @brief shows all the Persons in the list
 */
void P_List::showItems(){
	for(Person item : p_List){
	    item.printPerson();
	}
}
