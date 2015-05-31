// Generated code for Python source for module 'download'
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

// The _module_download is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *module_download;
PyDictObject *moduledict_download;

NUITKA_MAY_BE_UNUSED static PyObject *GET_MODULE_VALUE0( PyObject *var_name )
{
    // For module variable values, need to lookup in module dictionary or in
    // built-in dictionary.

    PyObject *result = GET_STRING_DICT_VALUE( moduledict_download, (Nuitka_StringObject *)var_name );

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
    int status = PyDict_DelItem( (PyObject *)moduledict_download, var_name );

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
NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_2_main_of_module_download( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &closure_ok );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_2_of_function_2_main_of_module_download( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &closure_ok );


static PyObject *MAKE_FUNCTION_function_1_read_single_keypress_of_module_download(  );


static PyObject *MAKE_FUNCTION_function_2_main_of_module_download(  );


// The module function definitions.
static PyObject *impl_function_1_read_single_keypress_of_module_download( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_fd( const_str_plain_fd );
    PyObjectLocalVariable var_flags_save( const_str_plain_flags_save );
    PyObjectLocalVariable var_attrs_save( const_str_plain_attrs_save );
    PyObjectLocalVariable var_attrs( const_str_plain_attrs );
    PyObjectLocalVariable var_ret( const_str_plain_ret );

    // Actual function code.
    static PyFrameObject *frame_function_1_read_single_keypress_of_module_download = NULL;

    if ( isFrameUnusable( frame_function_1_read_single_keypress_of_module_download ) )
    {
        if ( frame_function_1_read_single_keypress_of_module_download )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_read_single_keypress_of_module_download" );
#endif
            Py_DECREF( frame_function_1_read_single_keypress_of_module_download );
        }

        frame_function_1_read_single_keypress_of_module_download = MAKE_FRAME( codeobj_d4bc1a6aecbb0a9e7e481af189d34eb3, module_download );
    }

    FrameGuardWithExceptionPreservation frame_guard( frame_function_1_read_single_keypress_of_module_download );
    try
    {
        assert( Py_REFCNT( frame_function_1_read_single_keypress_of_module_download ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 24 );
        var_fd.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_stdin ) ).asObject0(), const_str_plain_fileno ) ).asObject0() ) );
        frame_guard.setLineNumber( 26 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            var_flags_save.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_fcntl ) ), call2.assign( var_fd.asObject0() ), CALL_FUNCTION_WITH_ARGS2( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_F_GETFL ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 27 );
        {
            PyObjectTempKeeper1 call1;
            var_attrs_save.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_tcgetattr ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_fd.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 29 );
        var_attrs.assign1( TO_LIST( var_attrs_save.asObject0() ) );
        frame_guard.setLineNumber( 31 );
        PyObject *tmp_inplace_assign_1__inplace_target = var_attrs.asObject0();
        PyObject *tmp_inplace_assign_1__inplace_subscript = const_int_0;
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper1 op3;
            PyObjectTempKeeper1 op4;
            PyObjectTempKeeper1 op5;
            PyObjectTempKeeper1 op6;
            PyObjectTempKeeper1 op7;
            PyObjectTempKeeper1 op8;
            PyObjectTempKeeper0 subscr1;
            {
                PyObjectTemporary tmp_identifier( ( frame_guard.setLineNumber( 31 ), op8.assign( ( subscr1.assign( tmp_inplace_assign_1__inplace_target ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_1__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAnd, op8.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Invert, PyObjectTemporary( ( op7.assign( ( op6.assign( ( op5.assign( ( op4.assign( ( op3.assign( ( op2.assign( ( op1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_IGNBRK ) ), BINARY_OPERATION( PyNumber_Or, op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_BRKINT ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_PARMRK ) ).asObject0() ) ) ), frame_guard.setLineNumber( 32 ), BINARY_OPERATION( PyNumber_Or, op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ISTRIP ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_INLCR ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_IGNCR ) ).asObject0() ) ) ), frame_guard.setLineNumber( 33 ), BINARY_OPERATION( PyNumber_Or, op6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ICRNL ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_IXON ) ).asObject0() ) ) ).asObject0() ) ).asObject0() ) ) );
                PyObject *tmp_subscribed = tmp_inplace_assign_1__inplace_target;
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_1__inplace_subscript );
            }
        }
        frame_guard.setLineNumber( 35 );
        PyObject *tmp_inplace_assign_2__inplace_target = var_attrs.asObject0();
        PyObject *tmp_inplace_assign_2__inplace_subscript = const_int_pos_1;
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper0 subscr1;
            {
                PyObjectTemporary tmp_identifier( ( op1.assign( ( subscr1.assign( tmp_inplace_assign_2__inplace_target ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_2__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAnd, op1.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Invert, PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_OPOST ) ).asObject0() ) ).asObject0() ) ) );
                PyObject *tmp_subscribed = tmp_inplace_assign_2__inplace_target;
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_2__inplace_subscript );
            }
        }
        frame_guard.setLineNumber( 37 );
        PyObject *tmp_inplace_assign_3__inplace_target = var_attrs.asObject0();
        PyObject *tmp_inplace_assign_3__inplace_subscript = const_int_pos_2;
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper0 subscr1;
            {
                PyObjectTemporary tmp_identifier( ( op2.assign( ( subscr1.assign( tmp_inplace_assign_3__inplace_target ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_3__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAnd, op2.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Invert, PyObjectTemporary( ( op1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_CSIZE ) ), BINARY_OPERATION( PyNumber_Or, op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_PARENB ) ).asObject0() ) ) ).asObject0() ) ).asObject0() ) ) );
                PyObject *tmp_subscribed = tmp_inplace_assign_3__inplace_target;
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_3__inplace_subscript );
            }
        }
        frame_guard.setLineNumber( 38 );
        PyObject *tmp_inplace_assign_4__inplace_target = var_attrs.asObject0();
        PyObject *tmp_inplace_assign_4__inplace_subscript = const_int_pos_2;
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper0 subscr1;
            {
                PyObjectTemporary tmp_identifier( ( op1.assign( ( subscr1.assign( tmp_inplace_assign_4__inplace_target ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_4__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceOr, op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_CS8 ) ).asObject0() ) ) );
                PyObject *tmp_subscribed = tmp_inplace_assign_4__inplace_target;
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_4__inplace_subscript );
            }
        }
        frame_guard.setLineNumber( 40 );
        PyObject *tmp_inplace_assign_5__inplace_target = var_attrs.asObject0();
        PyObject *tmp_inplace_assign_5__inplace_subscript = const_int_pos_3;
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op2;
            PyObjectTempKeeper1 op3;
            PyObjectTempKeeper1 op4;
            PyObjectTempKeeper1 op5;
            PyObjectTempKeeper0 subscr1;
            {
                PyObjectTemporary tmp_identifier( ( frame_guard.setLineNumber( 40 ), op5.assign( ( subscr1.assign( tmp_inplace_assign_5__inplace_target ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), tmp_inplace_assign_5__inplace_subscript ) ) ), BINARY_OPERATION( PyNumber_InPlaceAnd, op5.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Invert, PyObjectTemporary( ( op4.assign( ( op3.assign( ( op2.assign( ( op1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ECHONL ) ), BINARY_OPERATION( PyNumber_Or, op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ECHO ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ICANON ) ).asObject0() ) ) ), frame_guard.setLineNumber( 41 ), BINARY_OPERATION( PyNumber_Or, op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_ISIG ) ).asObject0() ) ) ), BINARY_OPERATION( PyNumber_Or, op4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_IEXTEN ) ).asObject0() ) ) ).asObject0() ) ).asObject0() ) ) );
                PyObject *tmp_subscribed = tmp_inplace_assign_5__inplace_target;
                SET_SUBSCRIPT( tmp_identifier.asObject0(), tmp_subscribed, tmp_inplace_assign_5__inplace_subscript );
            }
        }
        frame_guard.setLineNumber( 42 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_tcsetattr ) ), call2.assign( var_fd.asObject0() ), call3.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_TCSANOW ) ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), call2.asObject0(), call3.asObject0(), var_attrs.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 44 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 op1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_fcntl ) ), call2.assign( var_fd.asObject0() ), call3.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_F_SETFL ) ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( ( op1.assign( var_flags_save.asObject0() ), BINARY_OPERATION( PyNumber_And, op1.asObject0(), PyObjectTemporary( UNARY_OPERATION( PyNumber_Invert, PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_O_NONBLOCK ) ).asObject0() ) ).asObject0() ) ) ).asObject0() ) ) );
        }
        frame_guard.setLineNumber( 46 );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            frame_guard.setLineNumber( 46 );
            try
            {
                frame_guard.setLineNumber( 47 );
                var_ret.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_stdin ) ).asObject0(), const_str_plain_read ) ).asObject0(), const_int_pos_1 ) );
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
                ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                _exception.toExceptionHandler();

                if ( _exception.matches( PyExc_KeyboardInterrupt ) )
                {
                    frame_guard.detachFrame();
                    var_ret.assign0( const_int_0 );
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
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_tcsetattr ) ), call2.assign( var_fd.asObject0() ), call3.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_termios ), const_str_plain_TCSAFLUSH ) ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), call2.asObject0(), call3.asObject0(), var_attrs_save.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_fcntl ) ), call2.assign( var_fd.asObject0() ), call3.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_fcntl ), const_str_plain_F_SETFL ) ), CALL_FUNCTION_WITH_ARGS3( call1.asObject0(), call2.asObject0(), call3.asObject0(), var_flags_save.asObject0() ) ) );
        }
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 54 );
        return var_ret.asObject1();
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = var_ret.updateLocalsDict( var_attrs.updateLocalsDict( var_attrs_save.updateLocalsDict( var_flags_save.updateLocalsDict( var_fd.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_read_single_keypress_of_module_download )
        {
           Py_DECREF( frame_function_1_read_single_keypress_of_module_download );
           frame_function_1_read_single_keypress_of_module_download = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_read_single_keypress_of_module_download( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_1_read_single_keypress_of_module_download( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_read_single_keypress_of_module_download( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_1_read_single_keypress_of_module_download( self );
    }
    else
    {
        PyObject *result = fparse_function_1_read_single_keypress_of_module_download( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_main_of_module_download( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable var_messages( const_str_plain_messages );
    PyObjectLocalVariable var_errors( const_str_plain_errors );
    PyObjectLocalVariable var_upload_dir_files( const_str_plain_upload_dir_files );
    PyObjectLocalVariable var_q_id( const_str_plain_q_id );
    PyObjectLocalVariable var_q_folder( const_str_plain_q_folder );
    PyObjectLocalVariable var_root( const_str_plain_root );
    PyObjectLocalVariable var_dirs( const_str_plain_dirs );
    PyObjectLocalVariable var_files( const_str_plain_files );
    PyObjectLocalVariable var_i( const_str_plain_i );
    PyObjectLocalVariable var_file( const_str_plain_file );
    PyObjectLocalVariable var_id( const_str_plain_id );
    PyObjectLocalVariable var_playlistUrl( const_str_plain_playlistUrl );
    PyObjectLocalVariable var_json_input( const_str_plain_json_input );
    PyObjectLocalVariable var_videos( const_str_plain_videos );
    PyObjectLocalVariable var_json_video( const_str_plain_json_video );
    PyObjectLocalVariable var_video( const_str_plain_video );
    PyObjectSharedLocalVariable var_ok( const_str_plain_ok );
    PyObjectLocalVariable var_filename( const_str_plain_filename );
    PyObjectLocalVariable var_bestaudio( const_str_plain_bestaudio );
    PyObjectLocalVariable var_error( const_str_plain_error );
    PyObjectTempVariable tmp_tuple_unpack_1__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_1__element_1;
    PyObjectTempVariable tmp_tuple_unpack_1__element_2;
    PyObjectTempVariable tmp_tuple_unpack_1__element_3;
    PyObjectTempVariable tmp_for_loop_1__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_2__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_2__element_1;
    PyObjectTempVariable tmp_tuple_unpack_2__element_2;
    PyObjectTempVariable tmp_for_loop_2__iter_value;
    PyObjectTempVariable tmp_tuple_unpack_3__source_iter;
    PyObjectTempVariable tmp_tuple_unpack_3__element_1;
    PyObjectTempVariable tmp_tuple_unpack_3__element_2;
    PyObjectTempVariable tmp_tuple_unpack_3__element_3;
    PyObjectTempVariable tmp_for_loop_3__iter_value;

    // Actual function code.
    var_messages.assign1( PyList_New( 0 ) );
    var_errors.assign1( PyList_New( 0 ) );
    var_upload_dir_files.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_2_main_of_module_download = NULL;

    if ( isFrameUnusable( frame_function_2_main_of_module_download ) )
    {
        if ( frame_function_2_main_of_module_download )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_main_of_module_download" );
#endif
            Py_DECREF( frame_function_2_main_of_module_download );
        }

        frame_function_2_main_of_module_download = MAKE_FRAME( codeobj_0f10548ad7a08ce90f243e3d6efc52b0, module_download );
    }

    FrameGuard frame_guard( frame_function_2_main_of_module_download );
    try
    {
        assert( Py_REFCNT( frame_function_2_main_of_module_download ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        if ( (!( CHECK_IF_TRUE( GET_MODULE_VALUE0( const_str_plain_debug ) ) )) )
        {
            frame_guard.setLineNumber( 60 );
            var_q_id.assign1( TO_STR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_raw_input ), const_str_digest_27da97403773759045f1158d970ee2d4 ) ).asObject0() ) );
        }
        var_q_id.assign0( const_str_digest_89b7e969e55a4435bc682f4fa4081a51 );
        frame_guard.setLineNumber( 63 );
        if ( (!( CHECK_IF_TRUE( GET_MODULE_VALUE0( const_str_plain_debug ) ) )) )
        {
            frame_guard.setLineNumber( 64 );
            var_q_folder.assign1( TO_STR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_raw_input ), const_str_digest_6b9c5edeab1a2d1b057b898feb104a9e ) ).asObject0() ) );
        }
        var_q_folder.assign0( const_str_digest_224fd5892f9ca98ca94cd819639e1eea );
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper1 call1;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_path ) ).asObject0(), const_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_q_folder.asObject0() ) ) ).asObject0() ) )) )
            {
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_makedirs ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_q_folder.asObject0() ) ) );
                }
            }
        }
        frame_guard.setLineNumber( 69 );
        PythonExceptionKeeper _caught_1;
