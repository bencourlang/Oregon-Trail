#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

string toLower(string orig){
    for(int i = 0; i < orig.length(); i++){
        if(orig[i] >= 65 && orig[i] <= 90){
            orig[i] = orig[i]+32;
        }
    }
    return orig;
}
int split(string str, char mark, string words[], int size){
    string hold = "";
    int count = 0;
    int length = 0;
    int placeHolder = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == mark){
            if(length == 0){
                placeHolder++;
            }
            else{
                words[count] = str.substr(placeHolder, length);
                placeHolder = i + 1;
                count++;
                length = 0;
            }
        }
        else if(str[i] != mark){
            length++;
        }
    }
    if(count > size){
        return - 1;
    }
    else if(placeHolder >= str.length()){
        return count;
    }
    else{
        words[count] = str.substr(placeHolder);
        return count + 1;
    }
}


#ifndef USERSNAME_H
#define USERSNAME_H
class UsersName{
    private:
        string player;
        
    public:
        UsersName();
        UsersName(string);
        void setPlayerName(string);
        string getPlayerName();
};
#endif

UsersName::UsersName(){
    player = "";
}

UsersName::UsersName(string name){
    player = name;
}

void UsersName::setPlayerName(string name){
    player = name;
}

string UsersName::getPlayerName(){
    return player;
}




#ifndef ITEMS_H
#define ITEMS_H
class Items{
    private:
        int numOxen;
        int numFood;
        int numBullets;
        int numdWagonParts;
        int numaxles;
        int numTongues;
        int numMedicalAidKit;
        double money;
        
    public:
        Items();
        Items(int, int, int, int, int, int, int, double);
        void setNumOxen(int);
        int getNumOxen();
        void setNumFood(int);
        int getNumFood();
        void setNumBullets(int);
        int getNumBullets();
        void setNumWagonParts(int);
        int getNumWagonParts();
        void setNumMedicalAidKit(int);
        int getNumMedicalAidKit();
        void setMoney(double);
        double getMoney();
};
#endif

Items::Items(){
    numOxen = 0;
    numFood = 0;
    numBullets = 0;
    numdWagonParts = 0;
    numMedicalAidKit = 0;
    money = 1000;
}

Items::Items(int holdOxen, int holdFood, int holdBullets, int holdWagonParts, int holdaxles, int holdTongues, int holdMedicalAidKit, double holdMoney){
    numOxen = holdOxen;
    numFood = holdFood;
    numBullets = holdBullets;
    numdWagonParts = holdWagonParts;
    numMedicalAidKit = holdMedicalAidKit;
    money = holdMoney;
}

void Items::setNumOxen(int holdOxen){
    numOxen = holdOxen;
}

int Items::getNumOxen(){
    return numOxen;
}

void Items::setNumFood(int holdFood){
    numFood = holdFood;
}

int Items::getNumFood(){
    return numFood;
}

void Items::setNumBullets(int holdBullets){
    numBullets = holdBullets;
}

int Items::getNumBullets(){
    return numBullets;
}

void Items::setNumWagonParts(int holdWagonParts){
    numdWagonParts = holdWagonParts;
}

int Items::getNumWagonParts(){
    return numdWagonParts;
}

void Items::setNumMedicalAidKit(int holdMedicalAidKit){
    numMedicalAidKit = holdMedicalAidKit;
}

int Items::getNumMedicalAidKit(){
    return numMedicalAidKit;
}

void Items::setMoney(double holdMoney){
    money = holdMoney;
}

double Items::getMoney(){
    return money;
}



#ifndef SHOPPING_H
#define SHOPPING_H
class Shopping{
    private:
        double moneyS;
        int numOxenS;
        int numFoodS;
        int numBulletsS;
        int numWagonPartS;
        int numMedicalAidKitS;
        
    public:
        Shopping();
        Shopping(double, int, int, int, int, int);
        void setMoneyS(double);
        double getMoneyS();
        void setOxenS(int);
        int getOxenS();
        void setFoodS(int);
        int getFoodS();
        void setBulletsS(int);
        int getBulletsS();
        void setWagonPartS(int);
        int getWagonPartS();
        void setMedicalAidKitS(int);
        int getMedicalAidKitS();
        int shopMenu(double);
        int shopOxen(double, int);
        int shopFood(double, int);
        int shopBullets(double, int);
        int shopWagonPart(double, int);
        int shopMedicalAidKit(double, int);
};
#endif

Shopping::Shopping(){
    moneyS = 1200;
    numOxenS = 0;
    numFoodS = 0;
    numBulletsS = 0;
    numWagonPartS = 0;
    numMedicalAidKitS = 0;
}

Shopping::Shopping(double holdMoneyS, int holdNumOxenS, int holdNumFoodS, int holdNumBulletsS, int holdNumWagonPartS, int holdNumMedicalAidKitS){
    moneyS = holdMoneyS;
    numOxenS = holdNumOxenS;
    numFoodS = holdNumFoodS;
    numBulletsS = holdNumBulletsS;
    numWagonPartS = holdNumWagonPartS;
    numMedicalAidKitS = holdNumMedicalAidKitS;
}

void Shopping::setMoneyS(double holdMoneyS){
    moneyS = holdMoneyS;
}

double Shopping::getMoneyS(){
    return moneyS;
}

void Shopping::setOxenS(int holdNumOxenS){
    numOxenS = holdNumOxenS;
}

int Shopping::getOxenS(){
    return numOxenS;
}

void Shopping::setFoodS(int holdNumFoodS){
    numFoodS = holdNumFoodS;
}

int Shopping::getFoodS(){
    return numFoodS;
}

