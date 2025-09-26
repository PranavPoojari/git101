#include <iostream>
using namespace std;

int col(int x, int n){

      for(int i =1; i <= n; i++){
         
          if(x == (i*i+3*i)/2) return 0; 
          if(x > (i*i - 1)/2 && x <= (i*i + 3*i -2)/2) return i; 
      }

}

int colx(int x, int n){

    if(col(x, n) == 0)return 0;  
    return x - (col(x,n)*col(x,n)+col(x,n)-2)/2;

}

int main(){
       
      int n;
      cin >> n;
      int x = 1;
      int y = n;

      for(int i = 0; i<n; i++){

            for(int j=0; j< (n*n + 3*n -2)/2; j++){
  
                  if(colx(x, n) == 0) cout << " ";
                  if( y > col(x, n)) cout << " ";
                  else if( y <= col(x, n)){
                         
                       if(y > colx(x, n)) cout << "x";
                        else{cout << "o";} 

                  }                  

                  x++;

            }
         cout << endl;
         y--;
         x = 1;
      }

}