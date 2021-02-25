#ifndef BINOMIAL
#define BINOMIAL

class Binomial {
  double coefft1, coefft2;
  int power1, power2;
  public:

  Binomial (
    double c1 = 1.0,
    double c2 = 1.0, 
    int p1 = 1,
    int p2 = 1);
  double GetCoefficient (int idx) const;
  int GetPower(int idx) const;
  int SetPower(int idx,int pwr);
  int Add (const Binomial other);
  void Multiply (double f);
  void Multiply (double coefft, int pwr);

};
#endif