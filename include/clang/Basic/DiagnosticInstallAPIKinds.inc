#ifdef INSTALLAPISTART
__INSTALLAPISTART = DIAG_START_INSTALLAPI,
#undef INSTALLAPISTART
#endif

DIAG(err_allowable_clients_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "allowable clients do not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_allowable_clients_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "allowable client missing from %0: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_appextension_safe_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "the ApplicationExtensionSafe flag does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_architecture_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "architectures do not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_cannot_find_reexport, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot find re-exported %select{framework|library}0: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_cannot_read_input_list, CLASS_ERROR, (unsigned)diag::Severity::Error, "could not read %0 input list '%1': %2", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_cannot_write_file, CLASS_ERROR, (unsigned)diag::Severity::Error, "cannot write file '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_compatibility_version_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "compatibility_version does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_current_version_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "current_version does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_directory_scanning, CLASS_ERROR, (unsigned)diag::Severity::Error, "could not read directory '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_dylib_symbol_flags_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "dynamic library symbol '%0' is %select{weak defined|thread local}1, but its declaration is not", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_header_availability_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "declaration '%0' is marked %select{available|unavailable}1, but symbol is %select{not |}2exported in dynamic library", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_header_hidden_symbol, CLASS_ERROR, (unsigned)diag::Severity::Error, "symbol exported in dynamic library, but marked hidden in declaration '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_header_symbol_flags_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "declaration '%0' is %select{weak defined|thread local}1, but symbol is not in dynamic library", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_header_symbol_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "no declaration found for exported symbol '%0' in dynamic library", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_install_name_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "install_name does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_invalid_label, CLASS_ERROR, (unsigned)diag::Severity::Error, "label '%0' is reserved: use a different label name for -X<label>", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_library_hidden_symbol, CLASS_ERROR, (unsigned)diag::Severity::Error, "declaration has external linkage, but symbol has internal linkage in dynamic library '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_library_missing_symbol, CLASS_ERROR, (unsigned)diag::Severity::Error, "declaration has external linkage, but dynamic library doesn't have symbol '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_more_than_one_library, CLASS_ERROR, (unsigned)diag::Severity::Error, "more than one framework/dynamic library found", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_install_name, CLASS_ERROR, (unsigned)diag::Severity::Error, "no install name specified: add -install_name <path>", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_matching_target, CLASS_ERROR, (unsigned)diag::Severity::Error, "no matching target found for target variant '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_output_file, CLASS_ERROR, (unsigned)diag::Severity::Error, "no output file specified", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_such_header_file, CLASS_ERROR, (unsigned)diag::Severity::Error, "no such %select{public|private|project}1 header file: '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_such_umbrella_header_file, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{public|private|project}1 umbrella header file not found in input: '%0'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_no_twolevel_namespace, CLASS_ERROR, (unsigned)diag::Severity::Error, "flat namespace libraries are not supported", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_parent_umbrella_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "parent umbrella does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_parent_umbrella_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "parent umbrella missing from %0: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_platform_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "platform does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_reexported_libraries_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "re-exported libraries do not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_reexported_libraries_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "re-exported library missing from %0: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_shared_cache_eligiblity_mismatch, CLASS_ERROR, (unsigned)diag::Severity::Error, "the NotForDyldSharedCache flag does not match: '%0' (provided) vs '%1' (found)", 0, SFINAE_SubstitutionFailure, false, true, true, false, 5)
DIAG(err_unsupported_environment, CLASS_ERROR, (unsigned)diag::Severity::Error, "environment '%0' is not supported: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_unsupported_os, CLASS_ERROR, (unsigned)diag::Severity::Error, "os '%0' is not supported: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(err_unsupported_vendor, CLASS_ERROR, (unsigned)diag::Severity::Error, "vendor '%0' is not supported: '%1'", 0, SFINAE_SubstitutionFailure, false, true, true, false, 18)
DIAG(warn_dylib_symbol_flags_mismatch, CLASS_WARNING, (unsigned)diag::Severity::Warning, "dynamic library symbol '%0' is %select{weak defined|thread local}1, but its declaration is not", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_glob_did_not_match, CLASS_WARNING, (unsigned)diag::Severity::Warning, "glob '%0' did not match any header file", 472, SFINAE_Suppress, false, false, true, false, 18)
DIAG(warn_header_availability_mismatch, CLASS_WARNING, (unsigned)diag::Severity::Warning, "declaration '%0' is marked %select{available|unavailable}1, but symbol is %select{not |}2exported in dynamic library", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_header_hidden_symbol, CLASS_WARNING, (unsigned)diag::Severity::Warning, "symbol exported in dynamic library, but marked hidden in declaration '%0'", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_header_symbol_flags_mismatch, CLASS_WARNING, (unsigned)diag::Severity::Warning, "declaration '%0' is %select{weak defined|thread local}1, but symbol is not in dynamic library", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_header_symbol_missing, CLASS_WARNING, (unsigned)diag::Severity::Warning, "no declaration was found for exported symbol '%0' in dynamic library", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_library_hidden_symbol, CLASS_WARNING, (unsigned)diag::Severity::Warning, "declaration has external linkage, but symbol has internal linkage in dynamic library '%0'", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_library_missing_symbol, CLASS_WARNING, (unsigned)diag::Severity::Warning, "declaration has external linkage, but dynamic library doesn't have symbol '%0'", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_no_such_excluded_header_file, CLASS_WARNING, (unsigned)diag::Severity::Warning, "no such excluded %select{public|private}0 header file: '%1'", 472, SFINAE_Suppress, false, false, true, false, 18)
DIAG(warn_platform_mismatch, CLASS_WARNING, (unsigned)diag::Severity::Warning, "platform does not match: '%0' (provided) vs '%1' (found)", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_rpaths_mismatch, CLASS_WARNING, (unsigned)diag::Severity::Warning, "runpath search paths do not match: '%0' (provided) vs '%1' (found)", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_rpaths_missing, CLASS_WARNING, (unsigned)diag::Severity::Warning, "runpath search paths missing from %0: '%1'", 472, SFINAE_Suppress, false, false, true, false, 5)
DIAG(warn_target, CLASS_WARNING, (unsigned)diag::Severity::Warning, "violations found for %0", 472, SFINAE_Suppress, false, false, true, false, 5)