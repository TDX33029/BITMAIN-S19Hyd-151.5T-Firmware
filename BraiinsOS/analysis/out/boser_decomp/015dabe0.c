// FUN_015dabe0 @ 015dabe0 size=140 calls_out=0 calls_in=2
// strings: 

longlong FUN_015dabe0(int *param_1,uint param_2)

{
  uint *puVar2;
  uint *puVar1;
  int iVar3;
  uint uVar4;
  
  if (param_1[4] == 0) {
    return (ulonglong)param_2 << 0x20;
  }
  iVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    puVar1 = (uint *)param_1[2];
    do {
      puVar2 = puVar1 + 1;
      uVar4 = *puVar1;
      iVar3 = iVar3 + -0x140;
      puVar1 = puVar2;
    } while ((uVar4 & 0x80808080) == 0x80808080);
    uVar4 = uVar4 & 0x80808080 ^ 0x80808080;
    *param_1 = iVar3;
    param_1[2] = (int)puVar2;
  }
  param_1[4] = param_1[4] + -1;
  param_1[1] = uVar4 - 1 & uVar4;
  iVar3 = iVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                 (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) * -0x50;
  return CONCAT44(iVar3 + -0x40,iVar3 + -0x50);
}

