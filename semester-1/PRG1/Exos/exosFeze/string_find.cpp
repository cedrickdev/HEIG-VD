#include <iostream>
#include <string>

using namespace std;

int main() {

         // 0123456789*123456789*123456789*123456789*123456789*1
string s("There are two needles in this haystack with needles.");
string s2("needle");
size_t needle1 = s.find(s2);                                 // affiche 14 car la premiere lettre du mot "needle" se trouve a la position 14
size_t needle2 = s.find(s2, needle1 + 1);                // affiche 44 car la postion needle1 est a la position 14, et on cherche de nouveau a partir de la position suivante
size_t haystack = s.find("haystack");                     // affiche 19 car la position de la premiere occurence du mot "haystack" se trouve a la position 19
needle1 = s.find("needles are small", 0, 6);        // affiche 14 car la position de la premiere lettre du mot "needles" se trouve a la position 14
needle2 = s.find("needles are small", needle1 + 1, 6); // affiche 44 car la position de la premiere lettre du mot "needles" se trouve a la position 44
size_t point = s.find('.');                                 // affiche 51 car la position de la premiere occurence du char '.' se trouve a la position 51
s.replace(s.find(s2), s2.length(), "preposition");
cout << s << endl;                                              // affiche "There are two prepositions in this haystack with prepositions."

    return EXIT_SUCCESS;
}
