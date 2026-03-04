#include <iostream>
#include <string>
//this is a basic class that shows how it works in a video game format
class Player{
    private:
        int health;
        std::string name;

    public:
    /* 
    this first part Player() is the constructor for the Player class, it initializes the name and health of the player
    the constructor is a FUNCTION that creates an object of the class where we pass a string and interger
     the : name(playerName), health(playerHealth) just puts the passed in values into the private members

     Remember that we can only acess the private members through public fucntions like you see below :)
    */
        Player(const std::string& playerName, int playerHealth)
            : name(playerName), health(playerHealth)
            {
                if (health < 0) health = 0;
            }
            //these are function that acces the prive members with functions for said actions baseed on the name of the function
        const std::string& getName() const{
            return name;
        }

        int getHealth() const{
            return health;
        }
        void takeDamage(int damage){
            if(damage <= 0) return;
            health -= damage;
            if (health < 0) health = 0;
        }
        void heal(int healthBuff){
            if(healthBuff <= 0)return;
            health += healthBuff;
        }
        void displayStatus(){
            std::cout << "Players Name:" << name << std::endl;
            std::cout << "Players Health:" << health << std::endl;
        }

};


int main(){

    //created a objest called player1 with a name of Kachow and health of 100
    //this is where that constructor comes into play 
    Player player1("Kachow", 100);

    player1.displayStatus();
    player1.takeDamage(30);

    player1.takeDamage(80);

    if(player1.getHealth() == 0){
        std::cout << player1.getName() << " has been defeated!" << std::endl;
    }

    return 0;
}