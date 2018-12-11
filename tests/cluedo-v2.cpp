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
    if(!moustache){
      cout << "Votre personnage porte-t-il un chapeau ?" << endl;
      cin >> chapeau;
      if (chapeau){
        cout << "Le personnage auquel vous pensez est Mr Violet" << endl;
      }else{
        cout << "Le personnage auquel vous pensez est Mr Olive" << endl;
      }
    }else{
      cout << "Le personnage auquel vous pensez est Mr Moutarde" << endl;
    }
  }
  else{
    cout << "Votre personnage porte-t-il des lunettes ? " << endl;
    cin >> lunettes;
    if(lunettes){
      cout << "Le personnage auquel vous pensez est Mme LeBlanc" << endl;
    }else{
      cout << "Le personnage auquel vous pensez est Mme Rose" << endl;
    }
  }
cout << endl;
cout << "Merci de votre participation !";
  return 0;
}