#if PYTHON_VERSION < 300
        int _at_lineno_1 = 0;
#endif


        try
        {
            // Tried block:
            {
                PyObjectTempKeeper1 call1;
                tmp_tuple_unpack_1__source_iter.assign1( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_walk ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_q_folder.asObject0() ) ) ).asObject0(), const_str_plain_next ) ).asObject0() ) ).asObject0() ) );
            }
            tmp_tuple_unpack_1__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 0 ) );
            tmp_tuple_unpack_1__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 1 ) );
            tmp_tuple_unpack_1__element_3.assign1( UNPACK_NEXT( tmp_tuple_unpack_1__source_iter.asObject0(), 2 ) );
            UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_1__source_iter.asObject0(), 3 );
            var_root.assign0( tmp_tuple_unpack_1__element_1.asObject0() );
            var_dirs.assign0( tmp_tuple_unpack_1__element_2.asObject0() );
            var_files.assign0( tmp_tuple_unpack_1__element_3.asObject0() );
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_1 = frame_guard.getLineNumber();
#endif

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_tuple_unpack_1__source_iter.del( true );
        tmp_tuple_unpack_1__element_1.del( true );
        tmp_tuple_unpack_1__element_2.del( true );
        tmp_tuple_unpack_1__element_3.del( true );
