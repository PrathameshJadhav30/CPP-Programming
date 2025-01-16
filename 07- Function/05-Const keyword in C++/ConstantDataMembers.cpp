class test
{
  const int x;//const_data member
  public:
  test(int y)
  {
    x = y;
  }
  test(float z)
  {
    //x = z;//const memeber x cannot be reassigned
   }
};
main()
{
  A a(5);
  //A b(2.3);//invalid :assignment of read_only_object
}