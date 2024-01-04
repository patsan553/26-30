#include <iostream>
#include <iomanip>

void program0()
{
    int i, d1, d2, d3;
    std::cout << "Output of all 3-digit numbers that have only 2 equal digits: ";

    for (i = 100; i < 1000; i++)
    {
        d1 = i / 100;
        d2 = i % 100 / 10;
        d3 = i % 10;
        if (d1 == d2 || d2 == d3 || d3 == d1)
        {
            if (d1 != d2 || d2 != d3 || d3 != d1)
            {
                std::cout << i << " ";
            }
        }
    }

}

void program1()
{
    int x, y, min;
    std::cout << "Enter numerator and denominator: ";
    std::cin >> x>> y;

    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    if (x < y)
    {
        min = x;
    }
    else
    {
        min = y;
    }

    std::cout << x << "/" << y;

    for (int i = min; i > 0; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            x = x / i;
            y = y / i;
            std::cout << " = " << x << "/" << y << std::endl;
            break;
        }
    }

}

void program2()
{
    int n, b, i, f;
    std::cout << "Output digits don't enter n.\nEnter natural n: ";
    std::cin >> n;

    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    if (n < 1)
    {
        std::cout << "Enter natural number!";
        return;
    }
   
    for (int i = 0; i < 10; i++) 
    {
        int temp = n;
        int found = 0;

        while (temp > 0) 
        {
            if (temp % 10 == i) 
            {
                found = 1;
                break;
            }
            temp /= 10;
        }

        if (!found) 
        {
            std::cout << i << " ";
        }
    }


}

void program3()
{
    for (int i = 0; i < 8; ++i) 
    {
        std::cout << 8 - i;
        for (int j = 0; j < 8; ++j) 
        {
            if ((i + j) % 2 == 0) 
            {
                std::cout << "*";
            }
            else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << " ";
    for (char c = 'a'; c <= 'h'; c++) 
    {
        std::cout << c;
    }
}

void program4()
{
    int n, i, j;
    std::cout << "Drawing different figures.\nEnter n: ";
    std::cin >> n;

    // проверка, что были введены числа
    if (std::cin.fail()) // извлечение не производилось
    {
        std::cout << "\nInput error!!!";
        // сбрасываем биты состояния обратно в goodbit, чтобы мы могли использовать ignore()
        std::cin.clear();
        // очищаем недопустимый ввод из потока
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = n; j > 0; j--)
        {
            if (i + 1 <= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < n; i++)
    {
        for (j = n; j > 0; j--)
        {
            if (i + 1 >= j)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = 0; j < 2 * n - 1; j++)
        {
            if (i + j < n - 1 || i + j >= 3 * n - 2 || j > i + n - 1 || i > j + n - 1)
            {
                std::cout << " ";
            }
            else
            {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
}




int main()
{
    bool answer;

    //program0(); //26 [
    //program1(); //27 [
    //program2(); //28 [
    //program3(); //29 [
    //program4(); //30 [


    std::cout << "\nOne more? (1 - yes, 0 - no): ";
    std::cin >> answer;

    if (answer)
    {
        main();
    }
    return 0;
}
