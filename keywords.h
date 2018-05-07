//
// Created by Rexfield on 2018/4/27.
//

#ifdef TYPE
    TYPE(struct)
    TYPE(void)
    TYPE(int)
    TYPE(string)
    TYPE(float)
    TYPE(bool)
	TYPE(any)
#   undef TYPE
#else
#   error You must define TYPE() before include keywords.h
#endif

#ifdef KEYWD
    KEYWD(version)
    KEYWD(module)
#   undef KEYWD
#else
#   error You must define KEYWD() before include keywords.h
#endif

