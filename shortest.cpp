
#include<bits/stdc++.h> 
using namespace std; 
  
#define N 8 
#define INF INT_MAX 
  
//mengembalikan jarak terpendek dari node 0 sampai N-1. 
int shortestDist(int graph[N][N]) { 
  
    // dist[i] AKAN MENYIMPAN NILAI TERPENDEK JARAK DARI NODE I KE NODE N-1 
    int dist[N]; 
  
    dist[N-1] = 0; 
  
    // menghitung rute terpendek dari sisa node yang lain
    for (int i = N-2 ; i >= 0 ; i--) 
    { 
        // isi jarak dari i ke destinasi (N-1) 
        dist[i] = INF; 
  
        // menyiapkan semua node dari tingkat selanjutnya untuk menemukan jarak terpendek dari i ke N-1. 
        for (int j = i ; j < N ; j++) 
        { 
            // tolak jika tidak ada sisi tersisa
            if (graph[i][j] == INF) 
                continue; 
  
            // kita pake rekursif buat cari jarak ke target melalui j.
            // dan membandingkan dengan jarak minimal sampai saat ini. 
            dist[i] = min(dist[i], graph[i][j] + dist[j]); 
        } 
    } 
    return dist[0]; 
} 
   
int main() 
{ 
    // graph kita buat dalam matriks ketetanggaan sesuai soal 
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
