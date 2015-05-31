// Generated code for Python source for module '__internal__'
// created by Nuitka version 0.5.0.1

// This code is in part copyright 2013 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__modules.hpp"
#include "__constants.hpp"
#include "__helpers.hpp"

// The _module___internal__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module___internal__;
PyDictObject *moduledict___internal__;

NUITKA_MAY_BE_UNUSED static PyObject *GET_MODULE_VALUE0( PyObject *var_name )
{
    // For module variable values, need to lookup in module dictionary or in
    // built-in dictionary.

    PyObject *result = GET_STRING_DICT_VALUE( moduledict___internal__, (Nuitka_StringObject *)var_name );

    if (likely( result != NULL ))
    {
        assertObject( result );

        return result;
    }

    result = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)var_name );

    if (likely( result != NULL ))
    {
        assertObject( result );

        return result;
    }

    PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString(var_name ));
    throw PythonException();
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_MODULE_VALUE1( PyObject *var_name )
{
    return INCREASE_REFCOUNT( GET_MODULE_VALUE0( var_name ) );
}

NUITKA_MAY_BE_UNUSED void static DEL_MODULE_VALUE( PyObject *var_name, bool tolerant )
{
    int status = PyDict_DelItem( (PyObject *)moduledict___internal__, var_name );

    if (unlikely( status == -1 && tolerant == false ))
    {
        PyErr_Format(
            PyExc_NameError,
            "global name '%s' is not defined",
            Nuitka_String_AsString( var_name )
        );

        throw PythonException();
    }
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_LOCALS_OR_MODULE_VALUE0( PyObject *locals_dict, PyObject *var_name )
{
    PyObject *result = PyDict_GetItem( locals_dict, var_name );

    if ( result != NULL )
    {
        return result;
    }
    else
    {
        return GET_MODULE_VALUE0( var_name );
    }
}

NUITKA_MAY_BE_UNUSED static PyObject *GET_LOCALS_OR_MODULE_VALUE1( PyObject *locals_dict, PyObject *var_name )
{
    PyObject *result = PyDict_GetItem( locals_dict, var_name );

    if ( result != NULL )
    {
        return INCREASE_REFCOUNT( result );
    }
    else
    {
        return GET_MODULE_VALUE1( var_name );
    }
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_function_2_get_callable_name_desc_of_module___internal__( PyObject *_python_par_called );


// The module function definitions.
NUITKA_CROSS_MODULE PyObject *impl_function_1_complex_call_helper_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_called( const_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel par_star_arg_list( const_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( par_star_arg_list.asObject0(), LOOKUP_BUILTIN( const_str_plain_tuple ) ) )) )
    {
        try
        {
            par_star_arg_list.assign1( TO_TUPLE( par_star_arg_list.asObject0() ) );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }

            frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    RAISE_EXCEPTION_WITH_TYPE( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( const_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( par_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( par_star_arg_list.asObject0() ) ).asObject0(), const_str_plain___name__ ) ).asObject0() ) ) ).asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject0() );
                }
            }
            else
            {
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
    }
    {
        PyObjectTempKeeper0 call1;
        return ( call1.assign( par_called.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call1.asObject0(), par_star_arg_list.asObject0() ) );
    }
}


