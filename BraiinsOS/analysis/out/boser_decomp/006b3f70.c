// FUN_006b3f70 @ 006b3f70 size=324 calls_out=4 calls_in=7
// strings: 

void FUN_006b3f70(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    iVar13 = param_1[3];
    if (iVar13 != 0) {
      puVar11 = (uint *)*param_1;
      puVar10 = puVar11 + 1;
      uVar12 = ~*puVar11 & 0x80808080;
      do {
        puVar9 = puVar10;
        if (uVar12 == 0) {
          do {
            puVar10 = puVar9 + 1;
            uVar12 = *puVar9;
            puVar11 = puVar11 + -0x48;
            puVar9 = puVar10;
          } while ((uVar12 & 0x80808080) == 0x80808080);
          uVar12 = uVar12 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = uVar12 >> 8;
        uVar2 = uVar12 >> 0x10;
        uVar3 = uVar12 >> 0x18;
        uVar4 = uVar12 << 0x18;
        uVar12 = uVar12 - 1 & uVar12;
        iVar13 = iVar13 + -1;
        uVar1 = (uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3;
        piVar6 = (int *)puVar11[uVar1 * -0x12 + -0x12];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar5 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar5);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(puVar11[uVar1 * -0x12 + -0x12],puVar11[uVar1 * -0x12 + -0x11]);
        }
        piVar6 = (int *)puVar11[uVar1 * -0x12 + -2];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar6;
          bVar5 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar5);
        *piVar6 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(puVar11[uVar1 * -0x12 + -2],puVar11[uVar1 * -0x12 + -1]);
        }
        FUN_00b96a8c(puVar11 + uVar1 * -0x12 + -0xe);
        FUN_006b39d0(puVar11 + uVar1 * -0x12 + -0xb);
      } while (iVar13 != 0);
    }
    iVar13 = iVar7 * 0x48 + 0x48;
    if (iVar7 + iVar13 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar13);
      return;
    }
  }
  return;
}

