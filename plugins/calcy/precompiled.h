/*
Launchy: Application Launcher
Copyright (C) 2007-2009  Simon Capewell

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef PRECOMPILED_H
#define PRECOMPILED_H

#ifdef _MSC_VER
#pragma warning(push,1)
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdlib.h>

#include <QtGui>
#include <QtWidgets>

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#include "exprtk.hpp"

/*
#include <boost/shared_ptr.hpp>

using namespace boost;

#define BOOST_SPIRIT_USE_OLD_NAMESPACE
#include <boost/spirit/include/classic_core.hpp>
#include <boost/spirit/include/classic_attribute.hpp>
#include <boost/spirit/include/phoenix1_functions.hpp>
*/

#endif // PRECOMPILED_H
