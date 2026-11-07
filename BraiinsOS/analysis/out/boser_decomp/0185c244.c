// FUN_0185c244 @ 0185c244 size=188 calls_out=1 calls_in=0
// strings:          'then': { '$dynamicRef': '#meta' };         'else': { '$dynamicRef': '#meta' };         'allOf': { '$ref': '#/$defs/schemaArray' };         'anyOf': { '$ref': '#/$defs/schemaArray' };         'oneOf': { '$ref': '#/$defs/schemaArray' };         'not': { '$dynamicRef': '#meta' }     };     '$defs': {         'schemaArray': {             'type': 'array';             'minItems': 1;             'items': { '$dynamicRef': '#meta' }         }     } }  | WebPkiServer

void FUN_0185c244(int param_1,undefined4 param_2)

{
  int local_44;
  undefined *local_40;
  int local_3c;
  undefined *local_38;
  int local_34;
  undefined *local_30;
  int local_2c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  int *local_1c;
  undefined *local_18;
  int local_14;
  
  local_1c = &local_14;
  local_24 = param_1 + 0x22;
  local_2c = param_1 + 0x21;
  local_34 = param_1 + 0x20;
  local_44 = param_1 + 0xc;
  local_18 = &DAT_01d25cc0;
  local_14 = param_1 + 0x10;
  local_40 = &DAT_01d20644;
  local_20 = &DAT_01d20684;
  local_28 = &DAT_01d20674;
  local_30 = &DAT_01d20664;
  local_38 = &DAT_01d20654;
  local_3c = param_1;
  FUN_01304100(param_2,"WebPkiServer",0x14,&DAT_01d25cd0,6,&local_44,6);
  return;
}

