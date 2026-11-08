// FUN_0102ab84 @ 0102ab84 size=208 calls_out=1 calls_in=1
// strings: 

void FUN_0102ab84(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 8);
  if (((5 < uVar1 - 6) && (uVar1 < 3)) && (uVar1 != 0)) {
    if (uVar1 == 1) {
      (**(code **)(param_1[10] + 0x10))(param_1 + 0xd,param_1[0xb],param_1[0xc]);
    }
    else if ((param_1[9] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[10]);
      iVar2 = param_1[0x10];
      goto joined_r0x0102abf4;
    }
  }
  iVar2 = param_1[0x10];
joined_r0x0102abf4:
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(param_1[0x11]);
  }
  if (param_1[0x14] != 0) {
    (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0102ac34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x16] + 0xc))(param_1[0x17]);
  return;
}

