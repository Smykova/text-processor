#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Функция 1: чтение строк из файла в вектор
std::vector<std::string> readLinesFromFile(const std::string& filename) {
    std::vector<std::string> lines;
    // TODO: реализовать чтение из файла
    return lines;
}

// Функция 2: вывод строк на экран
void printLines(const std::vector<std::string>& lines) {
    // TODO: реализовать вывод на экран
}

// Функция 3: запись строк в файл
void writeLinesToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // TODO: реализовать запись в файл
}

int main() {
    std::vector<std::string> lines = readLinesFromFile("input.txt");
    printLines(lines);
    writeLinesToFile(lines, "output.txt");
    return 0;
}
