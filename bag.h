#include "item.h"

class Bag{
    private: //these need to be private so the calling function cannot manipulate them
        int n;
        Item item_des[200];
    public: //class functions used to manipulate data
        
       
        int getN(){return n;}
        Bag(){n=0;}

        bool add(string item);
        void display();
        void remove(string item);
        void clear(){n = 0;}
        bool isEmpty();
        bool contains(string item);
        int getFrequencyOf(string item);
        
};

bool Bag::add(string item){
    Item("item");
    item_des[n] = item;
    n++;
    return true;
}

void Bag::display(){
    for (int i = 0; i < n; i++){
        cout << item_des[i].getName() << endl;
    }
}

void Bag::remove(string remove_item){
    int count = 0;
    while(!(item_des[count].getName() == remove_item) && count < n){
        count++;
    }

    if(item_des[count].getName() == remove_item){

        for(int j = count; j < n; j++){

            item_des[j].setName(item_des[j+1].getName());
        }
    
    n--;
    }
    else if(item_des[count].getName() != remove_item){
        cout << "Item not in bag.\n";
    }

}

bool Bag::isEmpty(){
    if(n == 0){
        return true;
    }
    else{
        return false;
    }
}

bool Bag::contains(string item){
    for (int j = 0; j < n; j++){
        if(item == item_des[j].getName()){
            return true;
        }

    }
}

int Bag::getFrequencyOf(string item){
    int count = 0;
    for(int h = 0; h < n; h++){
        if(item_des[h].getName() == item){
            count++; 
        }
    }
    return count;
}



