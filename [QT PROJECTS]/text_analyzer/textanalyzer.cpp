#include "textanalyzer.h"

TextAnalyzer::TextAnalyzer()
{

}

void TextAnalyzer::setText(string text)
{
this->mainText = text;
}

int TextAnalyzer::countLetters()
{
string lettersOnly = mainText;
lettersOnly = lettersOnly - ","," ", "1234567890", "`";
}

int TextAnalyzer::countSymbols()
{
return mainText.length();
}

int TextAnalyzer::countWords()
{
return 100;
}

int TextAnalyzer::countSentences()
{
return 100;
}

string TextAnalyzer::replaceWord(string selectedWord, string newWord)
{
return this->mainText;
}
