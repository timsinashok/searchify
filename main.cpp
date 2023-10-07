#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class SearchEngine(){
    private: 
    string name;
    Database database;

}


// base class Item 
class Item{
    private:
    int id;
    string name;

    public:
    Item(){

    }
    void setID(){
        id =  
    }
    int getID();
    string getName();
};

int Item::getID(){ return id;
}

string Item::getName(){ return name; }



class SearchResult{
    private:
    string searchPrompt;
    struct published_time; 

    public:
    SearchResult(string searchPrompt);

    // operator overloading to display the results;

};

SearchResult::SearchResult(string searchPrompt){
    
}


class Document{
    public:
    private:
};





class SearchDatabase{
    private:
    

    public:
    SearchDatabase(){};
    void addDocument(Document D);
};


int main(){
    SearchDatabase 
}