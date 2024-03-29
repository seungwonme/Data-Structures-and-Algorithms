#!/bin/zsh

if [ $# -ne 1 ]; then
  echo "Usage: $0 <folder_name>"
  exit 1
fi

folder_name="$1"

# Create the directory
mkdir "$folder_name"

# Change to the directory
cd "$folder_name" || exit 1

# Create the cpp file
echo "#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define f(i, n) for (int i = 0; i < n; i++)

int\tmain(void)
{
\tios::sync_with_stdio(false), cin.tie(nullptr);

\t
\treturn 0;
}" > "$folder_name.cpp"

# Create the README file
today_date=$(date +'%Y-%m-%d')
echo "# [$folder_name](https://www.acmicpc.net/problem/$folder_name)
Created on: $today_date



## References

" > "README.md"

echo "Folder '$folder_name' has been created."