void Shopping::setBulletsS(int holdNumBulletsS){
    numBulletsS = holdNumBulletsS;
}

int Shopping::getBulletsS(){
    return numBulletsS;
}

void Shopping::setWagonPartS(int holdNumWagonPartS){
    numWagonPartS = holdNumWagonPartS;
}

int Shopping::getWagonPartS(){
    return numWagonPartS;
}

void Shopping::setMedicalAidKitS(int holdNumMedicalAidKitS){
    numMedicalAidKitS = holdNumMedicalAidKitS;
}

int Shopping::getMedicalAidKitS(){
    return numMedicalAidKitS;
}

int Shopping::shopMenu(double multiplier){
    ofstream shop; //, ios::in | ios::out | ios::app | ios::trunc
	shop.open("mainShop.txt");
	string store;
	string hold[12];
	int option = 0;
	
	if(shop.is_open()){
	    shop << "Yoke,40.00 \n";
	    shop << "Food,0.50 \n";
	    shop << "Bullets,2.00 \n";
	    shop << "Wagon Part,20.00 \n";
	    shop << "Medical Aid Kit,25.00 \n";
	    shop << "Balance \n";
	    shop << "Leave \n";
	    shop.close();
	}
	else{
	    return -1;
	}
	
	while(option != 7){
	    ifstream infile;
	    infile.open("mainShop.txt");
	    if(infile.fail()){
	        return -1;
	    }
	    else{
	        int spot = 0;
	        int count = 1;
	        int buy = 0;
	        int holdNum = 0;
	        string wagonPart = "";
	        string wagonPass = "";
	        string finalize = "";
	        cout << "What would you like to buy?" << endl;
	        while(getline(infile, store)){
	            split(store, ',', hold, 2);
	            for(int i = 0; i < 2; i++){
	                if(count == 6 || count == 7){
	                    cout << count << ". " << hold[i];
	                    break;
	                }
	                else if(spot%2 == 0){
	                    cout << count << ". " << hold[i] << ": ";
	                }
	                else if(spot%2 == 1){
	                    cout << "$" << fixed << setprecision(2) << stod(hold[i]) * multiplier;
	                }
	                spot++;
	            }
	            count++;
	            cout << endl;
	        }
            cin >> option;
            while(option != 1 || option != 2 || option != 3 || option != 4 || option != 5 || option != 6){
                if(option == 1){
                    return 1;
                }
                else if(option == 2){
                    return 2;
                }
                else if(option == 3){
                    return 3;
                }
                else if(option == 4){
                    return 4;
                }
                else if(option == 4){
                    return 4;
                }
                else if(option == 5){
                    return 5;
                }
                else if(option == 6){
                    return 6;
                }
                else if(option == 7){
                    return 7;
                }
                else{
                    cout << "Please enter a number between 1-7." << endl;
                    cin >> option;
                }
            }
	    }
	}
}

int Shopping::shopOxen(double multiplier, int amount){
    Items items;
    ifstream infile;
    infile.open("mainShop.txt");
    if(infile.fail()){
        return -1;
    }
	else{
	    int spot = 0;
	    int count = 1;
	    int buy = 0;
	    int holdNum = 0;
	    string wagonPart = "";
	    string wagonPass = "";
	    string finalize = "";
        cout << "Shop Keeper: Seems like you want some oxen. I can only sell them in a pair or a yoke. ";
        cout << "One yoke will cost you $" << multiplier * 40 << "." << endl;
        cout << "Shop Keeper: How many Yoke do you want?" << endl;
        cin >> buy;
        if((buy * multiplier * 40) > Shopping::getMoneyS()){
            cout << "You don't have that much money" << endl;
        }
        else if(buy > 0){
            cout << "Shop Keeper: That'll cost you $" << buy * multiplier * 40 << "." << endl;
            cout << "Shop Keeper: Do you want to buy " << buy << " yoke?" << endl;
            cin >> finalize;
            while(toLower(finalize) != "yes"){
                if(toLower(finalize) == "no"){
                    break;
                }
                else{
                    cout << "Shop Keeper: Please enter yes or no." << endl;
                    cin >> finalize;
                }
            }
            if(toLower(finalize) == "yes"){
                cout << "Shop Keeper: You got yourself some nice oxen there." << endl;
                Shopping::setMoneyS(Shopping::getMoneyS() - (buy * multiplier * 40));
                holdNum = amount + (buy*2);
                cout << "Shop Keeper: Your balance is now $" << Shopping::getMoneyS() << " and you have " << holdNum << " oxen." << endl;
                return holdNum;
            }
        }
	}
}

int Shopping::shopFood(double multiplier, int amount){
    Items items;
    ifstream infile;
    infile.open("mainShop.txt");
    if(infile.fail()){
        return -1;
    }
	else{
	    int spot = 0;
	    int count = 1;
	    int buy = 0;
	    int holdNum = 0;
	    string wagonPart = "";
	    string wagonPass = "";
	    string finalize = "";
        cout << "Shop Keeper: Looking hungry aren't we? Jokes aside, I'm sure you want to stock up on some food for your trip." << endl;
        cout << "Shop Keeper: One pound of food will cost you $" << multiplier * 0.5 << "." << endl;
        cout << "Shop Keeper: How many pounds of this balanced diet do you want?" << endl;
        cin >> buy;
        if((buy * multiplier * 0.5) > Shopping::getMoneyS()){
            cout << "You don't have that much money." << endl;
        }
        else{
            cout << "Shop Keeper: That'll cost you $" << buy * multiplier * 0.5 << "." << endl;
            cout << "Shop Keeper: Do you want to buy " << buy;
            if(buy > 1){
                cout << " pounds of food?" << endl;
            }
            else{
                cout << " pound of food?" << endl;
            }
            cin >> finalize;
            while(toLower(finalize) != "yes"){
                if(toLower(finalize) == "no"){
                    break;
                }
                else{
                    cout << "Shop Keeper: Please enter yes or no." << endl;
                    cin >> finalize;
                }
            }
            if(toLower(finalize) == "yes"){
                cout << "Shop Keeper: Don't let hunger get the best of you and keep that belly filled." << endl;
                Shopping::setMoneyS(Shopping::getMoneyS() - (buy * multiplier * 0.5));
                holdNum = amount + buy;
                cout << "Shop Keeper: Your balance is now $" << Shopping::getMoneyS() << " and you have " << holdNum;
                if(items.getNumFood() == 1){
                    cout << " pound of food." << endl;
                }
                else{
                    cout << " pounds of food." << endl;
                }
            }
            return holdNum;
        }
    }
}

