// FUN_0181e958 @ 0181e958 size=196 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_0181e958(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[9] >> 0x16;
  uVar2 = uVar1 * 0x3d1 + *param_1;
  uVar1 = param_1[1] + uVar1 * 0x40 + (uVar2 >> 0x1a);
  *param_1 = uVar2 & 0x3ffffff;
  uVar2 = param_1[2] + (uVar1 >> 0x1a);
  param_1[1] = uVar1 & 0x3ffffff;
  uVar1 = param_1[3] + (uVar2 >> 0x1a);
  param_1[2] = uVar2 & 0x3ffffff;
  uVar2 = param_1[4] + (uVar1 >> 0x1a);
  param_1[3] = uVar1 & 0x3ffffff;
  uVar1 = param_1[5] + (uVar2 >> 0x1a);
  param_1[4] = uVar2 & 0x3ffffff;
  param_1[5] = uVar1 & 0x3ffffff;
  uVar1 = param_1[6] + (uVar1 >> 0x1a);
  param_1[6] = uVar1 & 0x3ffffff;
  uVar1 = param_1[7] + (uVar1 >> 0x1a);
  param_1[7] = uVar1 & 0x3ffffff;
  uVar1 = param_1[8] + (uVar1 >> 0x1a);
  param_1[8] = uVar1 & 0x3ffffff;
  param_1[9] = (param_1[9] & 0x3fffff) + (uVar1 >> 0x1a);
  return 0;
}