NUITKA_LOCAL_MODULE PyObject *impl_function_2_get_callable_name_desc_of_module___internal__( PyObject *_python_par_called )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_called( const_str_plain_called, _python_par_called );

    // Actual function code.
    if ( BUILTIN_ISINSTANCE_BOOL( par_called.asObject0(), PyObjectTemporary( MAKE_TUPLE3( (PyObject *)&PyFunction_Type, (PyObject *)&PyCFunction_Type, (PyObject *)&PyMethod_Type ) ).asObject0() ) )
    {
        return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_called.asObject0(), const_str_plain___name__ ) ).asObject0(), const_str_digest_bcd8b0c2eb1fce714eab6cef0d771acc );
    }
    else
    {
        if ( BUILTIN_ISINSTANCE_BOOL( par_called.asObject0(), (PyObject *)&PyClass_Type ) )
        {
            return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( par_called.asObject0(), const_str_plain___name__ ) ).asObject0(), const_str_digest_3451707491a177b52280801d2b61e76a );
        }
        else
        {
            if ( BUILTIN_ISINSTANCE_BOOL( par_called.asObject0(), (PyObject *)&PyInstance_Type ) )
            {
                return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE_CLASS_SLOT( par_called.asObject0() ) ).asObject0(), const_str_plain___name__ ) ).asObject0(), const_str_digest_04d542fe40e298e5929a23f3bb806b3d );
            }
            else
            {
                return BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( par_called.asObject0() ) ).asObject0(), const_str_plain___name__ ) ).asObject0(), const_str_digest_268060527bc6c0022bb231d71f93eb88 );
            }
        }
    }
}


NUITKA_CROSS_MODULE PyObject *impl_function_3_complex_call_helper_pos_star_list_of_module___internal__( PyObject *_python_par_called, PyObject *_python_par_args, PyObject *_python_par_star_arg_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel par_called( const_str_plain_called, _python_par_called );
    PyObjectLocalParameterVariableNoDel par_args( const_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel par_star_arg_list( const_str_plain_star_arg_list, _python_par_star_arg_list );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    if ( (!( BUILTIN_ISINSTANCE_BOOL( par_star_arg_list.asObject0(), LOOKUP_BUILTIN( const_str_plain_tuple ) ) )) )
    {
        try
        {
            par_star_arg_list.assign1( TO_TUPLE( par_star_arg_list.asObject0() ) );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }

            frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
            ExceptionRestorerFrameGuardVeryLight restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                {
                    PyObjectTempKeeper1 make_tuple1;
                    RAISE_EXCEPTION_WITH_TYPE( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( const_str_digest_b89edf3f5c8fe728a878687e23fe995c, PyObjectTemporary( ( make_tuple1.assign( impl_function_2_get_callable_name_desc_of_module___internal__( par_called.asObject1() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BUILTIN_TYPE1( par_star_arg_list.asObject0() ) ).asObject0(), const_str_plain___name__ ) ).asObject0() ) ) ).asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject0() );
                }
            }
            else
            {
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
        }
    }
    {
        PyObjectTempKeeper0 call1;
        PyObjectTempKeeper0 op1;
        return ( call1.assign( par_called.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call1.asObject0(), PyObjectTemporary( ( op1.assign( par_args.asObject0() ), BINARY_OPERATION_ADD( op1.asObject0(), par_star_arg_list.asObject0() ) ) ).asObject0() ) );
    }
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___internal__ =
{
    PyModuleDef_HEAD_INIT,
    "__internal__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER

#include "nuitka/unfreezing.hpp"

// Table for lookup to find "frozen" modules or DLLs, i.e. the ones included in
// or along this binary.
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{

    { NULL, NULL, 0 }
};

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( __internal__ )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___internal__ );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );
#if PYTHON_VERSION < 300
    initSlotCompare();
#endif

    patchBuiltinModule();
    patchTypeComparison();

#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( meta_path_loader_entries );
#endif

    // puts( "in init__internal__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___internal__ = Py_InitModule4(
        "__internal__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___internal__ = PyModule_Create( &mdef___internal__ );
#endif

    moduledict___internal__ = (PyDictObject *)((PyModuleObject *)module___internal__)->md_dict;

    assertObject( module___internal__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___internal__, module___internal__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module___internal__ );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( module___internal__ != module___main__ )
        {
#endif
            value = PyModule_GetDict( value );
#ifdef _NUITKA_EXE
        }
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#else
    PyDict_SetItem( module_dict, const_str_plain___loader__, Py_None );
#endif
#endif

    // Temp variables if any


    // Module code


   return MOD_RETURN_VALUE( module___internal__ );
}
