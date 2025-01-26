import XCTest
import SwiftTreeSitter
import TreeSitterTt

final class TreeSitterTtTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tt())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tt grammar")
    }
}
