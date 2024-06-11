#include <stdio.h>

int main(void) {
  #include<stdio.h>
  /*
  int main(){
      int i;
      int sum = 0;
      for(i = 1; i <= 100; i++)
          if (i % 3 == 0)
          printf("%d ", i);
      sum =+ i;
      printf("%d ", sum);
  }
  */

  // 3번



  int main() {

    int k;
    scanf("%d", &k);

      int k1 = (k / 1000);
      int k2 = (k / 100) % 10;
      int k3 = (k / 10) % 10;
      int k4 = (k % 10);

      while (k == -1)
      break;
      printf("입력 k = %d\n", k);
      printf("합:%d", k1 + k2 + k3 + k4);
      }



  // 2번
  /*
  int main() {
    int k;
    scanf("%d", &k);

    if (k >= 95)
      printf("A");
    else if (k >= 90)
      printf("B");
    else if (k >= 85)
      printf("c");
    else
      printf("F");
  }

  */
  /*
  int main(){
      int i;
      for ( i = 1; i <= 100; i++)
          printf("%d", i);
  }
  */
  return 0;
}