#if PYTHON_VERSION < 300
        if ( _at_lineno_1 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_1 );
        }
#endif
        _caught_1.rethrow();
        // Final end
        frame_guard.setLineNumber( 71 );
        PyObjectTemporaryWithDel tmp_for_loop_1__for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS1( LOOKUP_BUILTIN( const_str_plain_enumerate ), var_files.asObject0() ) ).asObject0() ) );
        PythonExceptionKeeper _caught_2;
#if PYTHON_VERSION < 300
        int _at_lineno_2 = 0;
#endif


        try
        {
            // Tried block:
            while( true )
            {
                frame_guard.setLineNumber( 71 );
                PyObject *_tmp_unpack_3 = ITERATOR_NEXT( tmp_for_loop_1__for_iterator.asObject0() );

                if ( _tmp_unpack_3 == NULL )
                {
                    break;
                }
                tmp_for_loop_1__iter_value.assign1( _tmp_unpack_3 );
                PythonExceptionKeeper _caught_4;
#if PYTHON_VERSION < 300
                int _at_lineno_4 = 0;
#endif


                try
                {
                    // Tried block:
                    tmp_tuple_unpack_2__source_iter.assign1( MAKE_ITERATOR( tmp_for_loop_1__iter_value.asObject0() ) );
                    tmp_tuple_unpack_2__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 0 ) );
                    tmp_tuple_unpack_2__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_2__source_iter.asObject0(), 1 ) );
                    UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_2__source_iter.asObject0(), 2 );
                    var_i.assign0( tmp_tuple_unpack_2__element_1.asObject0() );
                    var_file.assign0( tmp_tuple_unpack_2__element_2.asObject0() );
                }
                catch ( PythonException &_exception )
                {
#if PYTHON_VERSION >= 300
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }
#else
                    _at_lineno_4 = frame_guard.getLineNumber();
