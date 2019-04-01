// Bukan BruteForce :(


#include<bits/stdc++.h> 
using namespace std; 
  
#define N 8 
#define INF INT_MAX 
  
int shortestDist(int graph[N][N]) { 
    int dist[N]; 
    //disini akan dimulai dari stage paling akhir
    dist[N-1] = 0; 
    for (int i = N-2 ; i >= 0 ; i--) { 
        dist[i] = INF; 
        //akan bergerak dari node di stage tersebut ke node selanjutnya
        for (int j = i ; j < N ; j++){ 
            if (graph[i][j] == INF) 
                continue; 
  
            dist[i] = min(dist[i], graph[i][j] + dist[j]); 
        } 
    } 
    return dist[0]; 
} 
   
int main() 
{ 
      //MATRIKS KETETANGGAN DARI GRAF SOAL
    int graph[N][N] = 
      {{INF, 6, 14, 10, INF, INF, INF, INF}, 
       {INF, INF, 6, INF, 24, INF, INF, INF}, 
       {INF, 6, INF, 4, INF, 15, INF, INF}, 
       {INF, INF, 4, INF, INF, INF, 18, INF}, 
       {INF, INF, INF, INF, INF, 4, INF, 9}, 
       {INF, INF, INF, INF, 4, INF, 4, 9}, 
       {INF, INF, INF, INF, INF, 4, INF, 9}}; 
  
    cout << shortestDist(graph); 
    return 0; 
} 

//disaring dari beberapa sumber
