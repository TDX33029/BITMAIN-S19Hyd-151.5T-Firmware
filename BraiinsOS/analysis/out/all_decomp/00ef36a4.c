// FUN_00ef36a4 @ 00ef36a4 size=348 calls_out=1 calls_in=2
// strings: 

void FUN_00ef36a4(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = param_1[3];
  if (param_2 < uVar12) {
    uVar6 = *param_1;
    uVar10 = param_1[1];
    uVar8 = param_1[2];
    param_1[3] = param_2;
    uVar2 = uVar8 - uVar6;
    if (uVar8 < uVar6) {
      uVar2 = uVar8;
    }
    uVar6 = uVar6 - uVar2;
    iVar11 = uVar12 - uVar6;
    if (uVar12 < uVar6) {
      iVar11 = 0;
    }
    uVar8 = uVar12;
    if (uVar6 < uVar12) {
      uVar8 = uVar6;
    }
    if (uVar6 < param_2) {
      iVar3 = param_2 - uVar8;
      if (iVar11 != iVar3) {
        iVar9 = 0;
        do {
          puVar4 = (undefined4 *)(uVar10 + iVar3 * 8 + iVar9 * 8);
          piVar5 = (int *)*puVar4;
          iVar9 = iVar9 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac624(*puVar4,puVar4[1]);
          }
        } while (iVar9 != iVar11 - iVar3);
      }
    }
    else {
      if (uVar8 != param_2) {
        iVar3 = 0;
        do {
          puVar4 = (undefined4 *)(uVar10 + uVar2 * 8 + param_2 * 8 + iVar3 * 8);
          piVar5 = (int *)*puVar4;
          iVar3 = iVar3 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac624(*puVar4,puVar4[1]);
          }
        } while (iVar3 != uVar8 - param_2);
      }
      if (uVar6 < uVar12) {
        iVar3 = 0;
        do {
          puVar4 = (undefined4 *)(uVar10 + iVar3 * 8);
          piVar5 = (int *)*puVar4;
          iVar3 = iVar3 + 1;
          DataMemoryBarrier(0xb);
          do {
            iVar9 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00aac624(*puVar4,puVar4[1]);
          }
        } while (iVar3 != iVar11);
      }
    }
  }
  return;
}

