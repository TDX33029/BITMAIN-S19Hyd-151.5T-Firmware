// FUN_016c9160 @ 016c9160 size=172 calls_out=1 calls_in=3
// strings: 

void FUN_016c9160(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  if (param_2 == 0) {
    return;
  }
  puVar10 = param_1 + 1;
  uVar8 = ~*param_1 & 0x80808080;
  do {
    puVar9 = puVar10;
    if (uVar8 == 0) {
      do {
        puVar10 = puVar9 + 1;
        uVar8 = *puVar9;
        param_1 = param_1 + -0xc;
        puVar9 = puVar10;
      } while ((uVar8 & 0x80808080) == 0x80808080);
      uVar8 = uVar8 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = uVar8 >> 8;
    uVar2 = uVar8 >> 0x10;
    uVar3 = uVar8 >> 0x18;
    uVar4 = uVar8 << 0x18;
    uVar8 = uVar8 - 1 & uVar8;
    param_2 = param_2 + -1;
    uVar1 = (uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3;
    piVar6 = (int *)param_1[uVar1 * -3 + -3];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar5 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar5);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_1[uVar1 * -3 + -3],param_1[uVar1 * -3 + -2]);
    }
  } while (param_2 != 0);
  return;
}

