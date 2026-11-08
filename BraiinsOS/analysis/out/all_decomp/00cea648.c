// FUN_00cea648 @ 00cea648 size=188 calls_out=1 calls_in=4
// strings: 

void FUN_00cea648(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *param_1;
  if (iVar6 != 0) {
    puVar2 = (uint *)(iVar6 + 0x20);
    do {
      uVar7 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar7 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar7 & 10) == 8) {
      (**(code **)(*(int *)(iVar6 + 0x10) + 8))(*(undefined4 *)(iVar6 + 0x14));
    }
    if ((uVar7 & 2) != 0) {
      iVar3 = *(int *)(iVar6 + 8);
      puVar5 = *(undefined4 **)(iVar6 + 0xc);
      *(undefined4 *)(iVar6 + 8) = 0;
      if (iVar3 != 0 && puVar5 != (undefined4 *)0x0) {
        (**(code **)*puVar5)(puVar5);
      }
    }
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4380(*param_1);
        return;
      }
      return;
    }
  }
  return;
}

