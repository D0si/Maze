#ifndef MAZE_HELPERS_HPP
#define MAZE_HELPERS_HPP

#include <nlohmann/json.hpp>

namespace Maze {
	class Element;
	class Array;
	class Object;
	using Json = nlohmann::json;

	namespace Helpers {
		namespace Element {
			Json to_json_element(const Maze::Element* el);
			void apply_json(Maze::Element* el, const Json json);
			Maze::Element from_json(const Json json);
		}  // namespace Element

		namespace Array {
			Json to_json_array(const Maze::Array* arr);
			Maze::Array from_json(const Json json_array);
		}  // namespace Array

		namespace Object {
			Json to_json_object(const Maze::Object* obj);
			Maze::Object from_json(const Json json_object);
		}  // namespace Object
	}  // namespace Helpers
}  // namespace Maze

#endif  // MAZE_HELPERS_HPP