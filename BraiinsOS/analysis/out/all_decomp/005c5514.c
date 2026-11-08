// FUN_005c5514 @ 005c5514 size=204 calls_out=1 calls_in=0
// strings: 

void FUN_005c5514(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0x18);
    uVar6 = *(uint *)(iVar2 + 0x18);
    do {
      while( true ) {
        uVar5 = uVar6;
        if ((uVar5 & 4) != 0) goto LAB_005c5584;
        uVar6 = *puVar4;
        if (uVar6 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar4);
      if (bVar1) {
        *puVar4 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_005c5584:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar2 + 0x10) + 8))(*(undefined4 *)(iVar2 + 0x14));
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
        FUN_0165863c(*param_1);
        return;
      }
      return;
    }
  }
  return;
}

