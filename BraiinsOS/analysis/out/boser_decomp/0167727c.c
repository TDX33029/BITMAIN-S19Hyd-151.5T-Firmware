// FUN_0167727c @ 0167727c size=172 calls_out=4 calls_in=0
// strings: {   '$schema': 'https://json-schema.org/draft/2019-09/schema';   '$id': 'https://json-schema.org/draft/2019-09/meta/core';   '$vocabulary': {     'https://json-schema.org/draft/2019-09/vocab/core': true   };   '$recursiveAnchor': true;    'title': 'Core vocabulary meta-schema';   'type': ['object'; 'boolean'];   'properties': {     '$id': {       'type': 'string';       'format': 'uri-reference';       '$comment': 'Non-empty fragments not allowed.';       'pattern': '^[^#]*#?$'     };     '$schema': {       'type': 'string';       'format': 'uri'     };     '$anchor': {       'type': 'string';       'pattern': '^[A-Za-z][-A-Za-z0-9.:_]*$'     };     '$ref': {       'type': 'string';       'format': 'uri-reference'     };     '$recursiveRef': {       'type': 'string';       'format': 'uri-reference'     };     '$recursiveAnchor': {       'type': 'boolean';       'default': false     };     '$vocabulary': {       'type': 'object';       'propertyNames': {         'type': 'string';         'format': 'uri'       };       'additionalProperties': {         'type': 'boolean'       }     };     '$comment': {       'type': 'string'     };     '$defs': {       'type': 'object';       'additionalProperties': {'$recursiveRef': '#'};       'default': {}     }   } }  | Invalid schema

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0167727c(void)

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
               "{\n  \"$schema\": \"https://json-schema.org/draft/2019-09/schema\",\n  \"$id\": \"https://json-schema.org/draft/2019-09/meta/core\",\n  \"$vocabulary\": {\n    \"https://json-schema.org/draft/2019-09/vocab/core\": true\n  },\n  \"$recursiveAnchor\": true,\n\n  \"title\": \"Core vocabulary meta-schema\",\n  \"type\": [\"object\", \"boolean\"],\n  \"properties\": {\n    \"$id\": {\n      \"type\": \"string\",\n      \"format\": \"uri-reference\",\n      \"$comment\": \"Non-empty fragments not allowed.\",\n      \"pattern\": \"^[^#]*#?$\"\n    },\n    \"$schema\": {\n      \"type\": \"string\",\n      \"format\": \"uri\"\n    },\n    \"$anchor\": {\n      \"type\": \"string\",\n      \"pattern\": \"^[A-Za-z][-A-Za-z0-9.:_]*$\"\n    },\n    \"$ref\": {\n      \"type\": \"string\",\n      \"format\": \"uri-reference\"\n    },\n    \"$recursiveRef\": {\n      \"type\": \"string\",\n      \"format\": \"uri-reference\"\n    },\n    \"$recursiveAnchor\": {\n      \"type\": \"boolean\",\n      \"default\": false\n    },\n    \"$vocabulary\": {\n      \"type\": \"object\",\n      \"propertyNames\": {\n        \"type\": \"string\",\n        \"format\": \"uri\"\n      },\n      \"additionalProperties\": {\n        \"type\": \"boolean\"\n      }\n    },\n    \"$comment\": {\n      \"type\": \"string\"\n    },\n    \"$defs\": {\n      \"type\": \"object\",\n      \"additionalProperties\": {\"$recursiveRef\": \"#\"},\n      \"default\": {}\n    }\n  }\n}\n"
               ,0x4f9);
  if ((char)local_50 == '\x06') {
    local_38 = local_4c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("Invalid schema",0xe,&local_38,&DAT_01d073a8,&DAT_01d07258);
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

