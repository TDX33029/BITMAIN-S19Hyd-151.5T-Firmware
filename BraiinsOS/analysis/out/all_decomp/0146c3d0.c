// FUN_0146c3d0 @ 0146c3d0 size=244 calls_out=4 calls_in=2
// strings: 

void FUN_0146c3d0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  int unaff_r6;
  undefined4 *puVar6;
  bool bVar7;
  
  piVar3 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(*(undefined4 *)(param_1 + 0x18));
  }
  if (*(int *)(param_1 + 0x28) == 1) {
    bVar1 = *(int *)(param_1 + 0x30) == 0;
    bVar2 = *(int *)(param_1 + 0x34) == 0;
    bVar7 = bVar1 && bVar2;
    if (!bVar1 || !bVar2) {
      unaff_r6 = *(int *)(param_1 + 0x38);
      bVar7 = unaff_r6 == 0;
    }
    if (!bVar7) {
      puVar6 = *(undefined4 **)(param_1 + 0x3c);
      pcVar5 = (code *)*puVar6;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(unaff_r6);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(unaff_r6);
      }
    }
  }
  else if (*(int *)(param_1 + 0x28) == 0) {
    FUN_0146c550(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    (**(code **)(*(int *)(param_1 + 0x60) + 0xc))(*(undefined4 *)(param_1 + 100));
  }
  piVar3 = *(int **)(param_1 + 0x68);
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015614d8(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
      return;
    }
  }
  return;
}

