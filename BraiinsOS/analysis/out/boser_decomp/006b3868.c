// FUN_006b3868 @ 006b3868 size=300 calls_out=6 calls_in=7
// strings: 

void FUN_006b3868(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  
  iVar6 = param_1[1];
  if (iVar6 != 0) {
    iVar13 = param_1[3];
    if (iVar13 != 0) {
      puVar12 = (uint *)*param_1;
      puVar10 = puVar12 + 1;
      uVar11 = ~*puVar12 & 0x80808080;
      do {
        puVar9 = puVar10;
        if (uVar11 == 0) {
          do {
            puVar10 = puVar9 + 1;
            uVar11 = *puVar9;
            puVar12 = puVar12 + -0x40;
            puVar9 = puVar10;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = uVar11 >> 8;
        uVar8 = uVar11 >> 0x10;
        uVar2 = uVar11 >> 0x18;
        uVar3 = uVar11 << 0x18;
        uVar11 = uVar11 - 1 & uVar11;
        iVar13 = iVar13 + -1;
        uVar1 = LZCOUNT(uVar3 | (uVar1 & 0xff) << 0x10 | (uVar8 & 0xff) << 8 | uVar2) & 0x1ffffff8;
        piVar5 = (int *)puVar12[uVar1 * -2 + -0x10];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar4 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar4);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(puVar12[uVar1 * -2 + -0x10],puVar12[uVar1 * -2 + -0xf]);
        }
        uVar8 = puVar12[uVar1 * -2 + -0xb];
        FUN_006f6468(uVar8,puVar12[uVar1 * -2 + -10]);
        FUN_0134aee0(puVar12[uVar1 * -2 + -0xc],uVar8,8,0x70);
        FUN_00b96a8c(puVar12 + uVar1 * -2 + -9);
        FUN_006b39d0(puVar12 + uVar1 * -2 + -6);
      } while (iVar13 != 0);
    }
    iVar13 = iVar6 * 0x40 + 0x40;
    if (iVar6 + iVar13 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar13);
      return;
    }
  }
  return;
}

