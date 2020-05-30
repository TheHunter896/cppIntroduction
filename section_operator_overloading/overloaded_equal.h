//
// Created by foobar on 5/29/2020.
//

#ifndef UDEMY_COURSE_OVERLOADED_EQUAL_H
#define UDEMY_COURSE_OVERLOADED_EQUAL_H


class overloaded_equal {
    friend overloaded_equal operator-(const overloaded_equal &obj);
private:
    char *str;
public:
    //No args constructor (no args initialization constructor)
    overloaded_equal();

    //Overloaded constructor (initialization constructor)
    overloaded_equal(const char *s);

    //Copy constructor
    overloaded_equal(const overloaded_equal &source);

    //Deconstructor
    ~overloaded_equal();

    //Copy assignment constructor
    overloaded_equal &operator=(const overloaded_equal &rhs); //overloading b = a, a being rhs

    //Move constructor
    overloaded_equal &operator=(overloaded_equal &&rhs); //overloading b = a, a being the right value. Move operator cant be const

    //- constructor
    overloaded_equal operator-(); //Dont need to use the reference here (make lowercase)

};


#endif //UDEMY_COURSE_OVERLOADED_EQUAL_H
