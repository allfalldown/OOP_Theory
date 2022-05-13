#include <iostream>
#include <map>

using namespace std;

class Polynomial{
    private:
        map<int,double> poly;
    public:
        Polynomial(){}
        int degree() const{ 
            return poly.empty() ? 0 : poly.rbegin()->first; 
        }
        void set(int degree, double coef){ 
            poly[degree] = coef; 
        }
        double get(int degree) const{ 
            auto it = poly.find(degree); 
            return it == end(poly) ? 0 : it->second; 
        }
        Polynomial& operator+=(const Polynomial& rhs);
        Polynomial& operator-=(const Polynomial& rhs);
        Polynomial& operator*=(const Polynomial& rhs);
        Polynomial& operator/=(const Polynomial& rhs);
        Polynomial& operator%=(const Polynomial& rhs);
        Polynomial operator+(const Polynomial& rhs)const{ 
            auto ret = *this; 
            return ret += rhs; 
        }
        Polynomial operator-(const Polynomial& rhs)const{ 
            auto ret = *this; 
            return ret -= rhs;
        }
        Polynomial operator*(const Polynomial& rhs)const {
            auto ret = *this; 
            return ret *= rhs; 
        }
        Polynomial operator/(const Polynomial& rhs)const { 
            auto ret = *this; 
            return ret /= rhs;
        }
        Polynomial operator%(const Polynomial& rhs)const { 
            auto ret = *this; 
            return ret %= rhs; 
        }
        double operator[](Polynomial& rhs) {
            int i; cin >> i;
            return poly[i];
        }

        pair<Polynomial,Polynomial> div(Polynomial lhs, const Polynomial& rhs);

        friend Polynomial operator++(Polynomial& rhs){
            auto kv = rhs.poly.begin();
            ++(kv->second);
            while (++kv != end(rhs.poly)) ++(kv->second);
            return rhs;
        }
        
        friend Polynomial operator--(Polynomial& rhs){
            auto kv = rhs.poly.begin();
            --(kv->second);
            while (++kv != end(rhs.poly)) --(kv->second);
            return rhs;
        }

        friend istream& operator>>(istream& in, Polynomial& rhs){
            cout << "Degree: "; int degree; cin >> degree;
            cout << "Coefficient: "; int coef; cin >> coef;
            rhs.set(degree, coef);
            return in;
        };

        friend ostream& operator<<(ostream& out, const Polynomial& rhs){
            if (!rhs.degree()) return out << 0;
            auto kv = rhs.poly.begin();
            out << kv->second << "*x^" << kv->first;
            while (++kv != end(rhs.poly)) out << " + " << kv->second << "*x^" << kv->first;
            return out;
        }
};

Polynomial& Polynomial::operator+=(const Polynomial& rhs){
    for (auto const& kv : rhs.poly) poly[kv.first] += kv.second;
    return *this;
}

Polynomial& Polynomial::operator-=(const Polynomial& rhs){
    for (auto const& kv : rhs.poly) poly[kv.first] -= kv.second;
    return *this;
}

Polynomial& Polynomial::operator*=(const Polynomial& rhs){
    decltype(poly) p;
    for (auto const& kv1 : poly) for (auto const& kv2 : rhs.poly)
        p[kv1.first + kv2.first] += kv1.second * kv2.second;
    poly.swap(p);
    return *this;
}

pair<Polynomial,Polynomial> Polynomial::div(Polynomial remainder, const Polynomial& divisor){
    Polynomial quotient;
    while (remainder.degree() >= divisor.degree()){
        int    deg  = remainder.degree() - divisor.degree();
        double coef = remainder.poly.rbegin()->second / divisor.poly.rbegin()->second;
        for (auto const& kv : divisor.poly) remainder.poly[kv.first + deg] -= kv.second * coef;
        quotient.poly[deg] = coef;
        remainder.poly.erase(prev(end(remainder.poly)));
    }
    return {quotient,remainder};
}

Polynomial& Polynomial::operator/=(const Polynomial& rhs){
    auto qr = div(*this, rhs);
    poly.swap(qr.first.poly);
    return *this;
}

Polynomial& Polynomial::operator%=(const Polynomial& rhs){
    auto qr = div(*this, rhs);
    poly.swap(qr.second.poly);
    return *this;
}
