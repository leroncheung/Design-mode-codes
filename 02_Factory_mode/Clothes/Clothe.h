#ifndef _CLOTHE_H_
#define _CLOTHE_H_

class Clothe
{
public:
    Clothe() = default;
    virtual ~Clothe() = default;
    virtual void Show() = 0;
};

#endif