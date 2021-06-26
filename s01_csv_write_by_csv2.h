

#include <csv2/writer.hpp>
#include <vector>
#include <string>
using namespace csv2;

// ²Î¿¼£º https://github.com/p-ranav/csv2

void csv_write02() {
    std::ofstream stream("output/s01_foo.csv");
    Writer<delimiter<','>> writer(stream);

    std::vector<std::vector<std::string>> rows =
    {
        {"a", "b", "c"},
        {"1", "2", "3"},
        {"4", "5", "6"}
    };

    writer.write_rows(rows);
    stream.close();
}