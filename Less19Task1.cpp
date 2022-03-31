/*
Составьте небольшой текстовый файл «words.txt», в котором последовательно, через пробелы и переносы строк расположены различные слова.
Можете использовать любые англоязычные слова. Разработайте программу, которая искала бы среди этих слов нужное пользователю
и выводила бы общее количество повторений этого слова. 0 — если слово вообще не присутствует в файле.

Что оценивается
Корректность работы программы на созданных вами вводных данных. Число найденных слов должно соответствовать.

D:\OneDrive\Документы\Учёба\Skiilbox\Lesson 19. Read from file\Less19Task1\Rouling_Harry_Potter_1_Harry_Potter_and_the_Sorcerers_Stone_RuLit_Net.txt
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <char> temp;
    ifstream book;
    book.open("D:\\OneDrive\\Документы\\Учёба\\Skiilbox\\Lesson 19. Read from file\\Less19Task1\\Rouling_Harry_Potter_1_Harry_Potter_and_the_Sorcerers_Stone_RuLit_Net.txt"
        , ios::binary);
    
    cout << "Input search word: ";
    string sFind;
    cin >> sFind;

    int nFound = 0;
    while (!book.eof())
    {
        string cWord;
        book >> cWord;
        if (cWord == sFind)
        nFound++;
    }
    book.close();
    cout << "Found words: " << nFound;
}
