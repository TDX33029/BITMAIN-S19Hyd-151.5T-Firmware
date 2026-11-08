// FUN_00efc900 @ 00efc900 size=252 calls_out=3 calls_in=12
// strings: 

void FUN_00efc900(char param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
                 undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  byte local_22;
  char local_21;
  
  local_22 = param_1 << 3 | 2;
  FUN_01284394(param_6,&local_22,1);
  local_21 = '\0';
  cVar1 = '\0';
  if (param_3 != 0 || param_4 != 0) {
    uVar2 = LZCOUNT(param_3 | 1) | 0x20;
    if (param_4 != 0) {
      uVar2 = LZCOUNT(param_4);
    }
    cVar1 = (char)((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
  }
  if (param_5 != 0) {
    uVar2 = LZCOUNT(param_5 | 1) | 0x20;
    if ((int)param_5 < 0) {
      uVar2 = LZCOUNT((int)param_5 >> 0x1f);
    }
    local_21 = (char)((uVar2 ^ 0x3f) * 9 + 0x49 >> 6) + '\x01';
  }
  local_21 = local_21 + cVar1;
  FUN_01284394(param_6,&local_21,1);
  if (param_3 != 0 || param_4 != 0) {
    FUN_01016968(param_3,param_4,param_6);
  }
  if (param_5 == 0) {
    return;
  }
  FUN_00efca88(2,param_5,param_6);
  return;
}

