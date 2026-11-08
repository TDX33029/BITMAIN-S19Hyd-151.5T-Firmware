// FUN_010b39f8 @ 010b39f8 size=236 calls_out=2 calls_in=3
// strings: 

undefined4 FUN_010b39f8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_010b58e4();
  bVar6 = *(int *)(param_1 + 0x88) != 0;
  iVar1 = 0;
  if (bVar6) {
    iVar1 = *(int *)(param_1 + 0x8c);
  }
  if (bVar6 && iVar1 != 0) {
    puVar3 = (uint *)(iVar1 + 0x18);
    uVar5 = *(uint *)(iVar1 + 0x18);
    do {
      while( true ) {
        uVar4 = uVar5;
        if ((uVar4 & 4) != 0) goto LAB_010b3a8c;
        uVar5 = *puVar3;
        if (uVar5 == uVar4) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar6 = (bool)hasExclusiveAccess(puVar3);
      if (bVar6) {
        *puVar3 = uVar4 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar6);
LAB_010b3a8c:
    if ((uVar4 & 5) == 1) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 8))(*(undefined4 *)(iVar1 + 0x14));
    }
    piVar2 = *(int **)(param_1 + 0x8c);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar1 = *piVar2;
        bVar6 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar6);
      *piVar2 = iVar1 + -1;
      if (iVar1 == 1) {
        DataMemoryBarrier(0xb);
        FUN_010b50b8(*(undefined4 *)(param_1 + 0x8c));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(int *)(param_1 + 0x8c) = (int)uVar7;
  return (int)((ulonglong)uVar7 >> 0x20);
}

