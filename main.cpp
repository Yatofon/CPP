//Лабораторная работа №8

#include <iostream>
#include <fstream>

using namespace std;

const int N_max = 5120;

bool read(std::string words[N_max], int& n)
{
    ifstream in("input.txt");
    if (!in.is_open())
    {
        cout << "File not opened";
        return false;
    }
    n = 0;
    while (!in.eof())
    {
        in >> words[n];
        n++;
    }
}

void write (string words[N_max], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "<" << words[i] << ">" << "\n";
    }
    
}

string toLower (string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if('A' <= word[i] && word[i] <= 'Z') word[i] += 32;
    }
    return word;
}

char toLowerChar (char c)
{
    if('A' <= c && c <= 'Z') c += 32;
    return c;
}

bool twoEqualsWords(string words[N_max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (toLower(words[i]) == toLower(words[j]))
            {
                return true;
            }
        }
    }
    return false;
}

bool isConsonant(char c)
{
    string vowels = "eyuioaEYUIOA";
    return vowels.find(c) == string::npos;
}

void removeVowels(string words[N_max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = words[i].length() - 1; j >= 0; j--)
        {
            if (!isConsonant(words[i][j]))
            {
                words[i].erase(j, 1);
            }
        }
    }
    return;
}

bool isLessFourVowels(const string& word)
{
    int k = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (!isConsonant(word[i]))
        {
            k +=1;
        }
    }
    return k <= 3;
}

void dublicateConsonants (string& word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (isConsonant(word[i]))
        {
            word.insert(i, 1, word[i]);
            i++;
        }
        
    }
    
}

void sort(string words[N_max], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (toLower(words[i]) > toLower(words[j])) swap(words[i], words[j]);
        }
        
    }
    
}

int main(void)
{
    string words[N_max];
    int n;
	read(words, n);
    if (twoEqualsWords(words, n)) removeVowels(words, n);
    else 
    {   
        for   (int i = 0; i < n; i++)
        {
            if (isLessFourVowels(words[i]))
            {   
                dublicateConsonants(words[i]);
            }
        }
    }
    sort(words, n);
    write(words, n);
}
