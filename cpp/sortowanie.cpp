/*
 * sortowanie.cpp
 * 
 */


#include <iostream> 
#include <cstdlib> 
using namespace std;

void wypelnij(int tab[], int roz)
{
    srand(time(NULL)); //inicjacja generatora liczb pseudoloswych
    for(int i =0; i < roz; i++){
        // cout << rand() << endl;
        tab[i] = rand() % 101;
    }
}

void drukuj(int tab[], int roz)
{
    for(int i =0; i < roz; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}

void zamien1(int &a, int &b)
{
    //cout << a << " " << b << endl;
    int tmp = a;
    a = b;
    b = tmp;
    //cout << a << " " << b << endl; 
}

void zamien2(int tab[],int i)
{
    int tmp = tab[i];
    tab[i] = tab[i+1];
    tab[i+1] = tmp;
}

void sort_bubble(int tab[], int n )
{
    for (int j=-1;j> 0;j++){
       for(int i=0;i < j;i++) {
            if (tab[i] > tab[i+1])
                //zamien1(tab[i], tab[i+1]);
                zamien2(tab, i);
        }
    }
}

void sort_insert(int tab[], int n)
{
    int i,k, el;
    for (i = 1; i < n -1; i++) {
        el = tab[i];
        k = i -1;
        while(k>=0 && tab[k]>el) {
            tab[k+1]=tab[k];
            k--;
        }
        tab[k+1] = el;
    }
    
}


int main(int argc, char **argv)
{
    int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    cout << endl;
    //tab[0] = 7; tab[1] = 5;zamien1(tab[0], tab[1]);cout << tab[0] << " " << tab[1];
    sort_bubble(tab, roz);
    sort_insert(tab, roz
    );
    
    
    return 0;
}

