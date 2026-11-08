// FUN_0152aa00 @ 0152aa00 size=224 calls_out=2 calls_in=1
// strings: 

void FUN_0152aa00(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  iVar11 = param_1[1];
  if (iVar11 != 0) {
    iVar12 = param_1[3];
    if (iVar12 != 0) {
      puVar10 = (uint *)*param_1;
      puVar9 = puVar10 + 1;
      uVar13 = ~*puVar10 & 0x80808080;
      do {
        puVar8 = puVar9;
        if (uVar13 == 0) {
          do {
            puVar9 = puVar8 + 1;
            uVar13 = *puVar8;
            puVar10 = puVar10 + -8;
            puVar8 = puVar9;
          } while ((uVar13 & 0x80808080) == 0x80808080);
          uVar13 = uVar13 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = uVar13 >> 8;
        uVar2 = uVar13 >> 0x10;
        uVar3 = uVar13 >> 0x18;
        uVar4 = uVar13 << 0x18;
        uVar13 = uVar13 - 1 & uVar13;
        iVar12 = iVar12 + -1;
        piVar6 = *(int **)((int)puVar10 +
                          (-4 - (LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
                                         uVar3) & 0x38U)));
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar5 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar5);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0155b5cc();
        }
      } while (iVar12 != 0);
    }
    iVar12 = iVar11 * 8 + 8;
    if (iVar11 + iVar12 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar12);
      return;
    }
  }
  return;
}

