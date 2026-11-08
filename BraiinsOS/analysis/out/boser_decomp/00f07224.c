// FUN_00f07224 @ 00f07224 size=296 calls_out=2 calls_in=1
// strings: 

void FUN_00f07224(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  
  iVar2 = 10;
  uVar1 = param_1 << 3 | 2;
  do {
    if (uVar1 >> 7 == 0) {
      local_23 = (byte)uVar1;
      FUN_01284394(param_4,&local_23,1);
      break;
    }
    local_24 = (byte)uVar1 | 0x80;
    FUN_01284394(param_4,&local_24,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_3 + ((LZCOUNT(param_3 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + 1;
  }
  iVar2 = 10;
  do {
    if (uVar1 >> 7 == 0) {
      local_21 = (byte)uVar1;
      FUN_01284394(param_4,&local_21,1);
      break;
    }
    local_22 = (byte)uVar1 | 0x80;
    FUN_01284394(param_4,&local_22,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  if (param_3 == 0) {
    return;
  }
  FUN_01016f10(1,param_2,param_3,param_4);
  return;
}

