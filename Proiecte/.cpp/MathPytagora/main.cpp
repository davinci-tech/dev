#include <iostream>
#include <utility>

std::pair<int, int> DescompuneNumar(size_t numar, bool isNegative = false) {
  std::pair<int, int> result = {1, 1};
  for (int i = 2; numar > 0; i++) {
    if (numar % i == 0) {
      int cnt = 0;
      while(numar % i == 0) {
        numar /= i;
        cnt++;
      }
      if (cnt % 2 == 0) {
        result.first *= (cnt / 2) * i;
        cnt = 0;
      } else {
        result.first *= (cnt / 2) * i;
        cnt = 1;
      }
      result.second *= cnt;
    }
  }
  return result;
}

int main() {
  auto num = DescompuneNumar(36);
  std::cout << num.first << " " << num.second << "\n";
}
