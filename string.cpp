#include <bits/stdc++.h>
using namespace std;

/*4. Capital letters to small letters.
Input:MkBND
output: mkbnd
 */
int main()
{
  string s;
  cout << "Enter capital letters: ";
  cin >> s;

  for (int i = 0; i < s.size(); i++)
  {
    s[i] = s[i] + 32; // s[i] = a, -> 65+32 = 97, -> a;
  }
  cout << "Output Small letters: ";
  cout << s;

  return 0;
} // end

/*
5.Palindrome
Input: aabbaa
Output: Yes
Input: abcd
Output:No
 */
int main()
{
  string s;
  cin >> s;

  int sz = s.size() - 1; // size = 6-1 ---> sz = 5;
  bool flag = true;
  for (int i = 0; i <= sz; i++)
  {
    if (s[i] != s[sz]) // if(a != b)
    {
      flag = false; // flag = false;
      break;        // and loop break
    }
    sz--; // decrement
  }

  if (flag == true)
    cout << "Palindrome";
  else
    cout << "NO";
  return 0;
} // end

// find prime number using array.
int n;               // Global variable
void prime(int ar[]) // got array
{
  for (int i = 0; i < n; i++)
  {
    bool flag = true;
    if (ar[i] == 0)
      flag = false;
    if (ar[i] == 1)
      flag = true;

    for (int j = 2; j < ar[i]; j++)
    {
      if (ar[i] % j == 0) // 8 % 2 == 0 this number not prime
      {
        flag = false;
        break;
      }
    }
    if (flag == true)
      cout << ar[i] << " ";
  }
}

int main()
{

  cin >> n;
  int ar[n];
  for (int i = 0; i < n; i++)
    cin >> ar[i];

  prime(ar); // function call

  return 0;
}
