// FUN_016782c4 @ 016782c4 size=972 calls_out=1 calls_in=0
// strings: https://json-schema.org/draft/2020-12/meta/content{   '$schema': 'https://json-schema.org/draft/2019-09/schema';   '$id': 'https://json-schema.org/draft/2019-09/meta/format';   '$vocabulary': {     'https://json-schema.org/draft/2019-09/vocab/format': true   };   '$recursiveAnchor': true;    'title': 'Format vocabulary meta-schema';   'type': ['object'; 'boolean'];   'properties': {     'format': {'type': 'string'}   } } {   '$schema': 'https://json-schema.org/draft/2019-09/schema';   '$id': 'https://json-schema.org/draft/2019-09/meta/content';   '$vocabulary': {     'https://json-schema.org/draft/2019-09/vocab/content': true   };   '$recursiveAnchor': true;    'title': 'Content vocabulary meta-schema';    'type': ['object'; 'boolean'];   'properties': {     'contentMediaType': {'type': 'string'};     'contentEncoding': {'type': 'string'};     'contentSchema': {'$recursiveRef': '#'}   } }  | https://json-schema.org/draft/2020-12/meta/format-annotation | https://json-schema.org/draft/2020-12/meta/unevaluated | https://json-schema.org/draft/2020-12/meta/validation | https://json-schema.org/draft/2020-12/schema | https://json-schema.org/draft/2020-12/meta/meta-data

void FUN_016782c4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *local_2c;
  undefined4 **local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d4ef38 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4ef38;
    FUN_019a768c(&DAT_01d4ef38,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar1 = DAT_01d4ef3c;
  DataMemoryBarrier(0xb);
  if (DAT_01d4ef48 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4ef48;
    FUN_019a768c(&DAT_01d4ef48,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar2 = DAT_01d4ef4c;
  DataMemoryBarrier(0xb);
  if (DAT_01d4efb8 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4efb8;
    FUN_019a768c(&DAT_01d4efb8,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar4 = DAT_01d4efbc;
  DataMemoryBarrier(0xb);
  if (DAT_01d4f084 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4f084;
    FUN_019a768c(&DAT_01d4f084,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar6 = DAT_01d4f088;
  DataMemoryBarrier(0xb);
  if (DAT_01d4efc0 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4efc0;
    FUN_019a768c(&DAT_01d4efc0,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar5 = DAT_01d4efc4;
  DataMemoryBarrier(0xb);
  if (DAT_01d4efa0 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4efa0;
    FUN_019a768c(&DAT_01d4efa0,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar3 = DAT_01d4efa4;
  DataMemoryBarrier(0xb);
  if (DAT_01d4f08c != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4f08c;
    FUN_019a768c(&DAT_01d4f08c,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  iVar7 = DAT_01d4f090;
  DataMemoryBarrier(0xb);
  if (DAT_01d4ef60 != 0) {
    local_28 = &local_2c;
    local_2c = &DAT_01d4ef60;
    FUN_019a768c(&DAT_01d4ef60,1,&local_28,&DAT_01d0736c,&DAT_01d293e0);
  }
  param_1[0x16] = 0x32;
  param_1[0x14] = iVar7 + 8;
  param_1[0x13] = 0x3c;
  param_1[0x11] = iVar3 + 8;
  param_1[0x10] = 0x34;
  iVar3 = DAT_01d4ef64;
  param_1[0x15] =
       "https://json-schema.org/draft/2020-12/meta/content{\n  \"$schema\": \"https://json-schema.org/draft/2019-09/schema\",\n  \"$id\": \"https://json-schema.org/draft/2019-09/meta/format\",\n  \"$vocabulary\": {\n    \"https://json-schema.org/draft/2019-09/vocab/format\": true\n  },\n  \"$recursiveAnchor\": true,\n\n  \"title\": \"Format vocabulary meta-schema\",\n  \"type\": [\"object\", \"boolean\"],\n  \"properties\": {\n    \"format\": {\"type\": \"string\"}\n  }\n}\n{\n  \"$schema\": \"https://json-schema.org/draft/2019-09/schema\",\n  \"$id\": \"https://json-schema.org/draft/2019-09/meta/content\",\n  \"$vocabulary\": {\n    \"https://json-schema.org/draft/2019-09/vocab/content\": true\n  },\n  \"$recursiveAnchor\": true,\n\n  \"title\": \"Content vocabulary meta-schema\",\n\n  \"type\": [\"object\", \"boolean\"],\n  \"properties\": {\n    \"contentMediaType\": {\"type\": \"string\"},\n    \"contentEncoding\": {\"type\": \"string\"},\n    \"contentSchema\": {\"$recursiveRef\": \"#\"}\n  }\n}\n"
  ;
  param_1[0x12] = "https://json-schema.org/draft/2020-12/meta/format-annotation";
  param_1[8] = iVar4 + 8;
  param_1[9] = "https://json-schema.org/draft/2020-12/meta/unevaluated";
  param_1[10] = 0x36;
  param_1[0xb] = iVar6 + 8;
  param_1[0xd] = 0x35;
  param_1[0xc] = "https://json-schema.org/draft/2020-12/meta/validation";
  param_1[0xe] = iVar5 + 8;
  *param_1 = "https://json-schema.org/draft/2020-12/schema";
  param_1[1] = 0x2c;
  param_1[0xf] = "https://json-schema.org/draft/2020-12/meta/meta-data";
  param_1[4] = 0x2f;
  param_1[5] = iVar2 + 8;
  param_1[6] = "https://json-schema.org/draft/2020-12/meta/applicator";
  param_1[7] = 0x35;
  param_1[2] = iVar1 + 8;
  param_1[3] = "https://json-schema.org/draft/2020-12/meta/core";
  param_1[0x17] = iVar3 + 8;
  return;
}

