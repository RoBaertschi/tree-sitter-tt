package tree_sitter_tt_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tt "github.com/robaertschi/tree-sitter-tt/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tt.Language())
	if language == nil {
		t.Errorf("Error loading Tt grammar")
	}
}
