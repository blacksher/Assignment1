#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string text = ""; //empty string
    string filename; //variable to take in user input 
    double lettercount = 0.0;
    double numoflines = 0.0;
    double numofA = 0.0;
    double numofC = 0.0;
    double numofT = 0.0;
    double numofG = 0.0;

    double probabilityofA = 0.0;
    double probabilityofC = 0.0;
    double probabilityofT = 0.0;
    double probabilityofG = 0.0;

    double numofAA = 0.0;
    double numofAC = 0.0;
    double numofAT = 0.0;
    double numofAG = 0.0;

    double probabilityofAA = 0.0;
    double probabilityofAC = 0.0;
    double probabilityofAT = 0.0;
    double probabilityofAG = 0.0;

    double numofCA = 0.0;
    double numofCC = 0.0;
    double numofCT = 0.0;
    double numofCG = 0.0;

    double probabilityofCA = 0.0;
    double probabilityofCC = 0.0;
    double probabilityofCT = 0.0;
    double probabilityofCG = 0.0;

    double numofTA = 0.0;
    double numofTC = 0.0;
    double numofTT = 0.0;
    double numofTG = 0.0;

    double probabilityofTA = 0.0;
    double probabilityofTC = 0.0;
    double probabilityofTT = 0.0;
    double probabilityofTG = 0.0;

    double numofGA = 0.0;
    double numofGC = 0.0;
    double numofGT = 0.0;
    double numofGG = 0.0;

    double probabilityofGA = 0.0;
    double probabilityofGC = 0.0;
    double probabilityofGT = 0.0;
    double probabilityofGG = 0.0;

    int sumofcombos = 0;

    double variablea = rand();
    double variableb = rand();

    ofstream outputFile("AlliyahBlacksher.out");
    outputFile << "Alliyah Blacksher \nCPSC 350 Section 1 \nID: 2328011 \n" << endl;

    cout << "Enter the text file name: " << endl;
    cin >> filename; //storing user input into filename
    ifstream userFile(filename); //opening the file from the user

    while(getline(userFile,text)) //gets the lines from the file 
    {
        //cout << text << endl; //prints each line in text file
        
        for (int i = 0; i < text.length(); i++) // inerating through the characters
        {
            if(text[i] == 'a' || text[i] == 'A')
            {

                lettercount ++;
                numofA ++;
                //cout << "a" << endl; //checking
                if (text[i+1] == 'a' || text[i+1] == 'A')
                {
                    numofAA++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'c' || text[i+1] == 'C')
                {
                    numofAC++;
                    sumofcombos++;

                }
                else if(text[i+1] == 't' || text[i+1] == 'T')
                {
                    numofAT++;
                    sumofcombos++;
                }
                else if(text[i+1] == 'g' || text[i+1] == 'G')
                {
                    numofAG++;
                    sumofcombos++;
                }
                          
            }
            if(text[i]  == 'c' || text[i] == 'C')
            {
                lettercount ++;
                numofC ++;
                //cout << "c" << endl; //checking
                if (text[i+1] == 'a' || text[i+1] == 'A')
                {
                    numofCA++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'c' || text[i+1] == 'C')
                {
                    numofCC++;
                    sumofcombos++;
                }
                else if (text[i+1] == 't' || text[i+1] == 'T')
                {
                    numofCT++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'g' || text[i+1] == 'G')
                {
                    numofCG++;
                    sumofcombos++;
                }
            }
            if(text[i] == 't' || text[i] == 'T')
            {
                lettercount ++;
                numofT ++;
                //cout << "t" << endl; //checking
                if (text[i+1] == 'a' || text[i+1] == 'A')
                {
                    numofTA++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'c' || text[i+1] == 'C')
                {
                    numofTC++;
                    sumofcombos++;
                }
                else if (text[i+1] == 't' || text[i+1] == 'T')
                {
                    numofTT++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'g' || text[i+1] == 'G')
                {
                    numofTG++;
                    sumofcombos++;
                }
            }
            if(text[i] == 'g' || text[i] == 'G')
            {
                lettercount ++;
                numofG ++;
                //cout << "g" << endl; //checking
                if (text[i+1] == 'a' || text[i+1] == 'A')
                {
                    numofGA++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'c' || text[i+1] == 'C')
                {
                    numofGC++;
                    sumofcombos++;
                }
                else if (text[i+1] == 't' || text[i+1] == 'T')
                {
                    numofGT++;
                    sumofcombos++;
                }
                else if (text[i+1] == 'g' || text[i+1] == 'G')
                {
                    numofGG++;
                    sumofcombos++;
                }
            }
        }

        numoflines ++;
    }


    
    double mean = lettercount/numoflines;
    double variance = ( ((numofA - mean)*(numofA - mean)) + ((numofC - mean)*(numofC - mean)) + ((numofT - mean)*(numofT - mean)) + ((numofG - mean)*(numofG - mean)) ) / numoflines ;
    double deviation = sqrt(variance);

    double variablec = sqrt(-2*log(variablea))*cos(2*M_PI*variableb); // returns nan? //standard gaussian
    double variabled = (deviation* variablec) + mean;

    probabilityofA = numofA /lettercount;
    probabilityofC = numofC/lettercount;
    probabilityofT = numofT /lettercount;
    probabilityofG = numofG /lettercount;

    probabilityofAA = numofAA /sumofcombos;
    probabilityofAC = numofAC/sumofcombos;
    probabilityofAT = numofAT /sumofcombos;
    probabilityofAG = numofAG /sumofcombos;

    probabilityofCA = numofCA /sumofcombos;
    probabilityofCC = numofCC/sumofcombos;
    probabilityofCT = numofCT /sumofcombos;
    probabilityofCG = numofCG /sumofcombos;

    probabilityofTA = numofTA /sumofcombos;
    probabilityofTC = numofTC/sumofcombos;
    probabilityofTT = numofTT /sumofcombos;
    probabilityofTG = numofTG /sumofcombos;

    probabilityofGA = numofA /sumofcombos;
    probabilityofGC = numofC/sumofcombos;
    probabilityofGT = numofT /sumofcombos;
    probabilityofGG = numofG /sumofcombos;


