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
int cw_big = 0;
int cw_small = 0;
for(int i=0; i<(mainText.length()); i++) {
    if (mainText[i]>64 && mainText[i]<91) {
       cw_big++;
    }
else if (mainText[i]>96 && mainText[i]<123) {
    cw_small++;
}
}
int cw=cw_big+cw_small;
return cw;
}

int TextAnalyzer::countSymbols()
{
return mainText.length();
}

int TextAnalyzer::countWords()
{
int cw = 0;
bool word = false;
for(int i=0; i<(mainText.length()); i++) {
    if (mainText[i]>64 && mainText[i]<91 || mainText[i]>96 && mainText[i]<123) {
    word = true;
    }
    else {
        if (word == true) {
            cw++;
        }
        word = false;
    }
}
if (word == true) {
    cw++;
}
return cw;
}

int TextAnalyzer::countSentences()
{
int cs = 0;
for(int i=0; i<(mainText.length()); i++) {
    if (mainText[i]==33 || mainText[i]==46 || mainText[i]==63) {
       cs++;
    }
}
return cs;
}

string TextAnalyzer::replaceWord(string selectedWord, string newWord)
{
return this->mainText;
}
