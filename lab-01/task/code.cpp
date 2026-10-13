#include <iostream>
#include <string>

int main() {
    double weights[4] = { 0.40, 0.20, 0.30, 0.10 };

    std::string names[3] = { "A", "B", "C" };

    double scores[3][4] = 
    {
        {9, 8, 6, 7},
        {5, 6, 9, 9},
        {7, 10, 8, 8}
    };

    double best_score = 0;
    std::string best_choice = "";

    for (int i = 0; i < 3; i++) 
    {
        double total = 0;

        for (int j = 0; j < 4; j++) 
        {
            total += scores[i][j] * weights[j];
        }

        std::cout << "Alternative " << names[i] << ": " << total << std::endl;

        if (total > best_score) 
        {
            best_score = total;
            best_choice = names[i];
        }
    }

    std::cout << "\nBest choice: " << best_choice << " (" << best_score << ")" << std::endl;

    return 0;
}
