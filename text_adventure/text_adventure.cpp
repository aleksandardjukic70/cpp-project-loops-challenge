#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    //"seed" of the random number generator
    srand (time(NULL));

    int userInput = 0;
    int bruxa = 100;
    int geralt = 100;
    int sword = 5;
    int bomb = 15;




    //what now you piece of filth
    

    std::cout << "Her Majesty, the Duches, Anna Henrietta was furious with Geralt.\n";
    std::cout << "She made it clear to him that he was walking on thin ice\n"; 
    std::cout << "right after he told her that she should have sent her royal beagles to hunt down The Beast of Beauclair.\n\n";

    std::cout << "* A wounded soldier appears *\n\n";

    std::cout << "* Gasps *\n";
    std::cout << "Your grace.... vampires... they attacked the city...\n";
    std::cout << "* Gasps *\n";
    std::cout << "Captain de la Tour defends the square near the boat landing... but... so many lives lost...\n";
    std::cout << "* Gasps *\n\n";

    std::cout << "Her Majesty Anna Henrietta is watching the soldier in disbelief.\n"; 
    std::cout << "Geralt approaches the balcony to get a better view of the city.\n\n";

    std::cout << " 1) 'Dammit.' \n 2) Say nothing. \n";
    std::cin >> userInput;
    
    switch (userInput) {
    case 1:
        std::cout << "'Dammit.', the witcher whispers.\n\n";
        break;
    case 2:
        std::cout << "\nWhitcher is watching the city getting teared down by swarms of vampiers,\n";
        std::cout << "thinking about the next step that would put an end to this madness.\n\n";
        break;
    } 

    std::cout << "Anna Henrietta aprroaches the balcony.\n\n";
    std::cout << "'If its war this Dettlaff wants, it war he shall have.', she says decisively.\n";
    std::cout << "'Geralt get to work. This time I'll hear no excuses. Palmerin, you..', she gets cut off\n";
    std::cout << "as soldiers helment rolls to the place where they were standing.\n";
    std::cout << "They looked swiftly up and beheld a site of bruxa devouring some poor soldier.\n\n";

    std::cout << "'Get her out of here!', Geralt yells as he pulls out his silver blade soaked with vampire oil.\n\n";

    while (bruxa >= 1 && geralt >= 1) {
        int chance = rand() % 2;

        std::cout << " \n 1) Slash bruxa with sword\n 2) Throw bomb at bruxa\n";
        std::cin >> userInput;

        switch (userInput) {
        
        case 1: if (chance == 0) {
            std::cout << "\nGeralt slashes bruxa with sword dealing 5dmg.\n";
            bruxa = bruxa - sword;
            std::cout << "\nBruxa " << bruxa << " hp\n";
            std::cout << "Geralt " << geralt <<" hp\n";

            if (bruxa <= 0) {
                std::cout << "\nAfter a tough fight, the witcher finally slays bruxa.\n";
            }
            else if (geralt <= 0) {
                std::cout << "\nBruxa slays witcher. You are dead.\n";
            }
            else {
                std::cout << "\nFight goes on.\n";
            }
        }
              else {
                    std::cout << "\nGeralt misses bruxa and she bites him dealing 5dmg.\n";
                    geralt = geralt - sword;
                    std::cout << "\nBruxa " << bruxa << " hp\n";
                    std::cout << "Geralt " << geralt << " hp\n";

                    if (bruxa <= 0) {
                        std::cout << "\nAfter a tough fight, the witcher finally slays bruxa.\n";
                    }
                    else if (geralt <= 0) {
                        std::cout << "\nBruxa slays witcher. You are dead.\n";
                    }
                    else {
                        std::cout << "\nFight goes on.\n";
                    }
        }
            break;
        case 2: if (chance == 0) {
            std::cout << "\nGeralt throws bomb at bruxa dealing 15dmg.\n";
            bruxa = bruxa - bomb;
            std::cout << "\nBruxa " << bruxa << " hp\n";
            std::cout << "Geralt " << geralt << " hp\n";

            if (bruxa <= 0) {
                std::cout << "\nAfter a tough fight, the witcher finally slays bruxa.\n";
            }
            else if (geralt <= 0) {
                std::cout << "\nBruxa slays witcher. You are dead.\n";
            }
            else {
                std::cout << "\nFight goes on.\n";
            }
        }
              else {
            std::cout << "\nGeralt misses bruxa and she bites him dealing 5dmg.\n";
            geralt = geralt - bomb;
            std::cout << "\nBruxa " << bruxa << " hp\n";
            std::cout << "Geralt " << geralt << " hp\n";

            if (bruxa <= 0) {
                std::cout << "\nAfter a tough fight, the witcher finally slays bruxa.\n";
            }
            else if (geralt  <= 0) {
                std::cout << "\nBruxa slays witcher. You are dead.\n";
            }
            else {
                std::cout << "\nFight goes on.\n";
            }
        }
              break;
        default: std::cout << "\nWrong input, try again.\n";

        }
    
    }

        

}
    


