#pragma once



namespace university{
    using ushort = unsigned short;


class Date {
    public:
        Date(ushort day, ushort month, ushort year);
        void print_date() const;
    private:
        ushort day_;
        ushort month_;
        ushort year_;

        bool is_valid_date(ushort day, ushort month, ushort year) const;
        int get_days_in_month(ushort month, ushort year) const;
        static bool is_leap_year(ushort year);
}; // class Date
} // university namespace