#endif

                    _caught_4.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }

                // Final block:
                tmp_tuple_unpack_2__source_iter.del( true );
                tmp_tuple_unpack_2__element_1.del( true );
                tmp_tuple_unpack_2__element_2.del( true );
#if PYTHON_VERSION < 300
                if ( _at_lineno_4 != 0 )
                {
                   frame_guard.setLineNumber( _at_lineno_4 );
                }
#endif
                _caught_4.rethrow();
                // Final end
                frame_guard.setLineNumber( 72 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 call2;
                    DECREASE_REFCOUNT( ( call2.assign( LOOKUP_ATTRIBUTE( var_upload_dir_files.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call2.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_path ) ).asObject0(), const_str_plain_splitext ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( TO_STR( var_file.asObject0() ) ).asObject0() ) ) ).asObject0(), const_int_0, 0 ) ).asObject0() ) ) );
                }

                CONSIDER_THREADING();
            }
        }
        catch ( PythonException &_exception )
        {
#if PYTHON_VERSION >= 300
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
            }
            else
            {
                _exception.addTraceback( frame_guard.getFrame0() );
            }
#else
            _at_lineno_2 = frame_guard.getLineNumber();
#endif

            _caught_2.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }

        // Final block:
        tmp_for_loop_1__iter_value.del( true );
        tmp_for_loop_1__for_iterator.del( false );
#if PYTHON_VERSION < 300
        if ( _at_lineno_2 != 0 )
        {
           frame_guard.setLineNumber( _at_lineno_2 );
        }
#endif
        _caught_2.rethrow();
        // Final end
        frame_guard.setLineNumber( 74 );
        if ( SEQUENCE_CONTAINS_BOOL( const_str_digest_5ecca9b6620eae51dccef385a03c452d, var_q_id.asObject0() ) )
        {
            frame_guard.setLineNumber( 76 );
            var_id.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS2( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_q_id.asObject0(), const_str_plain_split ) ).asObject0(), const_str_digest_a23d25449adf4bc427fab23ba3641cf7, const_int_pos_1 ) ).asObject0(), const_int_pos_1, 1 ) );
            frame_guard.setLineNumber( 77 );
            var_playlistUrl.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_70b56c0251f2fd784199d2ecc2f38875, var_id.asObject0() ) ).asObject0(), const_str_digest_dc199239f865a0a8842c8c57e249c93a ) );
            frame_guard.setLineNumber( 78 );
            {
                PyObjectTempKeeper1 call1;
                var_json_input.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_urllib2 ), const_str_plain_urlopen ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_playlistUrl.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 79 );
            {
                PyObjectTempKeeper1 call1;
                var_videos.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_json ), const_str_plain_load ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_json_input.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 80 );
            PyObjectTemporaryWithDel tmp_for_loop_2__for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_SUBSCRIPT( var_videos.asObject0(), const_str_plain_items ) ).asObject0() ) );
            PythonExceptionKeeper _caught_5;
