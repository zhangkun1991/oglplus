/**
 *  @file oglplus/capability.hpp
 *  @brief Enumeration of OpenGL capabilities that can be Enabled/Disabled
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2011 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef OGLPLUS_CAPABILITY_1107121519_HPP
#define OGLPLUS_CAPABILITY_1107121519_HPP

namespace oglplus {

/// Capability enumeration
/**
 *  @ingroup enumerations
 *
 *  @glsymbols
 *  @glfunref{Enable}
 *  @glfunref{Disable}
 *  @glfunref{IsEnabled}
 */
OGLPLUS_ENUM_CLASS_BEGIN(Capability, GLenum)
#include <oglplus/enums/capability.ipp>
OGLPLUS_ENUM_CLASS_END

inline StrLit EnumValueName(Capability value)
OGLPLUS_NOEXCEPT(true)
{
#if !OGLPLUS_NO_ENUM_VALUE_NAMES
#include <oglplus/names/capability.ipp>
#endif
	return StrLit();
}

/// Functionality enumeration
/**
 *  @ingroup enumerations
 *
 *  @glsymbols
 *  @glfunref{Enable}
 *  @glfunref{Disable}
 *  @glfunref{IsEnabled}
 */
OGLPLUS_ENUM_CLASS_BEGIN(Functionality, GLenum)
#include <oglplus/enums/functionality.ipp>
OGLPLUS_ENUM_CLASS_END

inline StrLit EnumValueName(Functionality value)
OGLPLUS_NOEXCEPT(true)
{
#if !OGLPLUS_NO_ENUM_VALUE_NAMES
#include <oglplus/names/functionality.ipp>
#endif
	return StrLit();
}

} // namespace oglplus

#endif // include guard
