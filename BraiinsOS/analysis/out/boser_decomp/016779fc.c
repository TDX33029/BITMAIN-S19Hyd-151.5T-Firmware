// FUN_016779fc @ 016779fc size=172 calls_out=4 calls_in=0
// strings: {   '$schema': 'https://json-schema.org/draft/2019-09/schema';   '$id': 'https://json-schema.org/draft/2019-09/meta/validation';   '$vocabulary': {     'https://json-schema.org/draft/2019-09/vocab/validation': true   };   '$recursiveAnchor': true;    'title': 'Validation vocabulary meta-schema';   'type': ['object'; 'boolean'];   'properties': {     'multipleOf': {       'type': 'number';       'exclusiveMinimum': 0     };     'maximum': {       'type': 'number'     };     'exclusiveMaximum': {       'type': 'number'     };     'minimum': {       'type': 'number'     };     'exclusiveMinimum': {       'type': 'number'     };     'maxLength': {'$ref': '#/$defs/nonNegativeInteger'};     'minLength': {'$ref': '#/$defs/nonNegativeIntegerDefault0'};     'pattern': {       'type': 'string';       'format': 'regex'     };     'maxItems': {'$ref': '#/$defs/nonNegativeInteger'};     'minItems': {'$ref': '#/$defs/nonNegativeIntegerDefault0'};     'uniqueItems': {       'type': 'boolean';       'default': false     };     'maxContains': {'$ref': '#/$defs/nonNegativeInteger'};     'minContains': {       '$ref': '#/$defs/nonNegativeInteger';       'default': 1     };     'maxProperties': {'$ref': '#/$defs/nonNegativeInteger'};     'minProperties': {'$ref': '#/$defs/nonNegativeIntegerDefault0'};     'required': {'$ref': '#/$defs/stringArray'};     'dependentRequired': {       'type': 'object';       'additionalProperties': {         '$ref': '#/$defs/stringArray'       }     };     'const': true;     'enum': {       'type': 'array';       'items': true     };     'type': {       'anyOf': [         {'$ref': '#/$defs/simpleTypes'};         {           'type': 'array';           'items': {'$ref': '#/$defs/simpleTypes'};           'minItems': 1;           'uniqueItems': true         }       ]     }   };   '$defs': {     'nonNegativeInteger': {       'type': 'integer';       'minimum': 0     };     'nonNegativeIntegerDefault0': {       '$ref': '#/$defs/nonNegativeInteger';       'default': 0     };     'simpleTypes': {       'enum': ['array'; 'boolean'; 'integer'; 'null'; 'number'; 'object'; 'string']     };     'stringArray': {       'type': 'array';       'items': {'type': 'string'};       'uniqueItems': true;       'default': []     }   } }  | Invalid schema

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016779fc(void)

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
               "{\n  \"$schema\": \"https://json-schema.org/draft/2019-09/schema\",\n  \"$id\": \"https://json-schema.org/draft/2019-09/meta/validation\",\n  \"$vocabulary\": {\n    \"https://json-schema.org/draft/2019-09/vocab/validation\": true\n  },\n  \"$recursiveAnchor\": true,\n\n  \"title\": \"Validation vocabulary meta-schema\",\n  \"type\": [\"object\", \"boolean\"],\n  \"properties\": {\n    \"multipleOf\": {\n      \"type\": \"number\",\n      \"exclusiveMinimum\": 0\n    },\n    \"maximum\": {\n      \"type\": \"number\"\n    },\n    \"exclusiveMaximum\": {\n      \"type\": \"number\"\n    },\n    \"minimum\": {\n      \"type\": \"number\"\n    },\n    \"exclusiveMinimum\": {\n      \"type\": \"number\"\n    },\n    \"maxLength\": {\"$ref\": \"#/$defs/nonNegativeInteger\"},\n    \"minLength\": {\"$ref\": \"#/$defs/nonNegativeIntegerDefault0\"},\n    \"pattern\": {\n      \"type\": \"string\",\n      \"format\": \"regex\"\n    },\n    \"maxItems\": {\"$ref\": \"#/$defs/nonNegativeInteger\"},\n    \"minItems\": {\"$ref\": \"#/$defs/nonNegativeIntegerDefault0\"},\n    \"uniqueItems\": {\n      \"type\": \"boolean\",\n      \"default\": false\n    },\n    \"maxContains\": {\"$ref\": \"#/$defs/nonNegativeInteger\"},\n    \"minContains\": {\n      \"$ref\": \"#/$defs/nonNegativeInteger\",\n      \"default\": 1\n    },\n    \"maxProperties\": {\"$ref\": \"#/$defs/nonNegativeInteger\"},\n    \"minProperties\": {\"$ref\": \"#/$defs/nonNegativeIntegerDefault0\"},\n    \"required\": {\"$ref\": \"#/$defs/stringArray\"},\n    \"dependentRequired\": {\n      \"type\": \"object\",\n      \"additionalProperties\": {\n        \"$ref\": \"#/$defs/stringArray\"\n      }\n    },\n    \"const\": true,\n    \"enum\": {\n      \"type\": \"array\",\n      \"items\": true\n    },\n    \"type\": {\n      \"anyOf\": [\n        {\"$ref\": \"#/$defs/simpleTypes\"},\n        {\n          \"type\": \"array\",\n          \"items\": {\"$ref\": \"#/$defs/simpleTypes\"},\n          \"minItems\": 1,\n          \"uniqueItems\": true\n        }\n      ]\n    }\n  },\n  \"$defs\": {\n    \"nonNegativeInteger\": {\n      \"type\": \"integer\",\n      \"minimum\": 0\n    },\n    \"nonNegativeIntegerDefault0\": {\n      \"$ref\": \"#/$defs/nonNegativeInteger\",\n      \"default\": 0\n    },\n    \"simpleTypes\": {\n      \"enum\":..." /* TRUNCATED STRING LITERAL */
               ,0x8d8);
  if ((char)local_50 == '\x06') {
    local_38 = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Invalid schema",0xe,&local_38,&DAT_01d073a8,&DAT_01d072d8);
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

