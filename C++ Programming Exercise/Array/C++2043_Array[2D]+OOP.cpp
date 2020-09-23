/*
    Author : Arnob Mahmud

    Mail : arnob.tech.me @ gmail.com
*/

#include <iostream>
#include <string>

using namespace std;

class Matrix{
public :
    string name;

    void addition() {
      std::cout << " Addition of two Matrix " << '\n' << '\n';
    }

    void substraction() {
      std::cout << " Substraction of two matrix " << '\n';
    }

    void multiplication() {
      std::cout << " Multiplication of two matrix " << '\n';
    }

    void determinant() {
      std::cout << " Determinant of both matrix " << '\n';
    }

    void transpose() {
      std::cout << " Transpose of both matrix " << '\n';
    }
};

int main(int argc, char const *argv[]) {

  Matrix matrix;
  matrix.name = "2D-Matrix";

int matA[3][3];
int matB[3][3];
int matTA[3][3];
int matTB[3][3];

  std::cout << "Enter the elements of 'A' matrix :" << '\n';
  std::cout << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t";
        std::cin >> matA[i][j];
      }
    std::cout << '\n';
    }

  std::cout << '\n';
  std::cout << "Enter the elements of 'B' matrix :" << '\n';
  std::cout << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t";
        std::cin >> matB[i][j];
      }
      std::cout << '\n';
    }

    std::cout << '\n';
    std::cout << "[A] :" <<'\n';
    std::cout << '\n';

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          std::cout << " " << "\t" << matA[i][j];
        }
      std::cout << '\n';
      }

    std::cout << "[B] :" << '\n';
    std::cout << '\n';

      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          std::cout << " " << "\t" << matB[i][j];
        }
        std::cout << '\n';
      }

    std::cout << '\n';
    matrix.addition();
    std::cout << '\n';

    std::cout << "[C] = [A] + [B] :" << '\n';
    std::cout << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t" << matA[i][j] + matB[i][j];
      }
      std::cout << '\n';
    }

    std::cout << '\n';
    matrix.substraction();
    std::cout << '\n';

    std::cout << "[C] = [A] - [B] :" << '\n';
    std::cout << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t" << matA[i][j] - matB[i][j];
      }
      std::cout << '\n';
    }

    std::cout << '\n';
    matrix.multiplication();
    std::cout << '\n';

    std::cout << "[C] = [A] * [B] :" << '\n';
    std::cout << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t" << matA[i][j] * matB[i][j];
      }
      std::cout << '\n';
    }

    std::cout << '\n';
    matrix.determinant();
    std::cout << '\n';

    std::cout << " " << "The Determinant of 'A' matrix :" <<
    matA[0][0]*(matA[1][1]*matA[2][2]-matA[2][1]*matA[1][2])-
    matA[0][1]*(matA[1][0]*matA[2][2]-matA[2][0]*matA[1][2])+
    matA[0][2]*(matA[1][0]*matA[2][1]-matA[2][0]*matA[1][1]) << '\n';

    std::cout << " " << "The Determinant of 'B' matrix :" <<
    matB[0][0]*(matB[1][1]*matB[2][2]-matB[1][2]*matB[2][1])-
    matB[0][1]*(matB[1][0]*matB[2][2]-matB[2][0]*matB[1][2])+
    matB[0][2]*(matB[1][0]*matB[2][1]-matB[2][0]*matB[1][1]) << '\n';

    std::cout << " Trace of 'A' matrix :" <<
    matA[0][0]*matA[1][1]*matA[2][2] << '\n';
    std::cout << " Trace of 'B' matrix :" <<
    matB[0][0]*matB[1][1]*matB[2][2] << '\n';

    std::cout << '\n';
    matrix.transpose();
    std::cout << '\n';

    std::cout << " " << "The transpose of 'A' matrix :" << '\n' << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        matTA[j][i] = matA[i][j];
      }
      std::cout << '\n';
    }

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t" << matTA[i][j];
      }
      std::cout << '\n';
    }

    std::cout << " " << "The transpose of 'B' matrix :" << '\n' << '\n';

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
         matTB[j][i] = matB[i][j];
      }
      std::cout << '\n';
    }

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        std::cout << " " << "\t" << matTB[i][j];
      }
      std::cout << '\n';
    }

  return 0;

}
