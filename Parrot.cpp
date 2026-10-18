#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
class Parrot {
private:
    vector<string> phrases;
public:
    Parrot(string initialPhrase) {
        phrases.push_back(initialPhrase);
        srand(static_cast<unsigned int>(time(nullptr)));
    }
    void setPhrase(string newPhrase) {
        if (!phrases.empty()) {
            phrases[0] = newPhrase;
        } else {
            phrases.push_back(newPhrase);
        }
    }
    void addPhrase(string phrase) {
        phrases.push_back(phrase);
    }
    void say(int repetitions = 1) const {
        if (phrases.empty()) {
            cout << "The Phoenix is silent.." << endl;
            return;
        }
        int randomIndex = rand() % phrases.size();
        string chosenPhrase = phrases[randomIndex];
        for (int i = 0; i < repetitions; ++i) {
            cout << chosenPhrase << " ";
        }
        cout << endl;
    }
};

int main() {
    Parrot ArmosTheUnyieldingPhoenix("Die!");
    cout<<"Krok 1 i 2 (Fraza poczatkowa):"<<endl;
    ArmosTheUnyieldingPhoenix.say();
    ArmosTheUnyieldingPhoenix.setPhrase("Greetings!");
    cout<<"\nKrok 3 (Po zmianie frazy):"<<endl;
    ArmosTheUnyieldingPhoenix.say();
    cout<<"\nKrok 4 (Powtorzenie 3 razy):"<<endl;
    ArmosTheUnyieldingPhoenix.say(3);
    ArmosTheUnyieldingPhoenix.addPhrase("I'll purify them!");
    ArmosTheUnyieldingPhoenix.addPhrase("Purge them in flames!");    
    cout<<"\nKrok 5 (Losowe frazy z bazy danych):"<<endl;
    for (int i = 0; i < 4; ++i) {
        cout<<i + 1<<": ";
        ArmosTheUnyieldingPhoenix.say(2); 
    }
    return 0;
    
}
