// FUN_0152a558 @ 0152a558 size=232 calls_out=2 calls_in=1
// strings: 

void FUN_0152a558(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  
  iVar12 = param_1[1];
  if (iVar12 != 0) {
    iVar13 = param_1[3];
    if (iVar13 != 0) {
      puVar11 = (uint *)*param_1;
      puVar9 = puVar11 + 1;
      uVar10 = ~*puVar11 & 0x80808080;
      do {
        puVar8 = puVar9;
        if (uVar10 == 0) {
          do {
            puVar9 = puVar8 + 1;
            uVar10 = *puVar8;
            puVar11 = puVar11 + -4;
            puVar8 = puVar9;
          } while ((uVar10 & 0x80808080) == 0x80808080);
          uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
        }
        uVar5 = uVar10 >> 8;
        uVar1 = uVar10 >> 0x10;
        uVar2 = uVar10 >> 0x18;
        uVar3 = uVar10 << 0x18;
        uVar10 = uVar10 - 1 & uVar10;
        iVar13 = iVar13 + -1;
        uVar5 = (uint)LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2) >> 1 &
                0x1c;
        piVar6 = *(int **)((int)puVar11 + (-4 - uVar5));
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar4 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar4);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01670d04(*(undefined4 *)((int)puVar11 + (-4 - uVar5)));
        }
      } while (iVar13 != 0);
    }
    iVar13 = iVar12 * 4 + 4;
    if (iVar12 + iVar13 != -5) {
      thunk_FUN_01be4678(*param_1 - iVar13);
      return;
    }
  }
  return;
}

