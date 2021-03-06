//
// Created by Rexfield on 2018/5/2.
//

#ifndef FTRPC_GENTS_H
#define FTRPC_GENTS_H

#include "../ast_tree.h"
#include "../lex.h"
#include "GenUtils.h"

bool GenerateTypeScript(std::unique_ptr<RootNode> &document, TokenManage &tokenSystem, TypeManage &typeSystem, const char *prefix);

#endif //FTRPC_GENTS_H
