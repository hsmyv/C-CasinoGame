# C-CasinoGame
There is little fraude that if user win more than 10, he will lose although he guess truly


 if(random == guess)
        {
            if(winning >= 10)  
            {
                cout << "\nThe winning number was : " << random + 1 << "\n";
                cout << "Bad Luck this time !! You lost $ " << bettingAmount << "\n";
                amount = amount - bettingAmount;
                
            }else{
                cout << "\nThe winning number was : " << random << "\n";
                cout << "\n\nGood Luck!! You won $ " << bettingAmount * 10;
                amount = amount + bettingAmount * 10;
                winning += 1;
            }
        }
