// FUN_0140496c @ 0140496c size=204 calls_out=2 calls_in=1
// strings: 

void FUN_0140496c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = *(uint *)(param_1 + 0x108);
  if (uVar10 < 9) {
    if (uVar10 != 0) {
      uVar7 = 0;
      do {
        piVar3 = *(int **)(param_1 + 0x10 + uVar7 * 0x20);
        uVar8 = uVar7 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0140a97c(*(undefined4 *)(param_1 + 0x10 + uVar7 * 0x20));
        }
        uVar7 = uVar8;
      } while (uVar8 != uVar10);
    }
    return;
  }
  iVar6 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 8);
  if (iVar6 != 0) {
    iVar5 = 0;
    do {
      iVar4 = iVar5 * 0x20;
      iVar5 = iVar5 + 1;
      puVar2 = (undefined4 *)(iVar9 + iVar4 + 8);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0140a97c(*puVar2);
      }
    } while (iVar5 != iVar6);
  }
  FUN_01af7af8(uVar10,iVar9,8,0x20);
  return;
}

