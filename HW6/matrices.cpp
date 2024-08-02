
#include <iostream>
#include <array>

using namespace std;



template<typename T, unsigned int N, unsigned int M>
class Matrix {
public:
  array<array<T, M>, N> i;
  
  template<unsigned int K>
    Matrix<T, N, K> operator*(const Matrix<T, M, K>& m2) {
    Matrix<T, N, K> ret;
    for (unsigned int n = 0; n != N; n++) {
      for (unsigned int k = 0; k != K; k++) {
        ret.i[n][k] = 0;
        for (unsigned int m = 0; m != M; m++) {
          ret.i[n][k] += i[n][m] * m2.i[m][k];
        }
      }
    }
    return ret;
  }
  
  
  Matrix<T, N, M> operator-(const Matrix<T, N, M>& m2) {
    Matrix<T, N, M> ret;
    for (unsigned int n = 0; n != N; n++) {
      for (unsigned int m = 0; m != M; m++) {
        ret.i[n][m] = i[n][m] - m2.i[n][m];
      }
    }
    return ret;
  }
  
  Matrix<T, N, M> operator+(const Matrix<T, N, M>& m2) {
    Matrix<T, N, M> ret;
    for (unsigned int n = 0; n != N; n++) {
      for (unsigned int m = 0; m != M; m++) {
        ret.i[n][m] = i[n][m] + m2.i[n][m];
      }
    }
    return ret;
  }
  
  T &operator()(unsigned int a, unsigned int b) {
    return i[a][b];
  }

  template<typename TYPE, unsigned int R, unsigned int C>
  friend ostream& operator<<(ostream& os, const Matrix<TYPE,R,C>& mat);
};

template<typename T, unsigned int N, unsigned int M>
ostream & operator<<(ostream& os, const Matrix<T,N,M>& mat){
  for (unsigned int n = 0; n != N; n++) {
    for (unsigned int k = 0; k != M; k++) {
	  os << mat.i[n][k]<<" ";
    }
  }  
  return os;
}

template<typename T, unsigned int M>
using rowVec=Matrix<T, 1, M>;

template<typename T, unsigned int M>
using colVec=Matrix<T, M, 1>;

int main() {
  Matrix<float, 4, 6> m1; 
  Matrix<float, 6, 10> m2;
  
  Matrix<float, 4, 10> m3 = (m1 * m2);
  cout << m3;
  
  return 0;
}


