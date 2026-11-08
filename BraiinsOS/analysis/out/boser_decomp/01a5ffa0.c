// FUN_01a5ffa0 @ 01a5ffa0 size=188 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01a5ffa0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) == 0) {
      iVar1 = FUN_012fd02c(param_1,param_2);
    }
    else {
      iVar1 = FUN_012fdbc0(param_1,param_2);
    }
  }
  else {
    iVar1 = FUN_012fdfb4(*param_1,param_2);
  }
  if ((iVar1 != 0) ||
     (iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00532796,2), iVar1 != 0)) {
    return 1;
  }
  param_1 = param_1 + 1;
  if ((param_2[2] & 0x2000000) != 0) {
    uVar2 = FUN_012fdfb4(*param_1,param_2);
    return uVar2;
  }
  if ((param_2[2] & 0x4000000) == 0) {
    uVar2 = FUN_012fd02c(param_1,param_2);
    return uVar2;
  }
  uVar2 = FUN_012fdbc0(param_1,param_2);
  return uVar2;
}

