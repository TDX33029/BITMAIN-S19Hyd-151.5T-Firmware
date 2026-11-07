// FUN_005becd4 @ 005becd4 size=344 calls_out=3 calls_in=7
// strings: 

void FUN_005becd4(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  
  FUN_005c3320();
  uVar5 = 0xf;
  puVar6 = (uint *)(param_1 + 0x50);
  uVar2 = *puVar6;
  if ((int)uVar2 < 0) {
    uVar5 = uVar2 ^ 0x80000000;
  }
  if (uVar5 == 0x17) {
    if (*(int *)(param_1 + 0x54) == 0) goto LAB_005bed68;
    puVar6 = (uint *)(param_1 + 0x58);
  }
  else {
    if (uVar5 != 0xf) {
      if (uVar5 != 0xe) goto LAB_005bed68;
      puVar6 = (uint *)(param_1 + 0x54);
      uVar2 = *puVar6;
    }
    if (uVar2 != 0) {
      thunk_FUN_016d3fb4(puVar6[1]);
    }
    if (puVar6[3] != 0) {
      thunk_FUN_016d3fb4(puVar6[4]);
    }
    if ((puVar6[6] & 0x7fffffff) == 0) goto LAB_005bed68;
    puVar6 = puVar6 + 7;
  }
  thunk_FUN_016d3fb4(*puVar6);
LAB_005bed68:
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 != 0) {
    puVar6 = (uint *)(iVar3 + 0x2f8);
    uVar2 = *(uint *)(iVar3 + 0x2f8);
    do {
      while( true ) {
        uVar5 = uVar2;
        if ((uVar5 & 4) != 0) goto LAB_005bedd0;
        uVar2 = *puVar6;
        if (uVar2 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar6);
      if (bVar1) {
        *puVar6 = uVar5 | 2;
      }
      DataMemoryBarrier(0xb);
    } while (!bVar1);
LAB_005bedd0:
    if ((uVar5 & 5) == 1) {
      (**(code **)(*(int *)(iVar3 + 0x2f0) + 8))(*(undefined4 *)(iVar3 + 0x2f4));
    }
    piVar4 = *(int **)(param_1 + 0x88);
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00e457a8(*(undefined4 *)(param_1 + 0x88));
        return;
      }
      return;
    }
  }
  return;
}

