// FUN_016dae50 @ 016dae50 size=56 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_016dae50(uint *param_1)

{
  uint uVar1;
  
  param_1[0x12] = param_1[0x12] - 1 | param_1[0x12];
  if ((*param_1 & 8) == 0) {
    uVar1 = param_1[0xb];
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = param_1[0xc] + uVar1;
    param_1[5] = uVar1;
    param_1[7] = uVar1;
    return 0;
  }
  *param_1 = *param_1 | 0x20;
  return 0xffffffff;
}

