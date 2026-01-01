#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    std::ifstream file(filename);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            lines.push_back(line);
        }
        file.close();
    } else {
        std::cerr << "Error: cannot open file " << filename << std::endl;
    }
    // Отладочный вывод
    std::cout << "[DEBUG] Lines read: " << lines.size() << std::endl;
    for (const auto& line : lines) {
        std::cout << "[DEBUG] " << line << std::endl;
    }
    return lines;
}

void printLines(const std::vector<std::string>& lines) {
    // TODO
}

void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // TODO
}

int main() {
    std::vector<std::string> lines = readLinesFromFile("input.txt");
    printLines(lines);
    writeLinesToFile(lines, "output.txt");
    return 0;
}
