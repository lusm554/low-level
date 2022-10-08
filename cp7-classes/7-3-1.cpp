#include <iostream>
#include <string>

class Screen
{
  public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const
    {
      return contents[cursor];
    }
    inline char get(pos ht, pos wd) const;

    Screen &set(char c)
    {
      contents[cursor] = c;
      return *this;
    }
    Screen &set(pos r, pos col, char ch)
    {
      contents[r * width + col] = ch;
      return *this;
    }

    Screen &move(pos r, pos c);

    void some_member() const
    {
      ++access_cnt;
    }

    Screen &display(std::ostream &os)
    {
      do_display(os);
      return *this;
    }
    const Screen &display(std::ostream &os) const
    {
      do_display(os);
      return *this;
    }

  private:
    void do_display(std::ostream &os) const
    {
      os << contents << std::endl;
    }

    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_cnt;
};

inline Screen& Screen::move(pos r, pos c)
{
  pos row = r * width;
  cursor = row + c;
  return *this;
}

char Screen::get(pos r, pos c) const
{
  pos row = r * width;
  return contents[row + c];
}

void test_Screen(void);

int main(void)
{
  test_Screen();

  return 0;
}

void test_Screen(void)
{
  //Screen obj(10, 10, 'g');
  Screen obj(5, 5, 'X');
	obj.move(4, 0).set('#').display(std::cout);
	obj.display(std::cout);   
}
