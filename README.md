# C-CasinoGame


    if (random == guess)
        {
            winning += 1;
            cout << winning << endl;
            if (winning < 10)
            {
                winnerDisplay();
            }          
     if (winning >= 10)// there is little fraude that if user win more than 10, he will lose although he guess truly
           {
                cout << "addfraudly" << addfraudly << endl;
                randomf = rand() % addfraudly;
                switch (randomf)
                {
                case 1:
                    
                    winnerDisplay();
                    addfraudly += 1;   // winning opportunity getting little bit hard
                    break;
                default:
                    random += 1; // display false winning random number
                    loserDisplay();
                    break;
                }
            }
        }
        else
        {
            loserDisplay();
        }
 
        void winnerDisplay()
                {
                    cout << "\nThe winning number was : " << random << "\n";
                    cout << "\n\nGood Luck!! You won $ " << bettingAmount * 10;
                    amount = amount + bettingAmount * 10;
                }

        void loserDisplay()
                {
                    cout << "\nThe winning number was : " << random << "\n";
                    cout << "Bad Luck this time !! You lost $ " << bettingAmount << "\n";
                    amount = amount - bettingAmount;
                }
     
