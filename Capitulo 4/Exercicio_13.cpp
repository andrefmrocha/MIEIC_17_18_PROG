//
// Created by andrefmrocha on 21-03-2018.
//
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Exercicio_13.h"
using namespace std;

void name_Sort()
{
    string STRING, file_name;
    vector<string> names;
    cout << "Indique o nome do ficheiro: ";
    cin >> file_name;
    ifstream infile;
    infile.open (file_name + ".txt");
    ofstream outfile(file_name + "_sorted.txt");
    while(getline(infile, STRING))// To get you all the lines.
    {
        names.push_back(STRING); // Prints our STRING.
    }
    sort(names.begin(), names.end());
    for (int i = 0; i < names.size(); i++)
    {
        outfile << names.at(i) << '\n';
    }
    outfile.close();
    infile.close();
}