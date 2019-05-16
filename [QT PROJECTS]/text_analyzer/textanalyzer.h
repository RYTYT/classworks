#ifndef TEXTANALYZER_H
#define TEXTANALYZER_H
#include<string>
using namespace std;

class TextAnalyzer
{
    string mainText;
public:
    TextAnalyzer();
    void setText(string text);
    int countLetters();
    int countSymbols();
    int countWords();
    int countSentences();
    string replaceWord(string selectedWord, string newWord);
};

#endif // TEXTANALYZER_H
