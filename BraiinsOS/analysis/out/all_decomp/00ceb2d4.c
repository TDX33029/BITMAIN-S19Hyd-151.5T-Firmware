// FUN_00ceb2d4 @ 00ceb2d4 size=188 calls_out=1 calls_in=2
// strings: 

void FUN_00ceb2d4(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *param_1;
  if (iVar5 != 0) {
    puVar3 = (uint *)(iVar5 + 0x20);
    do {
      uVar6 = *puVar3;
      bVar2 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar2);
    *puVar3 = uVar6 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar6 & 10) == 8) {
      (**(code **)(*(int *)(iVar5 + 0x10) + 8))(*(undefined4 *)(iVar5 + 0x14));
    }
    if ((uVar6 & 2) != 0) {
      bVar1 = *(byte *)(iVar5 + 8);
      *(undefined1 *)(iVar5 + 8) = 2;
      if ((bVar1 & 0xfd) != 0) {
        (**(code **)**(undefined4 **)(iVar5 + 0xc))();
      }
    }
    piVar4 = (int *)*param_1;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f2f58(*param_1);
        return;
      }
    }
  }
  return;
}

