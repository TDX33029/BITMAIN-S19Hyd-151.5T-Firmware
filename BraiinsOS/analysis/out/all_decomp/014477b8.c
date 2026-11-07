// FUN_014477b8 @ 014477b8 size=384 calls_out=2 calls_in=4
// strings: 

void FUN_014477b8(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_stack_00000000;
  
  piVar3 = (int *)(param_1 + 8);
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar3);
      goto LAB_014477e0;
    }
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_014477e0:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    if (*(char *)(param_1 + 0xc) == '\0') {
      uVar4 = 0;
LAB_01447834:
      iVar2 = *(int *)(param_1 + 0x1a8) + -1;
      *(int *)(param_1 + 0x1a8) = iVar2;
      if (iVar2 == 1) {
        iVar2 = *(int *)(param_1 + 0xe8);
        *(undefined4 *)(param_1 + 0xe8) = 0;
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 4))(*(undefined4 *)(param_1 + 0xec));
        }
      }
      if (((uVar4 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = 0;
      goto LAB_014478a4;
    }
LAB_01447804:
    if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar2 = FUN_015bf3f8(), iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    if (*(char *)(param_1 + 0xc) == '\0') goto LAB_01447834;
    if (uVar4 == 0) goto LAB_01447804;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 0;
LAB_014478a4:
  if (iVar2 == 2) {
    software_interrupt(0);
    FUN_016d3496(piVar3,0x81,1,in_stack_00000000);
    return;
  }
  return;
}

