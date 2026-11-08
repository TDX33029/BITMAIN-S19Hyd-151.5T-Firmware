// FUN_00efe06c @ 00efe06c size=208 calls_out=2 calls_in=7
// strings: 

void FUN_00efe06c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  byte in_Q;
  double in_d0;
  byte local_23;
  byte local_22;
  undefined1 local_21;
  
  iVar2 = 10;
  uVar1 = param_1 << 3 | 2;
  do {
    if (uVar1 >> 7 == 0) {
      local_22 = (byte)uVar1;
      FUN_01284394(param_2,&local_22,1);
      break;
    }
    local_23 = (byte)uVar1 | 0x80;
    FUN_01284394(param_2,&local_23,1);
    iVar2 = iVar2 + -1;
    uVar1 = uVar1 >> 7;
  } while (iVar2 != 0);
  local_21 = 0;
  if (in_d0 != 0.0) {
    local_21 = 9;
  }
  FUN_01284394(param_2,&local_21,1);
  if ((((byte)((in_d0 == 0.0) << 3 | in_Q) & 0x1f) >> 3 & 1) == 0) {
    FUN_01016b28(1,param_2);
    return;
  }
  return;
}

