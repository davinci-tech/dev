// #include <bits/stdc++.h>
// #include <stdint.h>


// using namespace std;

// std::ofstream fout("fib2.out");

// unsigned long long fib(unsigned long long x)
// {
//   if ((x == 1) || (x == 0))
//   {
//   return (x);
//   }
//   else
//   {
//   return (fib(x - 1) + fib(x - 2));
//   }
// }
// int main()
// {
//   auto begin = std::chrono::high_resolution_clock::now();

//   auto x = 94ull, i = 0ull;
//   while (i < x)
//   {
//   fout << fib(i) << '\n';
//   i++;
//   }

//   auto end = std::chrono::high_resolution_clock::now();
//   auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
//   printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

//   return 0;
// }

#include <bits/stdc++.h>

std::ofstream fout("fib.out");

int main()
{
  auto begin = std::chrono::high_resolution_clock::now();

  std::vector<unsigned long long int> test;
  for (unsigned long long int i = 0ULL; i < 100ULL; i++)
  test.push_back(i);

  for (std::size_t i = 2U; i < test.size(); i++)
  assert(test[i] = test[i - 1] + test[i - 2]);

  for (auto &&i : test)
  fout << i << '\n';

  auto end = std::chrono::high_resolution_clock::now();
  auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
  printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

  return 0;
}