#if PYTHON_VERSION < 300
            int _at_lineno_5 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 80 );
                    PyObject *_tmp_unpack_6 = ITERATOR_NEXT( tmp_for_loop_2__for_iterator.asObject0() );

                    if ( _tmp_unpack_6 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_2__iter_value.assign1( _tmp_unpack_6 );
                    var_json_video.assign0( tmp_for_loop_2__iter_value.asObject0() );
                    frame_guard.setLineNumber( 81 );
                    {
                        PyObjectTempKeeper1 call1;
                        var_video.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_pafy ), const_str_plain_new ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_SUBSCRIPT( var_json_video.asObject0(), const_str_plain_snippet ) ).asObject0(), const_str_plain_resourceId ) ).asObject0(), const_str_plain_videoId ) ).asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 83 );
                    var_ok.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_re ), const_str_plain_compile ) ).asObject0(), const_str_digest_7c9343009160d9ecba419824dbf34e42 ) );
                    frame_guard.setLineNumber( 85 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_name ) ).asObject0(), const_str_plain_nt ) )
                    {
                        frame_guard.setLineNumber( 86 );
                        var_ok.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_re ), const_str_plain_compile ) ).asObject0(), const_str_digest_20994cbfd23f11770242a7c9407b226c ) );
                    }
                    frame_guard.setLineNumber( 88 );
                    {
                        PyObjectTempKeeper1 call1;
                        var_filename.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( const_str_empty, const_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( impl_genexpr_1_of_function_2_main_of_module_download( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ), var_ok ) ).asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 90 );
                    {
                        PyObjectTempKeeper0 cmp1;
                        if ( ( cmp1.assign( var_filename.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), var_upload_dir_files.asObject0() ) ) )
                        {
                            frame_guard.setLineNumber( 91 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_errors.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_0b8c2d31e38bbeef55ca9fef31707550, PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ) ).asObject0(), const_str_digest_fefcaaeeed395ad1f22a015a68cce6fd ) ).asObject0() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 93 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_messages.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_0b8c2d31e38bbeef55ca9fef31707550, PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ) ).asObject0(), const_str_digest_f074720e9e59cd2410eb0dfd987e5ca9 ) ).asObject0() ) ) );
                            }
                            frame_guard.setLineNumber( 94 );
                            var_bestaudio.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_getbestaudio ) ).asObject0() ) );
                            frame_guard.setLineNumber( 95 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_bestaudio.asObject0(), const_str_plain_download ) ), CALL_FUNCTION( call1.asObject0(), const_tuple_empty, PyObjectTemporary( MAKE_DICT1( var_q_folder.asObject0(), const_str_plain_filepath ) ).asObject0() ) ) );
                            }
                        }
                    }

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_5 = frame_guard.getLineNumber();
#endif

                _caught_5.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_2__iter_value.del( true );
            tmp_for_loop_2__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_5 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_5 );
            }
#endif
            _caught_5.rethrow();
            // Final end
        }
        else
        {
            frame_guard.setLineNumber( 99 );
            var_id.assign0( var_q_id.asObject0() );
            frame_guard.setLineNumber( 100 );
            {
                PyObjectTempKeeper1 call1;
                var_video.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_pafy ), const_str_plain_new ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_id.asObject0() ) ) );
            }
            frame_guard.setLineNumber( 102 );
            PythonExceptionKeeper _caught_7;
#if PYTHON_VERSION < 300
            int _at_lineno_7 = 0;
#endif


            try
            {
                // Tried block:
                {
                    PyObjectTempKeeper1 call1;
                    tmp_tuple_unpack_3__source_iter.assign1( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_walk ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_q_folder.asObject0() ) ) ).asObject0(), const_str_plain_next ) ).asObject0() ) ).asObject0() ) );
                }
                tmp_tuple_unpack_3__element_1.assign1( UNPACK_NEXT( tmp_tuple_unpack_3__source_iter.asObject0(), 0 ) );
                tmp_tuple_unpack_3__element_2.assign1( UNPACK_NEXT( tmp_tuple_unpack_3__source_iter.asObject0(), 1 ) );
                tmp_tuple_unpack_3__element_3.assign1( UNPACK_NEXT( tmp_tuple_unpack_3__source_iter.asObject0(), 2 ) );
                UNPACK_ITERATOR_CHECK( tmp_tuple_unpack_3__source_iter.asObject0(), 3 );
                var_root.assign0( tmp_tuple_unpack_3__element_1.asObject0() );
                var_dirs.assign0( tmp_tuple_unpack_3__element_2.asObject0() );
                var_files.assign0( tmp_tuple_unpack_3__element_3.asObject0() );
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_7 = frame_guard.getLineNumber();
#endif

                _caught_7.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_tuple_unpack_3__source_iter.del( true );
            tmp_tuple_unpack_3__element_1.del( true );
            tmp_tuple_unpack_3__element_2.del( true );
            tmp_tuple_unpack_3__element_3.del( true );
#if PYTHON_VERSION < 300
            if ( _at_lineno_7 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_7 );
            }
