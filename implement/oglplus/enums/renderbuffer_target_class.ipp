//  File implement/oglplus/enums/renderbuffer_target_class.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/renderbuffer_target.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2019 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
template <typename Base, template<RenderbufferTarget> class Transform>
class EnumToClass<Base, RenderbufferTarget, Transform>
 : public Base
{
private:
	Base& _base(void) { return *this; }
public:

#if defined GL_RENDERBUFFER
# if defined Renderbuffer
#  pragma push_macro("Renderbuffer")
#  undef Renderbuffer
	Transform<RenderbufferTarget::Renderbuffer> Renderbuffer;
#  pragma pop_macro("Renderbuffer")
# else
	Transform<RenderbufferTarget::Renderbuffer> Renderbuffer;
# endif
#endif

	EnumToClass(void) { }
	EnumToClass(Base&& base)
	 : Base(std::move(base))
#if defined GL_RENDERBUFFER
# if defined Renderbuffer
#  pragma push_macro("Renderbuffer")
#  undef Renderbuffer
	 , Renderbuffer(_base())
#  pragma pop_macro("Renderbuffer")
# else
	 , Renderbuffer(_base())
# endif
#endif
	{ }
};

} // namespace enums

