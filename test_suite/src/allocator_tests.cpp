// Copyright 2013 Daniel Parker
// Distributed under Boost license

#include <boost/test/unit_test.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "jsoncons/json.hpp"
#include "jsoncons/json_serializer.hpp"
#include <sstream>
#include <vector>
#include <utility>
#include <ctime>
#include <boost/pool/pool_alloc.hpp>

using jsoncons::basic_json;
using std::string;

BOOST_AUTO_TEST_CASE(test_allocator)
{
    basic_json<char, boost::pool_allocator<void>> o;

    o.set("field1",10.0);
    o.set("field2",20.0);
    o.set("field3","Three");

	string s = o["field3"].as<string>();

    std::cout << o << std::endl;
}

