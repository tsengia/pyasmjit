#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>

#include <pybind11/pybind11.h>

using ModuleGetter = std::function< pybind11::module & (std::string const &) >;

void bind_bits_types_struct_FILE(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_std_type_traits(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_4(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_5(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_6(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_7(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_8(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_9(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_10(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_11(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_12(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_13(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_14(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_15(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_16(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_17(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_18(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_19(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_20(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_21(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_22(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_23(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_24(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_25(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_26(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_27(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_28(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_29(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_30(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_31(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_32(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_33(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_34(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_35(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_36(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_37(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_38(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_39(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_40(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_41(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_42(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_43(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_44(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_45(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_46(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_47(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_48(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_49(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_50(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_51(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_52(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_53(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_54(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_55(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_56(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_57(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_58(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_59(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_60(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_61(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_62(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_63(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_64(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_65(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_66(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_67(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_68(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_69(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_70(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_71(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_72(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_73(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_74(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_75(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_76(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_77(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_78(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_79(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_80(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(asmjit, root_module) {
	root_module.doc() = "asmjit module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	static std::vector<std::string> const reserved_python_words {"nonlocal", "global", };

	auto mangle_namespace_name(
		[](std::string const &ns) -> std::string {
			if ( std::find(reserved_python_words.begin(), reserved_python_words.end(), ns) == reserved_python_words.end() ) return ns;
			return ns+'_';
		}
	);

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "asmjit"},
		{"asmjit", "ArchUtils"},
		{"asmjit", "DebugUtils"},
		{"asmjit", "Formatter"},
		{"asmjit", "Globals"},
		{"asmjit", "InstAPI"},
		{"asmjit", "Type"},
		{"asmjit", "TypeUtils"},
		{"asmjit", "VirtMem"},
		{"asmjit", "a32"},
		{"asmjit", "arm"},
		{"asmjit::arm", "Utils"},
		{"asmjit", "x86"},
		{"asmjit::x86", "Inst"},
		{"asmjit::x86", "InstDB"},
		{"asmjit::x86", "regs"},
		{"", "std"},
	};
	for(auto &p : sub_modules ) modules[ p.first.empty() ? p.second :  p.first+"::"+p.second ] = modules[p.first].def_submodule( mangle_namespace_name(p.second).c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_bits_types_struct_FILE(M);
	bind_std_type_traits(M);
	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);
	bind_unknown_unknown_4(M);
	bind_unknown_unknown_5(M);
	bind_unknown_unknown_6(M);
	bind_unknown_unknown_7(M);
	bind_unknown_unknown_8(M);
	bind_unknown_unknown_9(M);
	bind_unknown_unknown_10(M);
	bind_unknown_unknown_11(M);
	bind_unknown_unknown_12(M);
	bind_unknown_unknown_13(M);
	bind_unknown_unknown_14(M);
	bind_unknown_unknown_15(M);
	bind_unknown_unknown_16(M);
	bind_unknown_unknown_17(M);
	bind_unknown_unknown_18(M);
	bind_unknown_unknown_19(M);
	bind_unknown_unknown_20(M);
	bind_unknown_unknown_21(M);
	bind_unknown_unknown_22(M);
	bind_unknown_unknown_23(M);
	bind_unknown_unknown_24(M);
	bind_unknown_unknown_25(M);
	bind_unknown_unknown_26(M);
	bind_unknown_unknown_27(M);
	bind_unknown_unknown_28(M);
	bind_unknown_unknown_29(M);
	bind_unknown_unknown_30(M);
	bind_unknown_unknown_31(M);
	bind_unknown_unknown_32(M);
	bind_unknown_unknown_33(M);
	bind_unknown_unknown_34(M);
	bind_unknown_unknown_35(M);
	bind_unknown_unknown_36(M);
	bind_unknown_unknown_37(M);
	bind_unknown_unknown_38(M);
	bind_unknown_unknown_39(M);
	bind_unknown_unknown_40(M);
	bind_unknown_unknown_41(M);
	bind_unknown_unknown_42(M);
	bind_unknown_unknown_43(M);
	bind_unknown_unknown_44(M);
	bind_unknown_unknown_45(M);
	bind_unknown_unknown_46(M);
	bind_unknown_unknown_47(M);
	bind_unknown_unknown_48(M);
	bind_unknown_unknown_49(M);
	bind_unknown_unknown_50(M);
	bind_unknown_unknown_51(M);
	bind_unknown_unknown_52(M);
	bind_unknown_unknown_53(M);
	bind_unknown_unknown_54(M);
	bind_unknown_unknown_55(M);
	bind_unknown_unknown_56(M);
	bind_unknown_unknown_57(M);
	bind_unknown_unknown_58(M);
	bind_unknown_unknown_59(M);
	bind_unknown_unknown_60(M);
	bind_unknown_unknown_61(M);
	bind_unknown_unknown_62(M);
	bind_unknown_unknown_63(M);
	bind_unknown_unknown_64(M);
	bind_unknown_unknown_65(M);
	bind_unknown_unknown_66(M);
	bind_unknown_unknown_67(M);
	bind_unknown_unknown_68(M);
	bind_unknown_unknown_69(M);
	bind_unknown_unknown_70(M);
	bind_unknown_unknown_71(M);
	bind_unknown_unknown_72(M);
	bind_unknown_unknown_73(M);
	bind_unknown_unknown_74(M);
	bind_unknown_unknown_75(M);
	bind_unknown_unknown_76(M);
	bind_unknown_unknown_77(M);
	bind_unknown_unknown_78(M);
	bind_unknown_unknown_79(M);
	bind_unknown_unknown_80(M);

}
