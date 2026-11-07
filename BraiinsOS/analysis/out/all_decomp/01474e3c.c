// FUN_01474e3c @ 01474e3c size=220 calls_out=3 calls_in=0
// strings: 

void FUN_01474e3c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int local_68;
  int iStack_64;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x70);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0x60) + 8))(*(undefined4 *)(iVar2 + 100));
    }
    if ((uVar5 & 2) != 0) {
      FUN_016dd1aa(&local_68,(undefined4 *)(iVar2 + 8),0x58);
      *(undefined4 *)(iVar2 + 8) = 4;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (local_68 != 4 || iStack_64 != 0) {
        FUN_0146b2dc(&local_68);
      }
    }
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014a545c(*param_1);
        return;
      }
    }
  }
  return;
}

