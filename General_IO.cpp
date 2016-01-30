#include <iostream>
#include <list>
using namespace std;

//Standard Input templates
template <class T>
void StdIn(T &a){
	cin >> a;
}
template<class T, class... Rest>
void StdIn(T &a, Rest&... rest)
{
	StdIn(a);
	StdIn(rest...);
}

//pushback
template <class T, typename t>
void StdPB(T &a, t b)
{
	t c; StdIn(c);
	a.push_back(c);
}
template<class T>
void StdPBs(T &a)
{
	StdPB(a, *a.begin());
}
template<class T, class... Rest>
void StdPBs(T &a, Rest&... rest)
{
	StdPB(a, *a.begin());
	StdPBs(rest...);
}
template<class... Rest>
void StdPushback(int N, Rest&... rest)
{
	for(int i=0;i<N;i++){
		StdPBs(rest...);
	}
}

//Output templates
template <class T>
void StdOut_endl(T &a){
	cout << a << endl;
}
template <class T>
void StdOut_space(T &a){
	cout << a << " ";
}
template <class T>
void StdOut_line(T &a){
	StdOut_endl(a);
}

template <class T, class... Rest>
void StdOut_line(T &a, Rest&... rest)
{
	StdOut_space(a);
	StdOut_line(rest...);
}
template <class T>
void StdOut_each(T &a)
{
	for(auto el : a){
		StdOut_space(el);
	}
	StdOut_endl("");
}

int main()
{
	int v;
	StdIn(v);
	list<int> l,m,n;
	StdPushback(v,l,m,n);
	StdOut_each(l);
	StdOut_each(m);
	StdOut_each(n);
}