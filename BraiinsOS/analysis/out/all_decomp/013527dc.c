// FUN_013527dc @ 013527dc size=248 calls_out=1 calls_in=1
// strings: 

void FUN_013527dc(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar9 = param_1[3];
  if (uVar9 != 0) {
    uVar4 = *param_1;
    uVar10 = param_1[1];
    uVar6 = param_1[2];
    uVar2 = uVar6 - uVar4;
    if (uVar6 < uVar4) {
      uVar2 = uVar6;
    }
    uVar6 = uVar4 - uVar2;
    iVar11 = uVar9 - uVar6;
    if (uVar9 < uVar6) {
      iVar11 = 0;
    }
    if (uVar9 <= uVar6) {
      uVar4 = uVar2 + uVar9;
    }
    if (uVar4 != uVar2) {
      iVar7 = 0;
      do {
        iVar8 = iVar7 + 1;
        puVar3 = (undefined4 *)(uVar10 + uVar2 * 0xc + iVar7 * 0xc);
        piVar5 = (int *)*puVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(*puVar3);
        }
        iVar7 = iVar8;
      } while (iVar8 != uVar4 - uVar2);
    }
    if (uVar6 < uVar9) {
      iVar7 = 0;
      do {
        iVar8 = iVar7 + 1;
        puVar3 = (undefined4 *)(uVar10 + iVar7 * 0xc);
        piVar5 = (int *)*puVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar1 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar1);
        *piVar5 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013532e4(*puVar3);
        }
        iVar7 = iVar8;
      } while (iVar8 != iVar11);
    }
  }
  return;
}

