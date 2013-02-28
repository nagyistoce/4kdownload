/// Copyright 2010-2012 4kdownload.com (developers@4kdownload.com)
/**
    This file is part of 4k Download.

    4k Download is free software; you can redistribute it and/or modify
    it under the terms of the one of two licenses as you choose:

    1. GNU GENERAL PUBLIC LICENSE Version 3
    (See file COPYING.GPLv3 for details).

    2. 4k Download Commercial License
    (Send request to developers@4kdownload.com for details).
   
*/


#ifndef GUI_CXX_MANUALTRANSITION_H
#define GUI_CXX_MANUALTRANSITION_H

#include <QAbstractTransition>
#include <QEvent>

namespace Gui
{

struct ManualTransitionEvent : public QEvent
{
    explicit ManualTransitionEvent(int id);

    int id;
};

class ManualTransition : public QAbstractTransition
{
public:
    explicit ManualTransition(int id);

protected:
    virtual bool eventTest(QEvent* e);
    virtual void onTransition(QEvent *);

private:
    int m_id;
};

} // Gui

#endif // GUI_CXX_MANUALTRANSITION_H
