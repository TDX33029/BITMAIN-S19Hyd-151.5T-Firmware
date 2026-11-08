// FUN_00efe13c @ 00efe13c size=132 calls_out=1 calls_in=15
// strings: 

void FUN_00efe13c(int param_1,undefined1 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte local_23;
  byte local_22;
  undefined1 local_21;
  
  uVar1 = param_1 << 3;
  iVar2 = 10;
  do {
    if (uVar1 < 0x80) {
      local_22 = (byte)uVar1;
      FUN_01284394(param_3,&local_22,1);
      break;
    }
    local_23 = (byte)uVar1 | 0x80;
    uVar1 = 1;
    FUN_01284394(param_3,&local_23,1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_21 = param_2;
  FUN_01284394(param_3,&local_21,1);
  return;
}