for (int i = 0; i < 1000; i ++)
{
    for(int k = 0; k < variabled; k++)
    {
        if(variablec < probabilityofA)
        {
            outputFile << "A";
        }
        if(variablec < probabilityofA + probabilityofC)
        {
            outputFile << "C";
        }
        if(variablec < probabilityofA + probabilityofC + probabilityofT)
        {
            outputFile << "T";
        }
        if(variablec < probabilityofA + probabilityofC + probabilityofT + probabilityofG)
        {
            outputFile << "G";
        }
    }

}

    //cout << "this is the number of AT: " << numofAT << endl; //checking if gives right amount of combos

    outputFile << "This is deviation: " << deviation << endl;
    outputFile << "This is the variance: " << variance << endl;

    outputFile << "this is the sum: " << lettercount << endl;
    outputFile << "This is mean: " << mean << endl;
    
    outputFile << "This is the total number of combos: " << sumofcombos << endl;

    outputFile << "___________________________________________________" << endl;

    outputFile << "This is the probability of A: " << probabilityofA << endl;
    outputFile << "This is the probability of C: " << probabilityofC << endl;
    outputFile << "This is the probability of T: " << probabilityofT << endl;
    outputFile << "This is the probability of G: " << probabilityofG << endl;

    outputFile << "___________________________________________________" << endl;

    outputFile << "This is the probability of AA: " << probabilityofAA << endl;
    outputFile << "This is the probability of AC: " << probabilityofAC << endl;
    outputFile << "This is the probability of AT: " << probabilityofAT << endl;
    outputFile << "This is the probability of AG: " << probabilityofAG << endl;

    outputFile << "___________________________________________________" << endl;

    outputFile << "This is the probability of CA: " << probabilityofCA << endl;
    outputFile << "This is the probability of CC: " << probabilityofCC << endl;
    outputFile << "This is the probability of CT: " << probabilityofCT << endl;
    outputFile << "This is the probability of CG: " << probabilityofCG << endl;

    outputFile << "___________________________________________________" << endl;

    outputFile << "This is the probability of TA: " << probabilityofTA << endl;
    outputFile << "This is the probability of TC: " << probabilityofTC << endl;
    outputFile << "This is the probability of TT: " << probabilityofTT << endl;
    outputFile << "This is the probability of TG: " << probabilityofTG << endl;

    outputFile << "___________________________________________________" << endl;

    outputFile << "This is the probability of GA: " << probabilityofGA << endl;
    outputFile << "This is the probability of GC: " << probabilityofGC << endl;
    outputFile << "This is the probability of GT: " << probabilityofGT << endl;
    outputFile << "This is the probability of GG: " << probabilityofGG << endl;

    outputFile << "___________________________________________________" << endl;



    string moreFiles;
    cout << "Use another file? Type Y/N: " << endl;
    cin >> moreFiles;

    while(moreFiles == "Y" || moreFiles == "y")
    {
        cout << "Enter the text file name: " << endl;
        cin >> filename; //storing user input into filename
        ifstream userFile(filename); //opening the file from the user

        if(moreFiles == "N" || moreFiles == "n")
        {
            cout << "Thank you! Goodbye" << endl;
            EXIT_SUCCESS;
        }

    }

}

//References:
//github/vincecarpino
//github/JaGod
//cplusplus.com
//mathisfun.com
//stackoverflow.com
//youtube.com
//includehelp.com
//codescracker.com
//codesdope.com