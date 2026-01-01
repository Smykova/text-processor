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
    // Îòëàäî÷íûé âûâîä
    std::cout << "[DEBUG] Lines read: " << lines.size() << std::endl;
    for (const auto& line : lines) {
        std::cout << "[DEBUG] " << line << std::endl;
    }
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
    // Âðåìåííûé òåñòîâûé êîä (ïîòîì óäàëèøü!)
    std::vector<std::string> lines = {"Test line 1", "Test line 2", "Test line 3"};
    printLines(lines);
    writeLinesToFile(lines, "output.txt");
    return 0;
}
