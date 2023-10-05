#include "geomvector.hpp"

GeomVector GeomVector::operator/(double scalar) const
{
    if (scalar != 0.0)
	{
        return GeomVector(this->x_ / scalar, this->y_ / scalar, this->z_ / scalar);
    }
	else
	{
        return GeomVector(0.0, 0.0, 0.0);
    }
}


bool GeomVector::operator!=(const GeomVector& b) const
{
    return (this->x_ != b.x_ || this->y_ != b.y_ || this->z_ != b.z_);
}

bool GeomVector::operator==(const GeomVector& b) const
{
    return (this->x_ == b.x_ && this->y_ == b.y_ && this->z_ == b.z_);
}


bool GeomVector::operator>(const GeomVector& b) const
{
    return (this->Length() > b.Length());
}

bool GeomVector::operator<(const GeomVector& b) const
{
    return (this->Length() < b.Length());
}


GeomVector GeomVector::operator+(const GeomVector& a) {
    return GeomVector(a.x_ + x_, a.y_ + y_, a.z_ + z_);
}

GeomVector operator*(double a, const GeomVector& b) {
    return GeomVector(a * b.x_, a * b.y_, a * b.z_);
}

std::ostream &operator<<(std::ostream& out, const GeomVector& a) {
    out << "(" << a.x_ << ", " << a.y_ << ", " << a.z_ << ")";
    return out;
}

double GeomVector::Length() const {
    return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2));
}