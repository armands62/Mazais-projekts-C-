/* Matricas izveidošana
#include <iostream>

int main() {
  int Masivs[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cin >> Masivs[i][j];
    }
  }

  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << Masivs[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

#include <iostream>

int main() {
  // Pirmās matricas ievade
  int MasivsA[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cin >> MasivsA[i][j];
    }
  }
  // Otrās matricas ievade
  int MasivsB[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cin >> MasivsB[i][j];
    }
  }

  int MasivsAB[3][3];

  // Matricu reizināšana
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3 ; j++)
    {
      MasivsAB[i][j] = 0;
      for(int a = 0; a < 3; a++)
      {
        MasivsAB[i][j] += MasivsA[i][a] * MasivsB[a][j];
      }
    }
  }

  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << MasivsAB[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
} 
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>

void matricu_saskaitisana(){
  // Pirmās matricas ievade
  int MasivsA[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
        MasivsA[i][j] = rand() % 100;
    }
  }
  // Otrās matricas ievade
  int MasivsB[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsB[i][j] = rand() % 100;
    }
  }

  // Izvade
  for( int i = 0; i < 3; i++){
    for( int j = 0; j < 3; j++){
        std::cout << MasivsA[i][j] << "\t";
    }
    std::cout << "\t";
    for( int j = 0; j < 3; j++){
      std::cout << MasivsB[i][j] << "\t";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  // Matricu saskaitīšana
  int MasivsAB[3][3], Lietotajs[3][3];
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      MasivsAB[i][j] = MasivsA[i][j] + MasivsB[i][j];
    }
  }
  std::cout << "Ievadiet matricu summu!";
  std::cout << std::endl;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      std::cout << "Ievadiet [" << i << "]" << "[" << j << "] skaitļu summu: ";
      std::cin >> Lietotajs[i][j];
      std::cout << std::endl;
    }
  }
  // Salīdzināšana
  int pareizs;
  for(int i = 0; i < 3 ; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      if (MasivsAB [i][j] == Lietotajs[i][j])
      {
        pareizs += 1;
      }
    }
  }
  if (pareizs == 9)
  {
    std::cout << "Pareizi!";
  }
  else
  {
    std::cout << "Nepareizi! Mēģiniet vēlreiz";
  }
};

int main(){
    srand(time(0));

    matricu_saskaitisana();
};