int Shopping::shopBullets(double multiplier, int amount){
    Items items;
    ifstream infile;
    infile.open("mainShop.txt");
    if(infile.fail()){
        return -1;
    }
	else{
	    int spot = 0;
	    int count = 1;
	    int buy = 0;
	    int holdNum = 0;
	    string wagonPart = "";
	    string wagonPass = "";
	    string finalize = "";
                cout << "Shop Keeper: I see you want some bullets. They're quite the versatile tool, whether being used to hunt game or defending youself from bandits " << endl;
                cout << "Shop Keeper: They'll cost you $" << multiplier * 2 << " for a pack of 20." << endl;
                cout << "Shop Keeper: How many boxes of bullets do you want?" << endl;
                cin >> buy;
                if((buy * multiplier * 2) > Shopping::getMoneyS()){
                    cout << "You don't have that much money." << endl;
                }
                else{
                    cout << "Shop Keeper: That'll cost you $" << buy * multiplier * 2 << "." << endl;
                    cout << "Shop Keeper: Do you want to buy " << buy;
                    if(buy > 1){
                        cout << " boxes of bullets?" << endl;
                    }
                    else{
                        cout << " box of bullets?" << endl;
                    }
                    cin >> finalize;
                    while(toLower(finalize) != "yes"){
                        if(toLower(finalize) == "no"){
                            break;
                        }
                        else{
                            cout << "Shop Keeper: Please enter yes or no." << endl;
                            cin >> finalize;
                        }
                    }
                    if(toLower(finalize) == "yes"){
                        cout << "Shop Keeper: I hope you don't need to use them but better safe than sorry is what I always say... so feel free to spend more!" << endl;
                        Shopping::setMoneyS(Shopping::getMoneyS() - (buy * multiplier * 2));
                        holdNum = amount + (buy*20);
                        cout << "Shop Keeper: Your balance is now $" << Shopping::getMoneyS() << " and you have " << holdNum;
                        if(items.getNumBullets() == 1){
                            cout << " box of bullets." << endl;
                        }
                        else{
                            cout << " boxes of bullets." << endl;
                        }
                    }
                    return holdNum;
                }
            }
}

int Shopping::shopWagonPart(double multiplier, int amount){
    Items items;
    ifstream infile;
    infile.open("mainShop.txt");
    if(infile.fail()){
        return -1;
    }
	else{
	    int spot = 0;
	    int count = 1;
	    int buy = 0;
	    int holdNum = 0;
	    string wagonPart = "";
	    string wagonPass = "";
	    string finalize = "";
                cout << "Shop Keeper: Extra wagon parts are always a nice thing to have just in case part of your wagon breaks." << endl;
                cout << "Shop Keeper: Each wagon part will cost you $" << multiplier * 20 << "." << endl;
                cout << "Shop Keeper: How many do you want?" << endl;
                    cin >> buy;
                    if((buy * multiplier * 20) > Shopping::getMoneyS()){
                        cout << "You don't have that much money." << endl;
                    }
                    else{
                        cout << "Shop Keeper: That'll cost you $" << buy * multiplier * 20 << "." << endl;
                        cout << "Shop Keeper: Do you want to buy " << buy;
                        if(buy > 1){
                            cout << " wheels?" << endl;
                        }
                        else{
                            cout << " wheel?" << endl;
                        }
                        cin >> finalize;
                        while(toLower(finalize) != "yes"){
                            if(toLower(finalize) == "no"){
                                break;
                            }
                            else{
                                cout << "Shop Keeper: Please enter yes or no." << endl;
                                cin >> finalize;
                            }
                        }
                        if(toLower(finalize) == "yes"){
                            cout << "Shop Keeper: Hope your wheels stay fine but having extra never hurt anyone." << endl;
                            Shopping::setMoneyS(Shopping::getMoneyS() - (buy * multiplier * 20));
                            holdNum = amount + buy;
                            cout << "Shop Keeper: Your balance is now $" << Shopping::getMoneyS() << " and you have " << holdNum;
                            if(items.getNumWagonParts() == 1){
                                cout << " wagon part." << endl;
                            }
                            else{
                                cout << " wagon parts." << endl;
                            }
                        }
                        return holdNum;
                    }
	}
}

