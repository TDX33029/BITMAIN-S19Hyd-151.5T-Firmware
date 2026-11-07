// FUN_00772628 @ 00772628 size=268 calls_out=4 calls_in=1
// strings: 

void FUN_00772628(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  switch(*(undefined1 *)(param_1 + 0x1dc)) {
  case 3:
    goto switchD_00772648_caseD_3;
  case 4:
    if (*(char *)(param_1 + 0x21c) == '\x03') {
      if (*(short *)(param_1 + 0x1fc) == 3) {
        piVar3 = *(int **)(param_1 + 0x200);
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
          if (bVar1) {
            *piVar3 = 0x84;
            goto switchD_00772648_caseD_3;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar3[2] + 0x10))();
      }
    }
    else if (*(char *)(param_1 + 0x21c) == '\0') {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1ec),*(undefined4 *)(param_1 + 0x1f0));
    }
    goto switchD_00772648_caseD_3;
  case 5:
    cVar2 = *(char *)(param_1 + 0xa9c);
    if (cVar2 == '\x03') {
      iVar4 = 0xa9d;
      FUN_00772794(param_1 + 0x3a8);
      goto LAB_007726d0;
    }
LAB_007726a8:
    if (cVar2 == '\0') {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500));
    }
    break;
  case 6:
    cVar2 = *(char *)(param_1 + 0x8f4);
    if (cVar2 != '\x03') goto LAB_007726a8;
    iVar4 = 0x8f5;
    FUN_00772794(param_1 + 0x200);
LAB_007726d0:
    *(undefined1 *)(param_1 + iVar4) = 0;
    break;
  default:
    return;
  }
  if (*(int *)(param_1 + 0x18) != 3) {
    FUN_00772924();
  }
switchD_00772648_caseD_3:
  FUN_00b12bd8(*(undefined4 *)(param_1 + 0x10));
  return;
}

