#include <string>
#include <utility>
#include <iostream>
#include <string>

using namespace std;

// Ecrivez ici la fonction remplacer_occurences
  string remplacer_occurences(string texte, string_view mot, string_view alt) {
      if (mot.empty())
          return texte;

      size_t pos = 0;
      while (true) {
          pos = texte.find(mot, pos);
          if (pos == string::npos) {
              break;
          }
          texte.replace(pos, mot.size(), alt);
          pos += alt.size();
      }
      return texte;
  }

int main() {
    string texte{"Les sanglots longs de violons de l'automne "
                 "bercent mon coeur d'une langueur monotone"};
    cout << texte << endl;
    for (auto p: {pair<string, string>{"on", "ON"},
                  {"on", "o"},
                  {"on", "oin"},
                  {"o", "ooo"}}) {
        cout << remplacer_occurences(texte, p.first, p.second) << endl;
                  }
}