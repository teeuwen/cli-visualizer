/*
 * VisException.h
 *
 * Created on: Jul 30, 2015
 *     Author: dpayne
 */

#ifndef _VIS_VIS_EXCEPTION_H
#define _VIS_VIS_EXCEPTION_H

#include <exception>
#include <stdexcept>

namespace vis
{

class VisException : public std::exception
{
  public:
    VisException(const char *format, ...) throw();
    ~VisException() throw();

    virtual const char *what() const throw() override
    {
        return m_message.c_str();
    }

  private:
    std::string m_message;
};
}

#endif