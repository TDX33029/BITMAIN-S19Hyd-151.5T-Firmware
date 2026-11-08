// FUN_014d9fa8 @ 014d9fa8 size=452 calls_out=9 calls_in=2
// strings: 

void FUN_014d9fa8(int param_1)

{
  bool bVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (*(char *)(param_1 + 0x129) == '\0') {
    FUN_01466814(param_1);
    FUN_0145d5e0(param_1 + 0x98);
    return;
  }
  if (*(char *)(param_1 + 0x129) == '\x03') {
    uVar5 = *(undefined4 *)(param_1 + 0x90);
    puVar6 = *(undefined4 **)(param_1 + 0x94);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    FUN_014c14a4(param_1 + 0x10c);
    piVar2 = *(int **)(param_1 + 0xfc);
    *(undefined1 *)(param_1 + 299) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0xfc));
    }
    piVar2 = *(int **)(param_1 + 0xf0);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_010c353c(*(undefined4 *)(param_1 + 0xf0));
    }
    piVar2 = *(int **)(param_1 + 0xf4);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    }
    piVar2 = *(int **)(param_1 + 0x84);
    *(undefined1 *)(param_1 + 300) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01561b24(*(undefined4 *)(param_1 + 0x84));
    }
    piVar2 = *(int **)(param_1 + 0x88);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0149e51c(*(undefined4 *)(param_1 + 0x88));
    }
    if (*(char *)(param_1 + 0x70) != '\x02') {
      (**(code **)(*(int *)(param_1 + 0x60) + 0x10))
                (param_1 + 0x6c,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
    }
    piVar2 = *(int **)(param_1 + 0x58);
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
        return;
      }
    }
  }
  return;
}