#endif
            _caught_7.rethrow();
            // Final end
            frame_guard.setLineNumber( 104 );
            var_ok.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_re ), const_str_plain_compile ) ).asObject0(), const_str_digest_7c9343009160d9ecba419824dbf34e42 ) );
            frame_guard.setLineNumber( 106 );
            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_name ) ).asObject0(), const_str_plain_nt ) )
            {
                frame_guard.setLineNumber( 107 );
                var_ok.assign1( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_re ), const_str_plain_compile ) ).asObject0(), const_str_digest_20994cbfd23f11770242a7c9407b226c ) );
            }
            frame_guard.setLineNumber( 109 );
            {
                PyObjectTempKeeper1 call1;
                var_filename.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( const_str_empty, const_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( impl_genexpr_2_of_function_2_main_of_module_download( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ), var_ok ) ).asObject0() ) ) );
            }
            frame_guard.setLineNumber( 110 );
            PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( var_upload_dir_files.asObject0() ) ).asObject0() );
            PRINT_NEW_LINE_TO( NULL );
            frame_guard.setLineNumber( 111 );
            {
                PyObjectTempKeeper0 cmp1;
                if ( ( cmp1.assign( var_filename.asObject0() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), var_upload_dir_files.asObject0() ) ) )
                {
                    frame_guard.setLineNumber( 112 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_errors.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_0b8c2d31e38bbeef55ca9fef31707550, PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ) ).asObject0(), const_str_digest_fefcaaeeed395ad1f22a015a68cce6fd ) ).asObject0() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 114 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_messages.asObject0(), const_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_0b8c2d31e38bbeef55ca9fef31707550, PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_title ) ).asObject0() ) ).asObject0(), const_str_digest_f074720e9e59cd2410eb0dfd987e5ca9 ) ).asObject0() ) ) );
                    }
                    frame_guard.setLineNumber( 115 );
                    var_bestaudio.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( var_video.asObject0(), const_str_plain_getbestaudio ) ).asObject0() ) );
                    frame_guard.setLineNumber( 116 );
                    {
                        PyObjectTempKeeper1 call1;
                        DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( var_bestaudio.asObject0(), const_str_plain_download ) ), CALL_FUNCTION( call1.asObject0(), const_tuple_empty, PyObjectTemporary( MAKE_DICT1( var_q_folder.asObject0(), const_str_plain_filepath ) ).asObject0() ) ) );
                    }
                }
            }
        }
        frame_guard.setLineNumber( 119 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_LEN( var_messages.asObject0() ) ).asObject0() ) )
        {
            frame_guard.setLineNumber( 120 );
            {
                PyObjectTempKeeper1 call1;
                PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( const_str_digest_5af1b09265a9acb3a8decde36e7e0265, PyObjectTemporary( TO_STR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_os ), const_str_plain_path ) ).asObject0(), const_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), var_q_folder.asObject0() ) ) ).asObject0() ) ).asObject0() ) ).asObject0() ) ).asObject0() );
                PRINT_NEW_LINE_TO( NULL );
            }
        }
        frame_guard.setLineNumber( 121 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_LEN( var_errors.asObject0() ) ).asObject0() ) )
        {
            frame_guard.setLineNumber( 122 );
            PRINT_ITEM_TO( NULL, const_str_digest_e57545a94664deb3892ea6209348396f );
            PRINT_NEW_LINE_TO( NULL );
            frame_guard.setLineNumber( 123 );
            PyObjectTemporaryWithDel tmp_for_loop_3__for_iterator( MAKE_ITERATOR( var_errors.asObject0() ) );
            PythonExceptionKeeper _caught_8;
#if PYTHON_VERSION < 300
            int _at_lineno_8 = 0;
#endif


            try
            {
                // Tried block:
                while( true )
                {
                    frame_guard.setLineNumber( 123 );
                    PyObject *_tmp_unpack_9 = ITERATOR_NEXT( tmp_for_loop_3__for_iterator.asObject0() );

                    if ( _tmp_unpack_9 == NULL )
                    {
                        break;
                    }
                    tmp_for_loop_3__iter_value.assign1( _tmp_unpack_9 );
                    var_error.assign0( tmp_for_loop_3__iter_value.asObject0() );
                    frame_guard.setLineNumber( 124 );
                    PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( var_error.asObject0() ) ).asObject0() );
                    PRINT_NEW_LINE_TO( NULL );

                    CONSIDER_THREADING();
                }
            }
            catch ( PythonException &_exception )
            {
#if PYTHON_VERSION >= 300
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }
#else
                _at_lineno_8 = frame_guard.getLineNumber();
#endif

                _caught_8.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final block:
            tmp_for_loop_3__iter_value.del( true );
            tmp_for_loop_3__for_iterator.del( false );
#if PYTHON_VERSION < 300
            if ( _at_lineno_8 != 0 )
            {
               frame_guard.setLineNumber( _at_lineno_8 );
            }
