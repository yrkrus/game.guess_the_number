#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
    Игра - угадай число
*/

int main()
{
 
    setlocale(LC_ALL, "");

    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 - 1;
    int tries{ 0 };
    int guess;

    char choise = '1';
    

    cout << "Игра - Угадай номер \n\n";
    

    cout << "1. Компьютер загадывает число. Пользователь его отгадывает\n"
         << "2. Пользователь загадыыавет число. Компьбтер его отгадывает";

    cout << "\n\n\n";
    cin >> choise;    

    switch (choise)
    {
    case '1':
     {
        do {

            //r   cout << "загаданное число: " << secretNumber << endl;           
            cout << "Введите число: ";
            cin >> guess;

            ++tries;

            if (guess > secretNumber)
            {
                cout << "Число меньше загаданного \n";
            }
            else if (guess < secretNumber)
            {
                cout << "Число больше загаданного \n";
            }
            else
            {
                cout << "УРА, загаданное число отгадано, на это ушло " << tries << " попыток";
            }

        } while (guess != secretNumber);

        break;
     }
    case '2':
     {
        cout << "Введите число: ";
        cin >> secretNumber;

        int guess = rand() % secretNumber - 1;
        
        while (guess != secretNumber) 
        {
            ++tries;
            ++guess;        
        }      
        
        cout << "Зааданное число отгадано: " << secretNumber << " на это ушло " << tries << " попыток";  
        break;
     }
    }

    system("pause");
    return 0;    
}

