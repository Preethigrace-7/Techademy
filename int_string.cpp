#include <iostream>
#include <string>

using namespace std;

int main() {
int* numbers = nullptr;
string* names = nullptr;

int numCount, nameCount;

cout << "Enter the number of integers: ";
cin >> numCount;

numbers = new int[numCount];

if (!numbers) {
cout << "Memory not allocated for numbers\n";
} 
else {
cout << "Enter " << numCount << " integers:\n";
for (int i = 0; i < numCount; i++) {
cin >> numbers[i];
}

cout << "Stored integers are:\n";
for (int i = 0; i < numCount; i++) {
cout << numbers[i] << " ";
}
cout << endl;
}

cout << "Enter the number of names: ";
cin >> nameCount;

names = new string[nameCount];

if (!names) {
cout << "Memory not allocated for names\n";
} 
else {
cout << "Enter " << nameCount << " names:\n";
for (int i = 0; i < nameCount; i++) {
getline(cin, names[i]);
}
cout << "Stored names are:\n";
for (int i = 0; i < nameCount; i++) {
cout << names[i];
}
}
return 0;
}
