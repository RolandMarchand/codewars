int fusc(int n) {
  return (n < 2) ? n : (n % 2 == 0) ? fusc(n / 2) : fusc(n / 2) + fusc(n / 2 + 1);
}
