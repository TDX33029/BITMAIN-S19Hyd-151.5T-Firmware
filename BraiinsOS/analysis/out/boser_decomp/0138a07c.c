// FUN_0138a07c @ 0138a07c size=188 calls_out=1 calls_in=1
// strings: 

void FUN_0138a07c(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 3 && param_1[1] == 0) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 8);
  if (((5 < uVar1 - 6) && (uVar1 < 3)) && (uVar1 != 0)) {
    if (uVar1 == 1) {
      (**(code **)(param_1[10] + 0x10))(param_1 + 0xd,param_1[0xb],param_1[0xc]);
    }
    else if (param_1[9] != -0x80000000) {
      FUN_019bb7e0(param_1[9],param_1[10]);
    }
  }
  if (param_1[0x10] != 0) {
    (**(code **)(param_1[0x10] + 0xc))(param_1[0x11]);
  }
  if (param_1[0x14] != 0) {
    (**(code **)(param_1[0x14] + 0xc))(param_1[0x15]);
  }
  if (param_1[0x16] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0138a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x16] + 0xc))(param_1[0x17]);
  return;
}

