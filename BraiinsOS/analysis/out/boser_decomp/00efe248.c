// FUN_00efe248 @ 00efe248 size=176 calls_out=2 calls_in=10
// strings: 

void FUN_00efe248(char param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 extraout_r1;
  byte local_1a;
  char local_19;
  
  local_1a = param_1 << 3 | 2;
  FUN_01284394(param_5,&local_1a,1);
  if (param_3 == 0 && param_4 == 0) {
    local_19 = '\0';
    FUN_01284394(param_5,&local_19,1);
    return;
  }
  uVar1 = LZCOUNT(param_3 | 1) | 0x20;
  if (param_4 != 0) {
    uVar1 = LZCOUNT(param_4);
  }
  local_19 = (char)((uVar1 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
  FUN_01284394(param_5,&local_19,1);
  FUN_00efe2f8(1,extraout_r1,param_3,param_4);
  return;
}

