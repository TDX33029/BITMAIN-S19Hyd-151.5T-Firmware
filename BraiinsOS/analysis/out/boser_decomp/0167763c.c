// FUN_0167763c @ 0167763c size=172 calls_out=4 calls_in=0
// strings: {     '$schema': 'https://json-schema.org/draft/2020-12/schema';     '$id': 'https://json-schema.org/draft/2020-12/meta/meta-data';     '$vocabulary': {         'https://json-schema.org/draft/2020-12/vocab/meta-data': true     };     '$dynamicAnchor': 'meta';      'title': 'Meta-data vocabulary meta-schema';      'type': ['object'; 'boolean'];     'properties': {         'title': {             'type': 'string'         };         'description': {             'type': 'string'         };         'default': true;         'deprecated': {             'type': 'boolean';             'default': false         };         'readOnly': {             'type': 'boolean';             'default': false         };         'writeOnly': {             'type': 'boolean';             'default': false         };         'examples': {             'type': 'array';             'items': true         }     } } {   '$schema': 'https://json-schema.org/draft/2019-09/schema';   '$id': 'https://json-schema.org/draft/2019-09/meta/applicator';   '$vocabulary': {     'https://json-schema.org/draft/2019-09/vocab/applicator': true   };   '$recursiveAnchor': true;    'title': 'Applicator vocabulary meta-schema';   'type': ['object'; 'boolean'];   'properties': {     'additionalItems': {'$recursiveRef': '#'};     'unevaluatedItems': {'$recursiveRef': '#'};     'items': {       'anyOf': [{'$recursiveRef': '#'}; {'$ref': '#/$defs/schemaArray'}]     };     'contains': {'$recursiveRef': '#'};     'additionalProperties': {'$recursiveRef': '#'};     'unevaluatedProperties': {'$recursiveRef': '#'};     'properties': {       'type': 'object';       'additionalProperties': {'$recursiveRef': '#'};       'default': {}     };     'patternProperties': {       'type': 'object';       'additionalProperties': {'$recursiveRef': '#'};       'propertyNames': {'format': 'regex'};       'default': {}     };     'dependentSchemas': {       'type': 'object';       'additionalProperties': {         '$recursiveRef': '#'       }     };     'propertyNames': {'$recursiveRef': '#'};     'if': {'$recursiveRef': '#'};     'then': {'$recursiveRef': '#'};     'else': {'$recursiveRef': '#'};     'allOf': {'$ref': '#/$defs/schemaArray'};     'anyOf': {'$ref': '#/$defs/schemaArray'};     'oneOf': {'$ref': '#/$defs/schemaArray'};     'not': {'$recursiveRef': '#'}   };   '$defs': {     'schemaArray': {       'type': 'array';       'minItems': 1;       'items': {'$recursiveRef': '#'}     }   } }  | Invalid schema

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0167763c(void)

{
  undefined4 *puVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_016733c4(&local_50,
               "{\n    \"$schema\": \"https://json-schema.org/draft/2020-12/schema\",\n    \"$id\": \"https://json-schema.org/draft/2020-12/meta/meta-data\",\n    \"$vocabulary\": {\n        \"https://json-schema.org/draft/2020-12/vocab/meta-data\": true\n    },\n    \"$dynamicAnchor\": \"meta\",\n\n    \"title\": \"Meta-data vocabulary meta-schema\",\n\n    \"type\": [\"object\", \"boolean\"],\n    \"properties\": {\n        \"title\": {\n            \"type\": \"string\"\n        },\n        \"description\": {\n            \"type\": \"string\"\n        },\n        \"default\": true,\n        \"deprecated\": {\n            \"type\": \"boolean\",\n            \"default\": false\n        },\n        \"readOnly\": {\n            \"type\": \"boolean\",\n            \"default\": false\n        },\n        \"writeOnly\": {\n            \"type\": \"boolean\",\n            \"default\": false\n        },\n        \"examples\": {\n            \"type\": \"array\",\n            \"items\": true\n        }\n    }\n}\n{\n  \"$schema\": \"https://json-schema.org/draft/2019-09/schema\",\n  \"$id\": \"https://json-schema.org/draft/2019-09/meta/applicator\",\n  \"$vocabulary\": {\n    \"https://json-schema.org/draft/2019-09/vocab/applicator\": true\n  },\n  \"$recursiveAnchor\": true,\n\n  \"title\": \"Applicator vocabulary meta-schema\",\n  \"type\": [\"object\", \"boolean\"],\n  \"properties\": {\n    \"additionalItems\": {\"$recursiveRef\": \"#\"},\n    \"unevaluatedItems\": {\"$recursiveRef\": \"#\"},\n    \"items\": {\n      \"anyOf\": [{\"$recursiveRef\": \"#\"}, {\"$ref\": \"#/$defs/schemaArray\"}]\n    },\n    \"contains\": {\"$recursiveRef\": \"#\"},\n    \"additionalProperties\": {\"$recursiveRef\": \"#\"},\n    \"unevaluatedProperties\": {\"$recursiveRef\": \"#\"},\n    \"properties\": {\n      \"type\": \"object\",\n      \"additionalProperties\": {\"$recursiveRef\": \"#\"},\n      \"default\": {}\n    },\n    \"patternProperties\": {\n      \"type\": \"object\",\n      \"additionalProperties\": {\"$recursiveRef\": \"#\"},\n      \"propertyNames\": {\"format\": \"regex\"},\n      \"default\": {}\n    },\n    \"dependentSchemas\": {\n      \"type\": \"object\",\n      \"additionalProperties\": {\n        \"$recursiveRef\": \"#\"\n      }\n    },\n    \"propertyNames\": {\"$recursiveRef\": \"#\"},\n ..." /* TRUNCATED STRING LITERAL */
               ,0x37c);
  if ((char)local_50 == '\x06') {
    local_38 = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Invalid schema",0xe,&local_38,&DAT_01d073a8,&DAT_01d072b8);
  }
  local_30 = local_50;
  uStack_2c = local_4c;
  local_28 = uStack_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_34 = 1;
  local_38 = 1;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x20);
  }
  *puVar1 = local_38;
  puVar1[1] = local_34;
  puVar1[2] = local_30;
  puVar1[3] = uStack_2c;
  puVar1[4] = local_28;
  puVar1[5] = uStack_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  return;
}