#endif
            _caught_8.rethrow();
            // Final end
        }
        frame_guard.setLineNumber( 126 );
        PRINT_ITEM_TO( NULL, const_str_digest_fcd9395202ab8e10275a9e8090f07100 );
        PRINT_NEW_LINE_TO( NULL );
        frame_guard.setLineNumber( 127 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( GET_MODULE_VALUE0( const_str_plain_read_single_keypress ) ) );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = var_error.updateLocalsDict( var_bestaudio.updateLocalsDict( var_filename.updateLocalsDict( var_ok.updateLocalsDict( var_video.updateLocalsDict( var_json_video.updateLocalsDict( var_videos.updateLocalsDict( var_json_input.updateLocalsDict( var_playlistUrl.updateLocalsDict( var_id.updateLocalsDict( var_file.updateLocalsDict( var_i.updateLocalsDict( var_files.updateLocalsDict( var_dirs.updateLocalsDict( var_root.updateLocalsDict( var_q_folder.updateLocalsDict( var_q_id.updateLocalsDict( var_upload_dir_files.updateLocalsDict( var_errors.updateLocalsDict( var_messages.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_main_of_module_download )
        {
           Py_DECREF( frame_function_2_main_of_module_download );
           frame_function_2_main_of_module_download = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_main_of_module_download( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           args_given + kw_size
        );
#else
        ERROR_NO_ARGUMENTS_ALLOWED(
           self,
           kw_size > 0 ? kw : NULL,
           args_given
        );
#endif

        goto error_exit;
    }


    return impl_function_2_main_of_module_download( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_2_main_of_module_download( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0 )
    {
        return impl_function_2_main_of_module_download( self );
    }
    else
    {
        PyObject *result = fparse_function_2_main_of_module_download( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_2_main_of_module_download_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable closure_ok;
    PyObjectLocalParameterVariableNoDel par___iterator;
    PyObjectLocalVariable var_x;
    PyObjectTempVariable tmp_iter_value_0;
};

static void _context_generator_genexpr_1_of_function_2_main_of_module_download_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_2_main_of_module_download_t *_python_context = (struct _context_generator_genexpr_1_of_function_2_main_of_module_download_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_2_main_of_module_download_context( Nuitka_GeneratorObject *generator )
{
    try
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_2_main_of_module_download_t *_python_context = (_context_generator_genexpr_1_of_function_2_main_of_module_download_t *)generator->m_context;


        // Local variable inits
        _python_context->var_x.setVariableName( const_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_2_main_of_module_download = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_2_main_of_module_download ) )
        {
            if ( frame_genexpr_1_of_function_2_main_of_module_download )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_2_main_of_module_download" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_2_main_of_module_download );
            }

            frame_genexpr_1_of_function_2_main_of_module_download = MAKE_FRAME( codeobj_99d41e8655a826c23fa45e11a5189649, module_download );
        }

        Py_INCREF( frame_genexpr_1_of_function_2_main_of_module_download );
        generator->m_frame = frame_genexpr_1_of_function_2_main_of_module_download;

        Py_CLEAR( generator->m_frame->f_back );

        generator->m_frame->f_back = PyThreadState_GET()->frame;
        Py_INCREF( generator->m_frame->f_back );

        PyThreadState_GET()->frame = generator->m_frame;

        FrameGuardLight frame_guard( &generator->m_frame );

        // TODO: The inject of the exception through C++ is very non-optimal, this flag
        // now indicates only if the exception occurs initially as supposed, or during
        // life, this could and should be shortcut.
        bool traceback;

        try
        {
            // TODO: In case we don't raise exceptions ourselves, we would still have to do this, so
            // beware to not optimize this away for generators without a replacement.
            traceback = true;
            CHECK_EXCEPTION( generator );
            traceback = false;

            frame_guard.setLineNumber( 88 );
            PyObject *tmp_contraction_iter_0 = _python_context->par___iterator.asObject0();
            while( true )
            {
                frame_guard.setLineNumber( 88 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( tmp_contraction_iter_0 );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                _python_context->tmp_iter_value_0.assign1( _tmp_unpack_1 );
                _python_context->var_x.assign0( _python_context->tmp_iter_value_0.asObject0() );
                {
                    PyObjectTempKeeper1 call1;
                    YIELD( generator, INCREASE_REFCOUNT( ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->closure_ok.asObject0(), const_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), _python_context->var_x.asObject0() ) ) ).asObject0() ) ? _python_context->var_x.asObject0() : const_str_plain__ ) ) );
                }

                CONSIDER_THREADING();
            }
            tmp_contraction_iter_0 = NULL;

            PyErr_SetObject( PyExc_StopIteration, (PyObject *)NULL );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) );
            }
            else if ( traceback == false )
            {
                _exception.addTraceback( generator->m_frame );
            }
            _exception.toPython();

            // TODO: Moving this code is not allowed yet.
            generator->m_yielded = NULL;
        }
    }
    catch( ReturnValueException &e )
    {
        PyErr_SetObject( PyExc_StopIteration, e.getValue0() );
    }

    assert( ERROR_OCCURED() );

    // TODO: Won't return, we should tell the compiler about that.
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}

static PyObject *impl_genexpr_1_of_function_2_main_of_module_download( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &closure_ok )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_2_main_of_module_download_t *_python_context = new _context_generator_genexpr_1_of_function_2_main_of_module_download_t;
    _python_context->closure_ok.shareWith( closure_ok );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_2_main_of_module_download_context,
            const_str_angle_genexpr,
            codeobj_9fec124dfff479e63ead0aeecab27980,
            _python_context,
            _context_generator_genexpr_1_of_function_2_main_of_module_download_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->par___iterator.setVariableNameAndValue( const_str_plain___iterator, _python_par___iterator );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}



struct _context_generator_genexpr_2_of_function_2_main_of_module_download_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable closure_ok;
    PyObjectLocalParameterVariableNoDel par___iterator;
    PyObjectLocalVariable var_x;
    PyObjectTempVariable tmp_iter_value_0;
};

static void _context_generator_genexpr_2_of_function_2_main_of_module_download_destructor( void *context_voidptr )
{
    _context_generator_genexpr_2_of_function_2_main_of_module_download_t *_python_context = (struct _context_generator_genexpr_2_of_function_2_main_of_module_download_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_2_of_function_2_main_of_module_download_context( Nuitka_GeneratorObject *generator )
{
    try
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_2_of_function_2_main_of_module_download_t *_python_context = (_context_generator_genexpr_2_of_function_2_main_of_module_download_t *)generator->m_context;


        // Local variable inits
        _python_context->var_x.setVariableName( const_str_plain_x );

        // Actual function code.
        static PyFrameObject *frame_genexpr_2_of_function_2_main_of_module_download = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_2_of_function_2_main_of_module_download ) )
        {
            if ( frame_genexpr_2_of_function_2_main_of_module_download )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_2_of_function_2_main_of_module_download" );
#endif
                Py_DECREF( frame_genexpr_2_of_function_2_main_of_module_download );
            }

            frame_genexpr_2_of_function_2_main_of_module_download = MAKE_FRAME( codeobj_74e8551f8e7b975d4e00fd9fea7c295e, module_download );
        }

        Py_INCREF( frame_genexpr_2_of_function_2_main_of_module_download );
        generator->m_frame = frame_genexpr_2_of_function_2_main_of_module_download;

        Py_CLEAR( generator->m_frame->f_back );

        generator->m_frame->f_back = PyThreadState_GET()->frame;
        Py_INCREF( generator->m_frame->f_back );

        PyThreadState_GET()->frame = generator->m_frame;

        FrameGuardLight frame_guard( &generator->m_frame );

        // TODO: The inject of the exception through C++ is very non-optimal, this flag
        // now indicates only if the exception occurs initially as supposed, or during
        // life, this could and should be shortcut.
        bool traceback;

        try
        {
            // TODO: In case we don't raise exceptions ourselves, we would still have to do this, so
            // beware to not optimize this away for generators without a replacement.
            traceback = true;
            CHECK_EXCEPTION( generator );
            traceback = false;

            frame_guard.setLineNumber( 109 );
            PyObject *tmp_contraction_iter_0 = _python_context->par___iterator.asObject0();
            while( true )
            {
                frame_guard.setLineNumber( 109 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( tmp_contraction_iter_0 );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                _python_context->tmp_iter_value_0.assign1( _tmp_unpack_1 );
                _python_context->var_x.assign0( _python_context->tmp_iter_value_0.asObject0() );
                {
                    PyObjectTempKeeper1 call1;
                    YIELD( generator, INCREASE_REFCOUNT( ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->closure_ok.asObject0(), const_str_plain_match ) ), CALL_FUNCTION_WITH_ARGS1( call1.asObject0(), _python_context->var_x.asObject0() ) ) ).asObject0() ) ? _python_context->var_x.asObject0() : const_str_plain__ ) ) );
                }

                CONSIDER_THREADING();
            }
            tmp_contraction_iter_0 = NULL;

            PyErr_SetObject( PyExc_StopIteration, (PyObject *)NULL );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) );
            }
            else if ( traceback == false )
            {
                _exception.addTraceback( generator->m_frame );
            }
            _exception.toPython();

            // TODO: Moving this code is not allowed yet.
            generator->m_yielded = NULL;
        }
    }
    catch( ReturnValueException &e )
    {
        PyErr_SetObject( PyExc_StopIteration, e.getValue0() );
    }

    assert( ERROR_OCCURED() );

    // TODO: Won't return, we should tell the compiler about that.
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}

