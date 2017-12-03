#include <string>
using namespace std;

class Item{
    private:
        string description;
    public: 
        string getName() {return description;}
        void setName( string nam) {description = nam;}

        Item () {description = "";}
        Item(string name){description = name;}
    

};