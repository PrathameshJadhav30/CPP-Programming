class test
{
  public: int x;
  test()
  {
    x = 0;
  }
};
main()
{
  const test t; // declaring const object 'a' of class 'A'
  // t.x = 10; // compilation error
}