static PyObject *impl_genexpr_2_of_function_2_main_of_module_download( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &closure_ok )
{
    // Create context if any
    struct _context_generator_genexpr_2_of_function_2_main_of_module_download_t *_python_context = new _context_generator_genexpr_2_of_function_2_main_of_module_download_t;
    _python_context->closure_ok.shareWith( closure_ok );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_2_of_function_2_main_of_module_download_context,
            const_str_angle_genexpr,
            codeobj_0e2b2f2177b6c421f14a624df8ba61b8,
            _python_context,
            _context_generator_genexpr_2_of_function_2_main_of_module_download_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->par___iterator.setVariableNameAndValue( const_str_plain___iterator, _python_par___iterator );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}



static PyObject *MAKE_FUNCTION_function_1_read_single_keypress_of_module_download(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_read_single_keypress_of_module_download,
        dparse_function_1_read_single_keypress_of_module_download,
        const_str_plain_read_single_keypress,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a848d1e0b81cc8451c8c715b735cee86,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module_download,
        const_str_digest_b7e82b8ce1278bfdee92072f19773b09
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_main_of_module_download(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_main_of_module_download,
        dparse_function_2_main_of_module_download,
        const_str_plain_main,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f3fed523177784f420bc2c39632dd672,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        module_download,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_download =
{
    PyModuleDef_HEAD_INIT,
    "download",   /* m_name */
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

MOD_INIT_DECL( download )
{

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_download );
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

    // puts( "in initdownload" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_download = Py_InitModule4(
        "download",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_download = PyModule_Create( &mdef_download );
#endif

    moduledict_download = (PyDictObject *)((PyModuleObject *)module_download)->md_dict;

    assertObject( module_download );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_download, module_download );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_download );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( module_download != module___main__ )
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
    UPDATE_STRING_DICT0( moduledict_download, (Nuitka_StringObject *)const_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( moduledict_download, (Nuitka_StringObject *)const_str_plain___file__, const_str_digest_4c3c5e402647eecd1a6631c91b0c4baa );
    PyFrameObject *frame_module_download = MAKE_FRAME( codeobj_16e5534e59b25685fb91a38beb4bf6b3, module_download );

    FrameGuard frame_guard( frame_module_download );
    try
    {
        assert( Py_REFCNT( frame_module_download ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_termios, IMPORT_MODULE( const_str_plain_termios, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_fcntl, IMPORT_MODULE( const_str_plain_fcntl, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_sys, IMPORT_MODULE( const_str_plain_sys, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_os, IMPORT_MODULE( const_str_plain_os, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_re, IMPORT_MODULE( const_str_plain_re, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_json, IMPORT_MODULE( const_str_plain_json, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_urllib2, IMPORT_MODULE( const_str_plain_urllib2, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( GET_MODULE_VALUE0( const_str_plain_sys ), const_str_plain_path ) ).asObject0(), const_str_plain_append ) ).asObject0(), const_str_digest_0374ec857381230fa83049643ce3cdee ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_pafy, IMPORT_MODULE( const_str_plain_pafy, ((PyModuleObject *)module_download)->md_dict, ((PyModuleObject *)module_download)->md_dict, Py_None, const_int_neg_1 ) );
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

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)module_download)->md_dict );
#endif

        // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT0( moduledict_download, (Nuitka_StringObject *)const_str_plain_debug, Py_True );
    UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_read_single_keypress, MAKE_FUNCTION_function_1_read_single_keypress_of_module_download(  ) );
    UPDATE_STRING_DICT1( moduledict_download, (Nuitka_StringObject *)const_str_plain_main, MAKE_FUNCTION_function_2_main_of_module_download(  ) );

   return MOD_RETURN_VALUE( module_download );
}