int Shopping::shopMedicalAidKit(double multiplier, int amount){
    Items items;
    ifstream infile;
    infile.open("mainShop.txt");
    if(infile.fail()){
        return -1;
    }
	else{
	    int spot = 0;
	    int count = 1;
	    int buy = 0;
	    int holdNum = 0;
	    string wagonPart = "";
	    string wagonPass = "";
	    string finalize = "";
                cout << "Shop Keeper: Medical kits come in handy when someone gets sick, makes sense you'd want a couple for your trip" << endl;
                cout << "Shop Keeper: Each medical kit will cost you $" << multiplier * 25 << "." << endl;
                cout << "Shop Keeper: So, how many of these miracle workers do you want?" << endl;
                cin >> buy;
                if((buy * multiplier * 25) > Shopping::getMoneyS()){
                    cout << "You don't have that much money." << endl;
                }
                else{
                    cout << "Shop Keeper: That'll cost you $" << buy * multiplier * 25 << "." << endl;
                    cout << "Shop Keeper: Do you want to buy " << buy;
                    if(buy > 1){
                        cout << " medical aid kits?" << endl;
                    }
                    else{
                        cout << " medical aid kit?" << endl;
                    }
                    cin >> finalize;
                    while(toLower(finalize) != "yes"){
                        if(toLower(finalize) == "no"){
                            break;
                        }
                        else{
                            cout << "Shop Keeper: Please enter yes or no." << endl;
                            cin >> finalize;
                        }
                    }
                    if(toLower(finalize) == "yes"){
                        cout << "Shop Keeper: Keep yourself healthy out there." << endl;
                        Shopping::setMoneyS(Shopping::getMoneyS() - (buy * multiplier * 25));
                        holdNum = amount + buy;
                        cout << "Shop Keeper: Your balance is now $" << Shopping::getMoneyS() << " and you have " << holdNum;
                        if(items.getNumMedicalAidKit() == 1){
                            cout << " medical aid kit." << endl;
                        }
                        else{
                            cout << " medical aid kits." << endl;
                        }
                    }
                    return holdNum;
                }
            }
}



#ifndef HUNTING_H
#define HUNTING_H
class Hunting{
    private:
    Items bul;
    Items food;
    int rabbit;
    int fox;
    int bear;
    int deer;
    int moose;
    public:
    Hunting();
    int encounter();
    string question(int);
    bool hunting(int);
    int eat(int, bool, int);
};
#endif

Hunting::Hunting(){
    rabbit = 0;
    fox = 0;
    bear = 0;
    deer = 0;
    moose = 0;
}

int Hunting::encounter(){
    srand(time(NULL));
    int chance = rand() % 100 +1;
    int found = 0;
    cout << "Here are the animals you found: ";
    if(chance <= 50)
    {
        cout<<"rabbit ";
        rabbit = 1;
        found = 1;
    }
    chance = rand() % 100 +1; 
    if(chance <= 25)
    {
        cout << "fox ";
        fox = 1;
        found = 1;
    }
    chance = rand() % 100 +1;
    if(chance <= 15)
    {
        cout << "deer ";
        deer = 1;
        found = 1;
    }
    chance = rand() % 100 +1;
    if(chance <= 7)
    {
        cout << "bear ";
        bear = 1;
        found = 1;
    }
    chance = rand() % 100 +1;
    if(chance <= 5)
    {
        cout << "moose ";
        moose = 1;
        found = 1;
    }
    cout << endl;
    return found;
}

bool Hunting::hunting(int bullets){
    if(bullets < 10)
    {
        cout << "Hunt was unsuccessful." << endl;
        bul.setNumBullets(0);
        return false;
    }
    else
    {
        int bull = bul.getNumBullets() - 10;
        bul.setNumBullets(bull);
        srand(time(NULL));
        int puzzle = rand() % 10 +1;
        cout << "Guess a number between 1 and 10 to solve the puzzle" << endl;
        int guess;
        int i = 0;
        while(i<3)
        {
            cin>>guess;
            if(guess == puzzle)
            {
                cout << "Hunt was successful" << endl;
                return true;
                break;
            }
            else if(i<2)
            {
                cout << "try again" << endl;
            }
            else
            {
                cout << "Hunt was unsuccessful" << endl;
                return false;
            }
            i++;
        }
    }
}

