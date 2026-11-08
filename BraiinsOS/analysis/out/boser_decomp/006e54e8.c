// FUN_006e54e8 @ 006e54e8 size=124 calls_out=0 calls_in=2
// strings: 

int FUN_006e54e8(int *param_1)

{
  uint *puVar2;
  uint *puVar1;
  int iVar3;
  uint uVar4;
  
  if (param_1[4] == 0) {
    return 0;
  }
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    puVar1 = (uint *)param_1[2];
    do {
      puVar2 = puVar1 + 1;
      uVar4 = *puVar1;
      iVar3 = iVar3 + -0x20;
      puVar1 = puVar2;
    } while ((uVar4 & 0x80808080) == 0x80808080);
    uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
    *param_1 = iVar3;
    param_1[2] = (int)puVar2;
  }
  param_1[4] = param_1[4] + -1;
  param_1[1] = uVar4 - 1 & uVar4;
  return (iVar3 - (LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) & 0x38U)) + -8;
}

