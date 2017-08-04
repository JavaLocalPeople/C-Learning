Fraction& Fraction::operator= (const Fraction &fraction)
{
    // self-assignment guard
    if (this == &fraction)
        return *this;
 
    // do the copy
    m_numerator = fraction.m_numerator;
    m_denominator = fraction.m_denominator;
 
    // return the existing object so we can chain this operator
    return *this;
}
