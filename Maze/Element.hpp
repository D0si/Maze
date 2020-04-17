#ifndef MAZE_ELEMENT_HPP
#define MAZE_ELEMENT_HPP

#include <string>
#include <memory>
#include <Maze/Type.hpp>

namespace Maze {
	class Array;
	class Object;

	class Element {
	private:
		Type type_ = Type::Null;

		bool val_bool_;
		int val_int_;
		double val_double_;
		std::string val_string_;
		std::unique_ptr<Array> ptr_array_;
		std::unique_ptr<Object> ptr_object_;

		std::string val_key_;
	public:
		Element();
		Element(const Element& val);
		Element(bool val);
		Element(int val);
		Element(double val);
		Element(const std::string& val);
		Element(const char* val);
		Element(const Array& val);
		Element(const Object& val);
		Element(Type val);
		~Element();

		void set_element(const Element& val);
		void operator=(const Element& val);

		void set_type(Type type);
		Type get_type() const;

		void set_key(std::string key);
		std::string get_key() const;

		void set_null();

		void set_bool(bool val);
		void operator=(bool val);
		bool get_bool() const;
		bool b() const;
		operator bool() const;

		void set_int(int val);
		void operator=(int val);
		int get_int() const;
		int i() const;
		operator int() const;

		void set_double(double val);
		void operator=(double val);
		double get_double() const;
		double d() const;
		operator double() const;

		void set_string(const std::string& val);
		void operator=(const std::string& val);
		void operator=(const char* val);
		std::string get_string() const;
		std::string s() const;
		operator std::string() const;

		void set_array(const Array& value);
		void operator=(const Array& value);
		Array get_array() const;
		Array a() const;
		Array* a_ptr() const;
		operator Array() const;

		void set_object(const Object& value);
		void operator=(const Object& value);
		Object get_object() const;
		Object o() const;
		Object* o_ptr() const;
		operator Object() const;

		bool is_null() const;
		bool is_bool() const;
		bool is_int() const;
		bool is_double() const;
		bool is_string() const;
		bool is_array() const;
		bool is_object() const;
		bool is(Type type) const;

		void apply(const Element& new_element);

		std::string to_json(int indentation_spacing = 2) const;

		void apply_json(const std::string& json_string);

		static Element from_json(const std::string& json_string);

		static Element get_null();
	};
}  // namespace Maze

#endif  // MAZE_ELEMENT_HPP