// FUN_0170c1b0 @ 0170c1b0 size=316 calls_out=5 calls_in=2
// strings: 

void FUN_0170c1b0(int *param_1)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)*param_1;
  FUN_018817d0(piVar5 + 2);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x21) != '\x02') {
    iVar6 = *(int *)(iVar2 + 0x14);
    if (iVar6 != 0) {
      puVar4 = *(undefined4 **)(iVar2 + 0x18);
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar6);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_01be4678(iVar6);
      }
    }
    piVar5 = *(int **)(iVar2 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(iVar2 + 0x1c));
    }
    FUN_01705050(iVar2 + 8);
  }
  if (*(int *)(iVar2 + 0x28) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x28) + 0xc))(*(undefined4 *)(iVar2 + 0x2c));
  }
  if (*(int *)(iVar2 + 0x34) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x34) + 0xc))(*(undefined4 *)(iVar2 + 0x38));
  }
  if (iVar2 != -1) {
    piVar5 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(iVar2);
      return;
    }
  }
  return;
}

