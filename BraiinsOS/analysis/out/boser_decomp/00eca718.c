// FUN_00eca718 @ 00eca718 size=320 calls_out=7 calls_in=0
// strings: 

void FUN_00eca718(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_1 + 0xf4)) {
  case 0:
    if (*(int *)(param_1 + 0xa8) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    }
    if (*(int *)(param_1 + 0xb4) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    }
    FUN_00eca9c4(param_1);
    piVar2 = *(int **)(param_1 + 0xe4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_1 + 0xe4));
    }
    goto LAB_00eca860;
  default:
    return;
  case 3:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    break;
  case 4:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104));
    *(undefined1 *)(param_1 + 0xf6) = 0;
    if (*(int *)(param_1 + 0x90) != -0x7fffffe6) {
      FUN_00eca5e8();
    }
    break;
  case 5:
    FUN_01139b38(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    goto LAB_00eca7fc;
  }
  FUN_00df0e34(param_1 + 0xe8);
LAB_00eca7fc:
  if (*(int *)(param_1 + 0xa8) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
  }
  if (*(int *)(param_1 + 0xb4) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
  }
  if (*(char *)(param_1 + 0xf7) != '\0') {
    FUN_00eca9c4(param_1);
  }
  piVar2 = *(int **)(param_1 + 0xe4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(*(undefined4 *)(param_1 + 0xe4));
  }
LAB_00eca860:
  FUN_00d34d28(param_1 + 0xc0);
  return;
}

