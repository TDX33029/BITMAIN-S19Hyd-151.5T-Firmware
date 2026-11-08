// FUN_01561948 @ 01561948 size=236 calls_out=1 calls_in=1
// strings: 

void FUN_01561948(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar10 = param_1[3];
  if (uVar10 != 0) {
    uVar3 = *param_1;
    uVar12 = param_1[1];
    uVar5 = param_1[2];
    uVar2 = uVar5 - uVar3;
    if (uVar5 < uVar3) {
      uVar2 = uVar5;
    }
    uVar5 = uVar3 - uVar2;
    iVar11 = uVar10 - uVar5;
    if (uVar10 < uVar5) {
      iVar11 = 0;
    }
    if (uVar10 <= uVar5) {
      uVar3 = uVar2 + uVar10;
    }
    if (uVar3 != uVar2) {
      iVar9 = uVar12 + uVar2 * 4;
      iVar8 = 0;
      do {
        piVar4 = *(int **)(iVar9 + iVar8 * 4);
        iVar6 = iVar8 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01560fac(*(undefined4 *)(iVar9 + iVar8 * 4));
        }
        iVar8 = iVar6;
      } while (iVar6 != uVar3 - uVar2);
    }
    if (uVar5 < uVar10) {
      iVar8 = 0;
      do {
        piVar4 = *(int **)(uVar12 + iVar8 * 4);
        iVar9 = iVar8 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01560fac(*(undefined4 *)(uVar12 + iVar8 * 4));
        }
        iVar8 = iVar9;
      } while (iVar9 != iVar11);
    }
  }
  return;
}

