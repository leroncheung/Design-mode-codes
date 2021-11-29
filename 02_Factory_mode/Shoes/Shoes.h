#ifndef _SHOES_H_
#define _SHOES_H_

class Shoes
{
public:
    Shoes() = default;
    virtual ~Shoes() = default;
    virtual void Show() const = 0;
};

#endif