int Hunting::eat(int people, bool suc, int amount){
    srand(time(NULL));
    int sum = 0;
    if(suc == true)
    {
        if(rabbit == 1)
        {
            sum += 2;
        }
        if(fox == 1)
        {
            sum += 5;
        }
        if(deer == 1)
        {
            sum += rand()% 16 + 30;
        }
        if(bear == 1)
        {
            sum += rand()% 251 +100;
        }
        if(moose == 1)
        {
            sum += rand() % 301 +300;
        }
    }
    cout << "How well would you like to eat?" << endl;
    cout <<"(1) poorly   (2) moderately   (3) well" << endl;
    int num;
    while(num != 1)
    {
        cin >> num;
        int eaten = 0;
        if(num == 1)
        {
            eaten = 2*people;
            sum = sum - eaten;
            break;
        }
        else if(num == 2)
        {
            eaten = 3 * people;
            sum = sum - eaten;
            break;
        }
        else if(num == 3)
        {
            eaten = 5* people;
            sum = sum - eaten;
            break;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    sum = amount + sum;
    if(sum<=1000)
    {
        food.setNumFood(sum);
    }
    else
    {
        food.setNumFood(1000);
    }
    cout << "Total number of food left is: " << food.getNumFood() << endl;
    return food.getNumFood();
}



#ifndef MISFORTUNE_H
#define MISFORTUNE_H
class Misfortune{
    private:
    Shopping thing;
    Items piece;
    public:
    int sickness(string, int);
    int brokenPiece(int);
    int deadOxen(int);
    void raid();
};
#endif

int Misfortune::sickness(string name, int amount){
    srand(time(NULL));
    int num = rand()% 6;
    piece.setNumMedicalAidKit(amount);
    string sick[6] = {"typhoid", "cholera", "diarrhea", "measles", "dysentery" , "fever"};
    cout << "Oh no! " << name << " has " << sick[num] << "!" << endl;
    if(piece.getNumMedicalAidKit() > 0)
    {
        cout << "Medkit used!" << endl;
        int med = piece.getNumMedicalAidKit() - 1;
        int chance = rand()% 2;
        if(chance == 0)
        {
            cout << name << " is dead" << endl;
            return 0;
        }
        else
        {
            cout << name << " lived!" << endl;
            return 1;
        }
    }
    else
    {
        cout << "(1) Rest   (2) Press On!" << endl;
        int num;
        cin>>num;
        if(num == 1)
        {
            int chance = rand()% 10 +1;
            if(chance > 3)
            {
                cout << name << " lived!" << endl;
                return 1;
            }
            else
            {
                cout << name << " is dead" << endl;
                return 0;
            }
        }
        else if(num == 2)
        {
            int chance = rand()% 10 +1;
            if(chance > 7) 
            {
                cout << name << " lived!" << endl;
                return 1;
            }
            else
            {
                cout << name << " is dead" << endl;
                return 0;
            }
        }
    }
}

int Misfortune::deadOxen(int amount){
    piece.setNumOxen(amount);
    int num = piece.getNumOxen() - 1;
    cout << "Oh no! One of your oxen has died! You have " << num << " oxen left." << endl;
    return num;
}

int Misfortune::brokenPiece(int amount){
    piece.setNumWagonParts(amount);
    int num = piece.getNumWagonParts() -1;
    srand(time(NULL));
    string part[3] = {"wheels", "axles", "tongues"};
    cout << "Oh no! One of your " << part[rand()%3] << " is broken!" << endl;
    return num;
}



string nameMaker(){
    bool nameYesNo;
    string yesOrNo = "";
    string holdMain = "";
	string name = "";
	int check = 0;
	
	while(holdMain != "pass"){
	    string hold = "";
	    cout << "Please enter a name:" << endl;
	    //cin.ignore(10000, '\n'); //******************** FIX ********************
	    getline(cin, name);
    	cout << "So is " << name << " correct?" << endl << "yes or no" << endl;
    	while(hold != "pass"){
    	    getline(cin, yesOrNo);
    	    // cin >> yesOrNo;
        	if(toLower(yesOrNo) == "yes"){
        	    nameYesNo = true;
        	    hold = "pass";
        	    holdMain = "pass";
        	    return name;
        	}
        	else if(toLower(yesOrNo) == "no"){
        	    nameYesNo = false;
        	    hold = "pass";
        	}
        	else{
        	    cout << "Please enter yes or no" << endl;
        	}
    	}
	}
}

#ifndef PLACES_H
#define PLACES_H
class Places
{
    private:
    string fort[6];
    int milefort[6];
    string river[4];
    int rivermile[4];
    int riverdepth[4] = {4, 3, 5, 5};
    public:
    void readText(string, string);
    string getFort(int);
    int getMileFort(int);
    string getRiver(int);
    int getRiverMile(int);
    int getRiverDepth(int);
    
};
#endif

void Places::readText(string fortm, string riverm)
{
    ifstream infile;
    infile.open(fortm);
    string line;
    int i = 0;
    while(getline(infile, line))
    {
        if(i%2 == 0)
        {
            fort[i/2] = line;
        }
        else
        {
            string words[2];
            split(line, 'm', words, 2);
            milefort[i/2] = stoi(words[0]);
        }
        i++;
    }
    infile.close();
    infile.open(riverm);
    i=0;
    while(getline(infile, line))
    {
        if(i%2 == 0)
        {
            river[i/2] = line;
        }
        else
        {
            string words[2];
            split(line, 'm', words, 2);
            rivermile[i/2] = stoi(words[0]);
        }
        i++;
    }
    infile.close();
}

string Places::getFort(int i)
{
    return fort[i];
}

int Places::getMileFort(int i)
{
    return milefort[i];
}

string Places::getRiver(int i)
{
    return river[i];
}

int Places::getRiverMile(int i)
{
    return rivermile[i];
}

int Places::getRiverDepth(int i)
{
    return riverdepth[i];
}

#ifndef DISTANCE_H
#define DISTANCE_H
class Distance
{
    private:
    int distance;
    public:
    Distance();
    int getDistance();
    void setDistance(int);
    int rest(int);
};
#endif

Distance::Distance()
{
    distance = 0;
}
int Distance::getDistance()
{
    return distance;
}

void Distance::setDistance(int d)
{
    distance = d;
}
int Distance::rest(int people)
{
    srand(time(NULL));
    int days = rand()%3+1;
    return days;
}

#ifndef DATE_H
#define DATE_H
class Date{
    private:
        int day;
        int month;
        int year;
        
    public:
        Date();
        Date(int, int);
        void setDay(int);
        int getDay();
        void setMonth(int);
        int getMonth();
        int getYear();
        int updateDay();
        int updateMonth();
        void selectDay();
};
#endif

Date::Date(){
    day = 0;
    month = 0;
    year = 1847;
}

Date::Date(int holdDay, int holdMonth){
    day = holdDay;
    month = holdMonth;
}

void Date::setDay(int holdDay){
    day = holdDay;
}

int Date::getDay(){
    return day;
}

void Date::setMonth(int holdMonth){
    month = holdMonth;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

int Date::updateDay(){
    int holdDayE = 0;
    if(Date::getMonth() == 3 || Date::getMonth() == 5 || Date::getMonth() == 7 || Date::getMonth() == 8 || Date::getMonth() == 10){
        if(day > 31){
            holdDayE = day%31;
            Date::setDay(holdDayE);
            Date::setMonth(Date::getMonth() + 1);
        }
    }
    else if(Date::getMonth() == 4 || Date::getMonth() == 6 || Date::getMonth() == 9 || Date::getMonth() == 11){
        if(day > 30){
            holdDayE = day%30;
            Date::setDay(holdDayE);
            Date::setMonth(Date::getMonth() + 1);
        }
    }
}

void Date::selectDay(){
    string basicStart = "";
    int month = 3;
    int day = 28;
    string correctDate = "";
    bool monthPass = false;
    bool dayPass = false;
    bool enterDate = false;
    
    cout << "Travel Guide: Hello there, I see you're interested in going on the Oregon Trail." << endl;
    cout << "Travel Guide: Most people choose to start on 3/28/1847 but you don't need to." << endl;
    cout << "Travel Guide: You can start your journey anytime between 3/1/1847 and 5/1/1847" << endl;
    cout << "Travel Guide: Just keep in mind that you need to arrive before winter which should happen at 11/30/1847 this year." << endl;
    cout << "Travel Guide: Do you want to leave on the default date of 3/28/1847?" << endl;
    cin >> basicStart;
    while(toLower(basicStart) != "yes"){
        if(toLower(basicStart) == "no"){
            break;
        }
        else{
            cout << "Travel Guide Please enter yes or no." << endl;
            cin >> basicStart;
        }
    }
    if(toLower(basicStart) == "yes"){
        Date::setDay(day);
        Date::setMonth(month);
    }
    else if(toLower(basicStart) == "no"){
        while(enterDate == false){
            cout << "Travel Guide: When do you want to leave? First enter a month." << endl;
            
            while(monthPass == false){
                cin >> month;
                if(month <= 5 && month >= 3){
                    break;
                }
                else{
                    cout << "Travel Guide: Enter a valid start date. The starting months are 3, 4, and 5." << endl;
                }
            }
            Date::setMonth(month);
            
            cout << "Travel Guide: Ok, now enter a day to leave." << endl;
            
            while(dayPass == false){
                cin >> day;
                if((month == 3 || month == 5) && day <= 31){
                    break;
                }
                else if(month == 4 && day <= 30){
                    break;
                }
                else{
                    cout << "Travel Guide: Enter a valid starting day of the month." << endl;
                }
            }
            Date::setDay(day);
            
            cout << "Travel Guide: Is " << Date::getMonth() << "/" << Date::getDay() << "/" << Date::getYear() << " correct?" << endl;
            string newDate = "";
            
            while(toLower(newDate) != "yes"){
                if(toLower(newDate) == "no"){
                    break;
                }
                else{
                    cout << "Travel Guide Please enter yes or no." << endl;
                    cin >> newDate;
                }
            }
            if(toLower(newDate) == "yes"){
                break;
            }
        }
    }
}



int main()
{
    srand(time(NULL));
    Date date;
    UsersName un;
    Places p;
    Distance dist;
    Items items;
    Shopping shopping;
    Hunting ian;
    Misfortune in;
    bool optionShop = false;
    string playerNames[5];
    int numPlayers = 0;
    double shopMultiplier = 1;
    string wagonBuy = "";
    p.readText("fort-milestones.txt", "river-milestones.txt");
    
    
    cout << "Welcome adventurer to the Oregon Trail" << endl;
	cout << "Hmmm now that I think about it I don't know your name?" << endl;
    un.setPlayerName(nameMaker());
    playerNames[numPlayers] = un.getPlayerName();
    numPlayers++;
    
    cout << "Hello " << un.getPlayerName() << ", now that I know your name let's see who you'll be venturing with: " << endl;
    for(int i = 0; i < 4; i++){
        un.setPlayerName(nameMaker());
        playerNames[numPlayers] = un.getPlayerName();
        if(i != 3){
            cout << "Neeto! On to the next sorry sucker you'll be bringing along with you: " << endl;
        }
        numPlayers++;
    }
    
    for(int i = 0; i < 5; i++){
        cout << playerNames[i] << endl;
    }
    
    
    cout << "Shop Keeper: It seems this is your first time at the shop. Let me help you get started on your journey. ";
    cout << "Here's a wagon, but it'll cost you $200." << endl;
    cout << "Shop Keeper: That will take your total balance from $1200 to $1000." << endl;
    cout << "Shop Keeper: Enter yes to approve the purchase." << endl;
    cin >> wagonBuy;
    while(toLower(wagonBuy) != "yes"){
        cout << "You really should buy it... without this here wagon you can't get started on your journey." << endl;
        cin >> wagonBuy;
    }
    shopping.setMoneyS(1000);
    cout << "Shop Keeper: Congrats on making your first purchase! Now your balance is at " << shopping.getMoneyS() << "." << endl;
    cout << "Shop Keeper: For the start of your trip I'd strongly recommend you purchase between $100 and $200 worth of oxen which is equivalent to 3-5 yoke." << endl;
    cout << "Shop Keeper: I'd also recommennd you buy a minimum of 200 pounds of food for the start of your trip." << endl;
    cout << "Would you like to visit the shop?" << endl;
    cout << "(1) yes   (2) no" << endl;
    int visit;
    cin >> visit;
    if(visit == 1)
    {
        int shop;
        while(optionShop == false){
        shop = shopping.shopMenu(shopMultiplier);
        if(shop == -1){
            cout << "file is corrupted" << endl;
        }
        else if(shop == 1){
            items.setNumOxen(shopping.shopOxen(shopMultiplier, items.getNumOxen()));
        }
        else if(shop == 2){
            items.setNumFood(shopping.shopFood(shopMultiplier, items.getNumFood()));
        }
        else if(shop == 3){
            items.setNumBullets(shopping.shopBullets(shopMultiplier, items.getNumBullets()));
        }
        else if(shop == 4){
            items.setNumWagonParts(shopping.shopWagonPart(shopMultiplier, items.getNumWagonParts()));
        }
        else if(shop == 5){
           items.setNumMedicalAidKit(shopping.shopMedicalAidKit(shopMultiplier, items.getNumMedicalAidKit()));
        }
        else if(shop == 6){
            cout << "You have $" << shopping.getMoneyS() << "." << endl;
        }
        else if(shop == 7){
            remove("mainShop.txt");
            items.setMoney(shopping.getMoneyS());
            cout << endl;
            cout << "Thanks for coming!" << endl;
            cout << "Number of Oxen: " << items.getNumOxen() << endl;
            cout << "lbs of Food: " << items.getNumFood() << endl;
            cout << "Number of Bullets: " << items.getNumBullets() << endl;
            cout << "Number of Wagon Parts: " << items.getNumWagonParts() << endl;
            cout << "Number of Med Kits: " << items.getNumMedicalAidKit() << endl;
            cout << "Balance: $" << shopping.getMoneyS() << endl;
            cout << "Are you happy with this?" << endl;
            string what;
            cin>>what;
            if(what == "no")
            {
                shop = 0;
            }
            else if(what == "yes")
            {
                cout << endl;
                break;
            }
        }
    }
        if(shop == -1){
            cout << "file is corrupted" << endl;
        }
    }
    
    date.selectDay();
    
    bool lose = false;
    int j = 0;
    int k = 0;
    while(dist.getDistance()<2040)
    {
        date.updateDay();
        if(date.getMonth() == 12){
            cout << "You failed to make it Oregon City before winter and you along with your party froze to death." << endl;
            break;
        }
        else{
            cout << "The current date is: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << endl;
        }
        cout << endl;
        if(numPlayers == 0)
        {
            cout << "Game Over, everyone died!" << endl;
            lose = true;
        }
        if(items.getNumFood() == 0)
        {
            lose = true;
            cout << "Game Over, you aint got no food!" << endl;
        }
        if(items.getNumOxen()==0)
        {
            lose = true;
            cout << "Bummer, your oxen are dead!" << endl;
        }
        if(items.getNumWagonParts()<0)
        {
            lose = true;
            cout << "Wagon broken, try again :(" << endl;
        }
        if(lose == true)
        {
            cout << "you travelled " << dist.getDistance() << " miles!" << endl;
            break;
        }
        cout << "Ok now what would you like to do?" << endl;
        cout <<"(1) Rest    (2) Continue    (3) Hunt" << endl;
        int choice;
        cin>>choice;
        if(choice == 1)
        {
            int days = dist.rest(numPlayers);
            cout << "You rested for " << days << " days." << endl;
            int eaten = numPlayers*3*days;
            int food = items.getNumFood() - eaten;
            items.setNumFood(food);
            cout << "You have " << items.getNumFood() << " pounds of food left." << endl;
            date.setDay(date.getDay() + 2);
        }
        else if(choice == 2)
        {
            int distance = dist.getDistance() + rand()%71+70;
            if(p.getMileFort(j) <= distance && p.getMileFort(j)<p.getRiverMile(k))
            {
                cout << "you were going " << distance << " miles, but you come across " << p.getFort(j) << endl;
                distance = p.getMileFort(j);
                dist.setDistance(distance);
                cout << "you have travelled " << distance << " miles." << endl;
                int numb = 0;
                while(numb != 2)
                {
                    cout << "Ok now what would you like to do?" << endl;
                    cout << "(1) Rest    (2) Continue    (3)Shop" << endl;
                    cin>>numb;
                    if(numb == 3)
                    {
                        shopMultiplier = (1+((j+1)/4));
                        int shop = 0;
                        while(shop != 7)
                        {
                            shop = shopping.shopMenu(shopMultiplier);
                            if(shop == -1){
                                cout << "file is corrupted" << endl;
                            }
                            else if(shop == 1){
                                items.setNumOxen(shopping.shopOxen(shopMultiplier, items.getNumOxen()));
                            }
                            else if(shop == 2){
                                items.setNumFood(shopping.shopFood(shopMultiplier, items.getNumFood()));
                            }
                            else if(shop == 3){
                                items.setNumBullets(shopping.shopBullets(shopMultiplier, items.getNumBullets()));
                            }
                            else if(shop == 4){
                                items.setNumWagonParts(shopping.shopWagonPart(shopMultiplier, items.getNumWagonParts()));
                            }
                            else if(shop == 5){
                               items.setNumMedicalAidKit(shopping.shopMedicalAidKit(shopMultiplier, items.getNumMedicalAidKit()));
                            }
                            else if(shop == 6){
                                cout << "You have $" << shopping.getMoneyS() << "." << endl;
                            }
                            else if(shop == 7){
                                cout << endl;
                                remove("mainShop.txt");
                                items.setMoney(shopping.getMoneyS());
                                cout << "Thanks for coming!" << endl;
                                cout << "Number of Oxen: " << items.getNumOxen() << endl;
                                cout << "lbs of Food: " << items.getNumFood() << endl;
                                cout << "Number of Bullets: " << items.getNumBullets() << endl;
                                cout << "Number of Wagon Parts: " << items.getNumWagonParts() << endl;
                                cout << "Number of Med Kits: " << items.getNumMedicalAidKit() << endl;
                                cout << "Balance: $" << shopping.getMoneyS() << endl;
                                cout << "Are you happy with this?" << endl;
                                string what;
                                cin>>what;
                                if(what == "no")
                                {
                                    shop = 0;
                                }
                                else
                                {
                                    shop = 7;
                                }
                                cout <<endl;
                            }
                        }
                    }
                    else if(numb == 1)
                    {
                        cout << "Ok you rested 1 day" << endl;
                        int eaten = numPlayers*3;
                        int foodleft = items.getNumFood() - eaten;
                        cout << "Your food supply is at " << foodleft << " pounds" << endl;
                        items.setNumFood(foodleft);
                    }
                    else if(numb == 2)
                    {
                        cout << "You decide to leave." << endl;
                        break;
                    }
                    else
                    {
                        cout << "invalid option" << endl;
                    }
                }
                j++;
            }
            else if(p.getRiverMile(k)<= distance)
            {
                cout << "you were going " << distance << " miles, but you come across " << p.getRiver(k) << endl;
                distance = p.getRiverMile(k);
                cout << "you have travelled: " << distance << " miles" << endl;
                dist.setDistance(distance);
                int numb = 0;
                while(numb != 2)
                {
                    cout << "What would you like to do?" << endl;
                    if(p.getRiverDepth(k)<= 3)
                    {
                        cout << "(1) Rest    (2) Walk across" << endl;
                        cin>> numb;
                        if(numb == 1)
                        {
                            int eaten = numPlayers*3;
                            int food = items.getNumFood() - eaten;
                            items.setNumFood(food);
                            cout << "you have rested for 1 day" << endl;
                            cout << "you have " << food << " pounds of food left" << endl;
                        }
                        else
                        {
                            cout << "You got across!" << endl;
                            k++;
                        }
                    }
                    else
                    {
                        cout << "(1)Rest    (2)Ferry over" << endl;
                        cin>>numb;
                        if(numb == 1)
                        {
                            int eaten = numPlayers*3;
                            int food = items.getNumFood() - eaten;
                            items.setNumFood(food);
                            cout << "you have rested for 1 day" << endl;
                            cout << "you have " << food << " pounds of food left" << endl;
                        }
                        else
                        {
                            double m = items.getMoney() - (numPlayers*10);
                            cout << "You got across and have " << m << " dollars left." << endl;
                            items.setMoney(m);
                            shopping.setMoneyS(m);
                            k++;
                        }
                    }
                }
            }
            else
            {
                dist.setDistance(distance);
                cout << "You have travelled " << distance << " miles from the start." << endl;
            }
            if(distance >= 2040)
            {
                cout << "Congratulations!!! You have just made it to Oregon City!"<< endl;
                cout << "Now you can farm and own slaves in peace :)" << endl;
                break;
            }
            int eaten = numPlayers * 3 * 14;
            int foodleft = items.getNumFood() - eaten;
            if(foodleft<0)
            {
                items.setNumFood(0);
            }
            else
            {
                items.setNumFood(items.getNumFood() - eaten);
            }
            cout << "Your food supply is at " << items.getNumFood() << " pounds" << endl;
            cout << endl;
            date.setDay(date.getDay() + 14);
            
        }
        else if(choice == 3)
        {
            int find = ian.encounter();
            if(find==0)
            {
                cout << "Sorry no animals found." << endl;
            }
            else
            {
                cout << "Would you like to hunt these animals?" << endl;
                cout << "(1) yes   (2) no" <<endl;
                int answer;
                cin>>answer;
                if(answer==1)
                {
                    bool success = ian.hunting(items.getNumBullets());
                    items.setNumFood(ian.eat(numPlayers, success, items.getNumFood()));
                }
            }
            cout << endl;
            date.setDay(date.getDay() + 1);
        }
        else
        {
            cout <<"Invalid choice." << endl;
            cout << endl;
        }
        int chance = rand()% 10 +1;
        if(chance <=4)
        {
            int mis = rand()% 3;
            if(mis == 0)
            {
                int pick = rand()%5;
                int death = in.sickness(playerNames[pick], items.getNumMedicalAidKit());
                cout << endl;
                if(items.getNumMedicalAidKit()>0)
                {
                    items.setNumMedicalAidKit(items.getNumMedicalAidKit() -1);
                }
                if(death == 0)
                {
                    numPlayers = numPlayers -1;
                }
                if(playerNames[0] == playerNames[pick] && death == 0)
                {
                    cout << "You died" << endl;
                    lose = true;
                }
                if(lose == true)
                {
                    cout << "you travelled " << dist.getDistance() << " miles!" << endl;
                    break;
                }
            }
            else if(mis == 1)
            {
               items.setNumOxen(in.deadOxen(items.getNumOxen()));
            }
            else
            {
               items.setNumWagonParts(in.brokenPiece(items.getNumWagonParts()));
               cout << "You have " << items.getNumWagonParts() << " wagon parts left." << endl;
            }
        }
    }
    ifstream infile;
    infile.open("results.txt");
    int temp = 0;
    if(!infile.is_open())
    {
        cout << "Results page could not be found" << endl;
    }
    else
    {
        string words[2];
        string line;
        int score;
        int i = 0;
        while(getline(infile, line))
        {
            split(line, ':', words, 2);
            score = stoi(words[1]);
            if(score < dist.getDistance())
            {
                temp = i;
                break;
            }
            else
            {
                temp = i;
            }
            i++;
        }
        infile.close();
        infile.open("results.txt");
        ofstream outfile;
        outfile.open("results.txt");
        for(i=0;i<temp;i++)
        {
            getline(infile, line);
            outfile << line << endl;
        }
        cout << "What is you name? (for the score board)" << endl;
        string user;
        cin>>user;
        outfile << user << "------------Score:" << dist.getDistance()<<endl;
        cout << "Thanks for playing " << user << endl;
    }
}
