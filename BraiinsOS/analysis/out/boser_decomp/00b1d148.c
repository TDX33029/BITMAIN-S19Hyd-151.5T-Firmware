// FUN_00b1d148 @ 00b1d148 size=260 calls_out=3 calls_in=1
// strings: 

void FUN_00b1d148(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  puVar5 = (undefined4 *)(param_1 + 0x10);
  if (iVar7 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x20);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar7);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(iVar7);
    }
  }
  piVar3 = *(int **)(param_1 + 0x24);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x24));
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*puVar5);
    }
  }
  else {
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014212ac(*puVar5);
    }
  }
  piVar3 = *(int **)(param_1 + 0x14);
  FUN_00943f20();
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar7 + -1;
  if (iVar7 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  FUN_009432f8(piVar3 + 8);
  if (piVar3[0x10] != 0) {
    (**(code **)(piVar3[0x10] + 0xc))(piVar3[0x11]);
  }
  if (piVar3 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar2 = piVar3 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar3);
    return;
  }
  return;
}

