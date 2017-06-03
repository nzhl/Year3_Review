#include <cstdio>

class Fred{
public:

    const static int age = 20;

    // static int gg = 1; non-const static should initialize outside
    static int gg;

    const int kk = 1333;

    static void say(){
        printf("Hey dude\n");
    }

    static void jump();

     virtual ~Fred(){
        printf("Fred\n");
    }
};

class Sam : public Fred{
    public:
    ~Sam(){
        printf("Sam\n");
    }

    void hunt() const {
        ++food;
        printf("I hunted all\n");
        printf("You can print mutable member attribute here %d\n", food);
    }

    void pay() {
        printf("WTF!\n");
    }

private:
    mutable int food = 3;
};

//static void Fred::jump(){  -> static not allowed here
void Fred::jump(){
    printf("Jump what?\n");
}

int Fred::gg = 3;


void lec_9(){
    Fred::say();
    Fred::jump();
    printf("%d\n", Fred::age);
    printf("%d\n", Fred::gg);

#if 0
    const char *p = "Hello";
    // char const *p = "Hello" -> the same as above
    p[0] = 'a' -> error


    int ch = 3;
    char * const xx = nullptr;
    //xx = &ch; -> error
#endif

    int x = 3;
    //-> error code : reference itself is already const
    //( can't not reference to another variable after initialize)
    //int & const ref_xx = x;
    const int &ref_x = x;
    x = 4;
    printf("x : %d\n", ref_x);

    Sam sam;
    sam.hunt();
    sam.pay();

    printf("------------- Another hunter was born -----------\n");
    Sam const & ref_sam = sam;
    ref_sam.hunt();
    //ref_sam.pay();  -> can not use a const reference to call a non const function
}
