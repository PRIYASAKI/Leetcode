int divide(int dividend, int divisor) {
    int c;

    if(dividend==INT_MIN && divisor==-1)
         return INT_MAX;
    c = dividend / divisor;
    return round(c);
}
