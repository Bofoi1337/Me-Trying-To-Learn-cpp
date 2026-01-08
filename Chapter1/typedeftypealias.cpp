#include <iostream>
#include <vector>
#include <string> 
/*
    typedef = reserved keyword sued to create an additional name (alias) for 
                another data type
                New identifier for an existing type
                Helps with readability and reduces typos

    using does the same thing as typedef, structured differently

    typealias
*/
// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// pairlist_t pairlist;

// using pairlist_t = std::vector<std::pair<std::string;
/*
    I see this as a nickname, a shorter name I can type in instead of the long thing I have to call back to reference

    ^ **Wrong, below I put type alias for int for clearer understanding of what the ints are going to be, yes its a nickname
    but not typing it more conveniently but for readability and understanding 
*/

typedef std::string  text_t;
using text_t = std::string;
// nicknames for int
using health = int; 
using mana = int;
using level = int;
using stamina = int;
using name = std::string;

// Setting up stats for a character
const name playerName = " Big Man";
const health hp = 100;
const mana mp = 50;
const stamina sp = 100;

int main(){
// Displays stats I just set up
    std::cout << "Hello " << playerName << '\n';
    std::cout << "Health = " << hp << '\n';
    std::cout << "Mana = " << mp << '\n';
    std::cout << "Stamina = " << sp << '\n';
    

    return 0;
}