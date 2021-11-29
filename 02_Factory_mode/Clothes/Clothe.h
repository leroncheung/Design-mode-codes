#ifndef _CLOTHE_H_
#define _CLOTHE_H_

class Clothe
{
public:
    Clothe() = default;
    virtual ~Clothe() = default;
    virtual void Show() const = 0;
};

#endif