#include <iostream>
#include "PhoneticFinder.hpp"
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <functional>



vector<string> split (string sentence, string split) 
{
    size_t pos_start = 0, pos_end, splitBy_len = split.length();
    string token;
    vector<string> res;

    while ((pos_end = sentence.find (split, pos_start)) != string::npos) 
    {
        token = sentence.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + splitBy_len;
        res.push_back (token);
    }

    res.push_back (sentence.substr (pos_start));
    return res;
}

string phonetic::find(string txt, string word)
{
    int indexWord, indexCurrent;
    string splitBy = " ";
    string tempCurrent;
    vector textSplit = split(txt,splitBy);
    bool check = false;
    bool checkChar = false;
    for (auto current : textSplit) 
    {
        tempCurrent = current;
        transform(tempCurrent.begin(), tempCurrent.end(),tempCurrent.begin(), :: tolower);
        cout << tempCurrent << endl;

        if (tempCurrent.size == word.size)  // check if words length is equal
        {
           indexWord = 0;
           indexCurrent = 0;
           for (int i = 0; i < word.size; i++) // go over both words to check if equal
           {
               if (tempCurrent.at(indexCurrent) == word.at(indexWord))  // checks if letters are equal
               {
                  indexWord ++;
                  indexCurrent ++; 
               } 
               else  // if not, check if the the replacment letter is equal
               {
                   char charCurrent = tempCurrent.at(indexCurrent);
                   char charWord = word.at(indexWord);
                   checkChar = checkEqual(charCurrent, charWord); 
                   if (check == false)
                   {
                      i = word.size;  //will stop the for
                   }
                   else
                   {
                       indexWord ++;
                       indexCurrent ++; 
                   }
               }
           }
           if (current.size == indexWord)
           {
               check = true;
               cout << "The word in the text is : " + current;
               return current;
           }
           
           
           
        }

        // here return error
        
        // string duplicate = txt;
        // transform(word.begin(), word.end(),word.begin(), :: tolower); //change txt to lower case
        // transform(duplicate.begin(), duplicate.end(),duplicate.begin(), :: tolower); //change word to lower case
      return "";
    }
}

bool checkEqual(char current, char word)
{
    switch (word){
      // v || w
        case 'v':
                if (current == 'w')
                {
                    return true;
                }
                else return false;
       case 'w':
                if (current == 'v')
                {
                    return true;
                }
                else return false; 
    // b || f || p
        case 'b':
                if (current == 'f' || current == 'p')
                {
                    return true;
                }
                else return false;  
        case 'f':
                if (current == 'b' || current == 'p')
                {
                    return true;
                }
                else return false;                                   
        case 'p':
                if (current == 'f' || current == 'b')
                {
                    return true;
                }
                else return false;  
        // j || g
        case 'j':
                if (current == 'g')
                {
                    return true;
                }
                else return false;          
        case 'g':
                if (current == 'j')
                {
                    return true;
                }
                else return false;  
        // c || k || q
        case 'c':
                if (current == 'k' || current == 'q')
                {
                    return true;
                }
                else return false;  
        case 'k':
                if (current == 'c' || current == 'q')
                {
                    return true;
                }
                else return false;                                   
        case 'q':
                if (current == 'c' || current == 'k')
                {
                    return true;
                }
                else return false; 
        // s || z
        case 's':
                if (current == 'z')
                {
                    return true;
                }
                else return false;          
        case 'z':
                if (current == 's')
                {
                    return true;
                }
                else return false;         
       
          // d || t
        case 'd':
                if (current == 't')
                {
                    return true;
                }
                else return false;          
        case 't':
                if (current == 'd')
                {
                    return true;
                }
                else return false;   
         // o || u
        case 'o':
                if (current == 'u')
                {
                    return true;
                }
                else return false;          
        case 'u':
                if (current == 'o')
                {
                    return true;
                }
                else return false;                 
        // i || y
        case 'i':
                if (current == 'y')
                {
                    return true;
                }
                else return false;          
        case 'y':
                if (current == 'i')
                {
                    return true;
                }
                else return false;  
        default:
          return false;
    }   
}









