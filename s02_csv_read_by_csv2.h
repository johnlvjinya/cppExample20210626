#include <csv2/reader.hpp>

//https://github.com/p-ranav/csv2

int main_read() {
    csv2::Reader<delimiter<','>,
        quote_character<'"'>,
        first_row_is_header<true>,
        trim_policy::trim_whitespace> csv;

    if (csv.mmap("output/s01_foo.csv")) {
        const auto header = csv.header();
        for (const auto row : csv) {
            for (const auto cell : row) {
                // Do something with cell value
                 std::string value;
                 cell.read_value(value);
                cout << "hellow"<<endl;
            }
        }
    }

    return 0;
}