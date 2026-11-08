// FUN_007633b0 @ 007633b0 size=88 calls_out=0 calls_in=1
// strings: 

int FUN_007633b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar4;
  uint *puVar3;
  
  iVar1 = *param_1;
  uVar2 = param_1[1];
  if (uVar2 == 0) {
    puVar3 = (uint *)param_1[2];
    do {
      puVar4 = puVar3 + 1;
      uVar2 = *puVar3;
      iVar1 = iVar1 + -0x20;
      puVar3 = puVar4;
    } while ((uVar2 & 0x80808080) == 0x80808080);
    param_1[2] = (int)puVar4;
    uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
    *param_1 = iVar1;
  }
  param_1[1] = uVar2 - 1 & uVar2;
  return iVar1 - (LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                          | uVar2 >> 0x18) & 0x38U);
}

