// FUN_00f07500 @ 00f07500 size=228 calls_out=2 calls_in=0
// strings: 

void FUN_00f07500(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte local_23;
  byte local_22;
  char local_21;
  
  iVar2 = 10;
  uVar1 = param_1 << 3 | 2;
  do {
    if (uVar1 >> 7 == 0) {
      local_22 = (byte)uVar1;
      FUN_01284394(param_3,&local_22,1);
      break;
    }
    local_23 = (byte)uVar1 | 0x80;
    FUN_01284394(param_3,&local_23,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  if (param_2 == 0) {
    local_21 = '\0';
    FUN_01284394(param_3,&local_21,1);
    return;
  }
  local_21 = (char)((LZCOUNT(param_2 | 1) ^ 0x1fU) * 9 + 0x49 >> 6) + '\x01';
  FUN_01284394(param_3,&local_21,1);
  FUN_00efc9fc(1,param_2,param_3);
  return;
}

