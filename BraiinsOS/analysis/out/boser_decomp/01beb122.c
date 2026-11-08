// FUN_01beb122 @ 01beb122 size=70 calls_out=0 calls_in=1
// strings: 

int FUN_01beb122(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[0x12] = param_1[0x12] - 1 | param_1[0x12];
  if (param_1[5] != param_1[7]) {
    (*(code *)param_1[9])(param_1,0);
  }
  uVar1 = *param_1;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  if ((int)(uVar1 << 0x1d) < 0) {
    *param_1 = uVar1 | 0x20;
    iVar2 = -1;
  }
  else {
    iVar2 = (int)(uVar1 << 0x1b) >> 0x1f;
    param_1[1] = param_1[0xb] + param_1[0xc];
    param_1[2] = param_1[0xb] + param_1[0xc];
  }
  return iVar2;
}

