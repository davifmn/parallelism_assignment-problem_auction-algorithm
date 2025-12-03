#include <iostream>

// declarações das funções de bench
int run_baseline();
int run_prll1();
int run_prll2();
int run_prll3(int n = 5000, int num_threads = -1);
int run_prll4(int n = 5000, int num_threads = -1);

// versões otimizadas
int run_prll1_opt();
int run_prll3_opt();

using namespace std;

int main(int argc, char** argv) {
    int n = 5000;
    int threads = -1;

    if (argc >= 2) n = atoi(argv[1]);
    if (argc >= 3) threads = atoi(argv[2]);

    cout << "\n=== PRLL1 OPT (spinlock / OMP) ===\n";
    run_prll1_opt();
    //cout << "=== BASELINE ===\n";
    //run_baseline();
   /* 
    cout << "\n=== PRLL1 (mutex por tarefa) ===\n";
    run_prll1();

    cout << "\n=== PRLL1 OPT (spinlock / OMP) ===\n";
    run_prll1_opt()
    */
   // cout << "\n=== PRLL2 (mutex por tarefa) ===\n";
    //run_prll2();

    /*cout << "\n=== PRLL3 OPT (lazy batched) ===\n";
    run_prll3_opt();

    cout << "\n=== PRLL4 (search-parallel) ===\n";
    run_prll4(n, threads);

    cout << "\n=== PRLL4 IMPROVED (search-parallel improved) ===\n";
    run_prll4_improved(n, threads);
    */
    return 0;
}