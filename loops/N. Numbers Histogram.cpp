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
	nady
	int n;
	char x; 
	int y;
	cin >> x >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y;
		for (int j = 1; j <= y; j++) {
			cout << x ;
		}
		cout << endl;
	}
}



















