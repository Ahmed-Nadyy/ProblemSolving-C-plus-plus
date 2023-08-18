/*

 ▄▄▄       ██░ ██  ███▄ ▄███▓▓█████ ▓█████▄     ███▄    █  ▄▄▄      ▓█████▄▓██   ██▓
▒████▄    ▓██░ ██▒▓██▒▀█▀ ██▒▓█   ▀ ▒██▀ ██▌    ██ ▀█   █ ▒████▄    ▒██▀ ██▌▒██  ██▒
▒██  ▀█▄  ▒██▀▀██░▓██    ▓██░▒███   ░██   █▌   ▓██  ▀█ ██▒▒██  ▀█▄  ░██   █▌ ▒██ ██░
░██▄▄▄▄██ ░▓█ ░██ ▒██    ▒██ ▒▓█  ▄ ░▓█▄   ▌   ▓██▒  ▐▌██▒░██▄▄▄▄██ ░▓█▄   ▌ ░ ▐██▓░
 ▓█   ▓██▒░▓█▒░██▓▒██▒   ░██▒░▒████▒░▒████▓    ▒██░   ▓██░ ▓█   ▓██▒░▒████▓  ░ ██▒▓░
 ▒▒   ▓▒█░ ▒ ░░▒░▒░ ▒░   ░  ░░░ ▒░ ░ ▒▒▓  ▒    ░ ▒░   ▒ ▒  ▒▒   ▓▒█░ ▒▒▓  ▒   ██▒▒▒
  ▒   ▒▒ ░ ▒ ░▒░ ░░  ░      ░ ░ ░  ░ ░ ▒  ▒    ░ ░░   ░ ▒░  ▒   ▒▒ ░ ░ ▒  ▒ ▓██ ░▒░
  ░   ▒    ░  ░░ ░░      ░      ░    ░ ░  ░       ░   ░ ░   ░   ▒    ░ ░  ░ ▒ ▒ ░░
      ░  ░ ░  ░  ░       ░      ░  ░   ░                ░       ░  ░   ░    ░ ░
                                     ░                               ░      ░ ░
*/
#include<bits/stdc++.h>
#include <omp.h>
#include <stdio.h>
using namespace std;
#define nady ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double

#define mp make_pair
#define pb push_back
#define pf push_front
#define eb emplace_back
#define fi first
#define se second
#define pii pair<int,int>
#define rep(i,a,b) for(int i=(a);i<(b);++i)
#define per(i,a,b) for(int i=(a-1);i>=(b);--i)
int main()
{
	long long x, y, z;
	cin >> x >> y >> z;
	if (x >= y && x >= z && y >= z) {
		cout << z << "\n" << y << "\n" << x << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
	else if (x >= y && x >= z && z >= y) {
		cout << y << "\n" << z << "\n" << x << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
	else if (y >= x && y >= z && x >= z) {
		cout << z << "\n" << x << "\n" << y << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
	else if (y >= x && y >= z && z >= x) {
		cout << x << "\n" << z << "\n" << y << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
	else if (z >= y && z >= x && y >= x) {
		cout << x << "\n" << y << "\n" << z << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
	else if (z >= y && z >= x && x >= y) {
		cout << y << "\n" << x << "\n" << z << "\n" << "\n" << x << "\n" << y << "\n" << z;
	}
}



















