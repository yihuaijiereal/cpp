/**
 * class
 */
#include <iostream>
#include <string>

class Sales_item {
/* 运算符重载 */
friend std::istream& operator>>(std::istream&, Sales_item&);
friend std::ostream& operator<<(std::ostream&, const Sales_item&);
friend bool operator<(const Sales_item&, const Sales_item&);
friend bool operator==(const Sales_item&, const Sales_item&);

public:
    /* 构造函数 */
    Sales_item() = default;
    Sales_item(const std::string &book) : bookNo(book) { }
    Sales_item(std::istream &is) { is >> *this; }

public:
    Sales_item& operator+=(const Sales_item&);
    std::string isbn() const { return bookNo; }
    double avg_price() const;

private:
    std::string bookNo; /* 隐式初始化 */
    unsigned units_sold = 0; /* 显式初始化 */
    double revenue = 0.0;
};

inline bool operator==(const Sales_item& lhs, const Sales_item& rhs)
{
    return lhs.units_sold == rhs.units_sold &&
            lhs.revenue == rhs.revenue &&
            lhs.isbn() == rhs.isbn();
}

inline bool operator!=(const Sales_item& lhs, const Sales_item& rhs)
{
    return !(rhs == lhs);
}

Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs)
{
    Sales_item ret(lhs);

    ret += rhs;

    return ret;
}

std::istream& operator>>(std::istream& in, Sales_item& s)
{
    double price;

    in >> s.bookNo >> s.units_sold >> price;

    if (in) {
        s.revenue = s.units_sold * price;
    } else {
        s = Sales_item();
    }

    return in;
}

std::ostream& operator<<(std::ostream& out, const Sales_item& s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();

    return out;
}

double Sales_item::avg_price() const
{
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

int main(int argc, char *argv[])
{
    Sales_item book, item1, item2;

    std::cin >> book;
    std::cout << book << std::endl;

    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;

    return 0;
}
