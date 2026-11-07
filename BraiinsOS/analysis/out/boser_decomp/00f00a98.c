// FUN_00f00a98 @ 00f00a98 size=160 calls_out=2 calls_in=1
// strings: 

void FUN_00f00a98(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 local_23;
  byte local_22;
  byte local_21;
  
  iVar2 = 10;
  local_23 = 10;
  FUN_01284394(param_3,&local_23,1);
  uVar1 = param_2;
  do {
    if (uVar1 >> 7 == 0) {
      local_21 = (byte)uVar1;
      FUN_01284394(param_3,&local_21,1);
      break;
    }
    local_22 = (byte)uVar1 | 0x80;
    FUN_01284394(param_3,&local_22,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  FUN_01aa40b4(param_3,param_1,param_2);
  return;
}

