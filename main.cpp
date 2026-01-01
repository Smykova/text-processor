#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    // TODO: позже будет реализовано
    return lines;
}

void printLines(const std::vector<std::string>& lines) {
    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }
}

void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& line : lines) {
            file << line << std::endl;
        }
        file.close();
    } else {
        std::cerr << "Error: cannot open file for writing " << filename << std::endl;
    }
}

int main() {
    // Временный тестовый код (потом удалишь!)
    std::vector<std::string> lines = {"Test line 1", "Test line 2", "Test line 3"};
    printLines(lines);
    writeLinesToFile(lines, "output.txt");
    return 0;
}
