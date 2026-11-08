// FUN_01363068 @ 01363068 size=288 calls_out=2 calls_in=2
// strings: 

void FUN_01363068(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  
  iVar15 = 0;
  while (iVar15 != param_2) {
    piVar6 = (int *)(param_1 + iVar15 * 0x20);
    iVar15 = iVar15 + 1;
    iVar7 = piVar6[1];
    if (iVar7 != 0) {
      iVar10 = piVar6[3];
      if (iVar10 != 0) {
        puVar11 = (uint *)*piVar6;
        puVar13 = puVar11 + 1;
        uVar14 = ~*puVar11 & 0x80808080;
        do {
          puVar12 = puVar13;
          if (uVar14 == 0) {
            do {
              puVar13 = puVar12 + 1;
              uVar14 = *puVar12;
              puVar11 = puVar11 + -0xc;
              puVar12 = puVar13;
            } while ((uVar14 & 0x80808080) == 0x80808080);
            uVar14 = uVar14 & 0x80808080 ^ 0x80808080;
          }
          uVar1 = uVar14 >> 8;
          uVar2 = uVar14 >> 0x10;
          uVar3 = uVar14 >> 0x18;
          uVar4 = uVar14 << 0x18;
          uVar14 = uVar14 - 1 & uVar14;
          iVar10 = iVar10 + -1;
          uVar1 = (uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3) >> 3;
          piVar8 = (int *)puVar11[uVar1 * -3 + -3];
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar8;
            bVar5 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar5);
          *piVar8 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0143daec(puVar11[uVar1 * -3 + -3],puVar11[uVar1 * -3 + -2]);
          }
        } while (iVar10 != 0);
      }
      if (iVar7 * 0xd != -0x11) {
        thunk_FUN_016d3fb4(*piVar6 + iVar7 * -0xc + -0xc);
      }
    }
  }
  return;
}

