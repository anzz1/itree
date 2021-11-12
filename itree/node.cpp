#include "node.h"
#include "common.h"
#include "node_utils.h"
#include "fmt.h"

string Node::__str__() {
    return string_format("[🟢 n={},s={:.2f},e={:.2f},x={},c={}]", name, start, end, extra.size(), nodes.size());
}
string Node::__repr__() { return __str__(); }
double Node::span() { return end - start; }
void Node::append(const shared_ptr<Node> &a) { this->nodes.emplace_back(a); }
