#ifndef TREE_SITTER_TT_H_
#define TREE_SITTER_TT_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_tt(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_TT_H_
