#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  bool moustache(0), lunettes(0), chapeau(0), homme(0);

  cout << "Votre personnage est-il un homme (1 : oui, 0 : non) ? "
       << endl;
  cin >> homme;
  if (homme){
    cout << "Votre personnage a-t-il des moustaches ? " << endl;
    cin >> moustache;
    cout << "Votre personnage porte-t-il un chapeau ?" << endl;
    cin >> chapeau;

  }else{
    cout << "Votre personnage porte-t-il des lunettes ? " << endl;
    cin >> lunettes;
  }
bool rose(!lunettes && !homme);
bool violet(!moustache && chapeau && homme);
bool moutarde(moustache && !chapeau && homme);
bool olive(!moustache && !chapeau && homme);
bool leblanc(lunettes && !homme);

if (rose){
  cout << "Le personnage auquel vous pensez est Mme Rose";
} else if(violet){
  cout << "Le personnage auquel vous pensez est Mr Violet";
}else if(moutarde){
  cout << "Le personnage auquel vous pensez est Mr Moutarde";
}else if(olive){
  cout << "Le personnage auquel vous pensez est Mr Olive";
}else if(leblanc){
  cout << "Le personnage auquel vous pensez est Mme LeBlanc";
}else{
  cout << "Le personnage auquel vous pensez n'existe pas ! ";
}

cout << endl;
cout << "Merci de votre participation !";
  return 0;
}
