struct Type;
static Type t;
/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Type",
      "instantiations": [0],
      "uses": ["1:8", "*2:8"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:type_usage_declare_static.cc@t",
      "short_name": "t",
      "qualified_name": "t",
      "definition": "2:13",
      "variable_type": 0,
      "uses": ["2:13"]
    }]
}
*/
